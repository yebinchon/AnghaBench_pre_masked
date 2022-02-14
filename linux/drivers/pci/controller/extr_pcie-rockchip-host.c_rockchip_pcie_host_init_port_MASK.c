
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {int link_gen; int lanes_map; int * phys; scalar_t__ apb_base; int ep_gpio; struct device* dev; } ;
struct device {int of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int,int ,int,int) ;
 int FUNC_10 (struct rockchip_pcie*) ;
 int FUNC_11 (struct rockchip_pcie*) ;
 int FUNC_12 (struct rockchip_pcie*,scalar_t__) ;
 int FUNC_13 (struct rockchip_pcie*) ;
 int FUNC_14 (struct rockchip_pcie*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct rockchip_pcie *VAR_28)
{
 struct device *VAR_29 = VAR_28->dev;
 int VAR_30, VAR_31 = VAR_0;
 u32 VAR_32;

 FUNC_5(VAR_28->ep_gpio, 0);

 VAR_30 = FUNC_10(VAR_28);
 if (VAR_30)
  return VAR_30;


 VAR_32 = FUNC_12(VAR_28, VAR_6);
 VAR_32 = (VAR_32 & ~VAR_8) |
   (VAR_7 << VAR_9);
 FUNC_14(VAR_28, VAR_32, VAR_6);

 FUNC_13(VAR_28);


 VAR_32 = FUNC_12(VAR_28, VAR_15);
 VAR_32 |= VAR_25 << 16;
 FUNC_14(VAR_28, VAR_32, VAR_15);


 VAR_32 = FUNC_12(VAR_28, VAR_15);
 VAR_32 |= VAR_23;
 FUNC_14(VAR_28, VAR_32, VAR_15);


 FUNC_14(VAR_28, VAR_3,
       VAR_2);

 FUNC_5(VAR_28->ep_gpio, 1);


 VAR_30 = FUNC_9(VAR_28->apb_base + VAR_1,
     VAR_32, FUNC_2(VAR_32), 20,
     500 * VAR_27);
 if (VAR_30) {
  FUNC_4(VAR_29, "PCIe link training gen1 timeout!\n");
  goto err_power_off_phy;
 }

 if (VAR_28->link_gen == 2) {




  VAR_32 = FUNC_12(VAR_28, VAR_15);
  VAR_32 |= VAR_24;
  FUNC_14(VAR_28, VAR_32, VAR_15);

  VAR_30 = FUNC_9(VAR_28->apb_base + VAR_5,
      VAR_32, FUNC_1(VAR_32), 20,
      500 * VAR_27);
  if (VAR_30)
   FUNC_3(VAR_29, "PCIe link training gen2 timeout, fall back to gen1!\n");
 }


 VAR_32 = FUNC_12(VAR_28, VAR_5);
 VAR_32 = 0x1 << ((VAR_32 & VAR_10) >>
     VAR_11);
 FUNC_3(VAR_29, "current link width is x%d\n", VAR_32);


 VAR_28->lanes_map = FUNC_11(VAR_28);
 for (VAR_31 = 0; VAR_31 < VAR_0; VAR_31++) {
  if (!(VAR_28->lanes_map & FUNC_0(VAR_31))) {
   FUNC_3(VAR_29, "idling lane %d\n", VAR_31);
   FUNC_8(VAR_28->phys[VAR_31]);
  }
 }

 FUNC_14(VAR_28, VAR_26,
       VAR_4);
 FUNC_14(VAR_28,
       VAR_22 << VAR_19,
       VAR_18);


 VAR_32 = FUNC_12(VAR_28, VAR_20);
 VAR_32 &= ~VAR_21;
 FUNC_14(VAR_28, VAR_32, VAR_20);


 if (FUNC_6(VAR_29->of_node, "aspm-no-l0s")) {
  VAR_32 = FUNC_12(VAR_28, VAR_16);
  VAR_32 &= ~VAR_17;
  FUNC_14(VAR_28, VAR_32, VAR_16);
 }

 VAR_32 = FUNC_12(VAR_28, VAR_12);
 VAR_32 &= ~VAR_14;
 VAR_32 |= VAR_13;
 FUNC_14(VAR_28, VAR_32, VAR_12);

 return 0;
err_power_off_phy:
 while (VAR_31--)
  FUNC_8(VAR_28->phys[VAR_31]);
 VAR_31 = VAR_0;
 while (VAR_31--)
  FUNC_7(VAR_28->phys[VAR_31]);
 return VAR_30;
}
