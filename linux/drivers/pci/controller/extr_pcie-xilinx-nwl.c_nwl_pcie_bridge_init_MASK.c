
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct nwl_pcie {int ecam_value; int last_busno; int irq_misc; scalar_t__ ecam_base; int phys_ecam_base; int phys_breg_base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int ,int ,char*,struct nwl_pcie*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nwl_pcie*,int ) ;
 int FUNC_5 (struct nwl_pcie*,int,int ) ;
 scalar_t__ FUNC_6 (struct nwl_pcie*) ;
 int VAR_32 ;
 int FUNC_7 (struct nwl_pcie*) ;
 int FUNC_8 (struct platform_device*,char*) ;
 struct platform_device* FUNC_9 (struct device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct nwl_pcie *VAR_33)
{
 struct device *VAR_34 = VAR_33->dev;
 struct platform_device *VAR_35 = FUNC_9(VAR_34);
 u32 VAR_36, VAR_37, VAR_38 = 0;
 int VAR_39;

 VAR_36 = FUNC_4(VAR_33, VAR_12) & VAR_6;
 if (!VAR_36) {
  FUNC_0(VAR_34, "BREG is not present\n");
  return VAR_36;
 }


 FUNC_5(VAR_33, FUNC_3(VAR_33->phys_breg_base),
     VAR_11);
 FUNC_5(VAR_33, FUNC_10(VAR_33->phys_breg_base),
     VAR_10);


 FUNC_5(VAR_33, ~VAR_5 & VAR_4,
     VAR_13);


 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_2) |
     VAR_7, VAR_2);


 FUNC_5(VAR_33, VAR_31, VAR_23);


 FUNC_5(VAR_33, VAR_8,
     VAR_3);

 VAR_39 = FUNC_7(VAR_33);
 if (VAR_39)
  return VAR_39;

 VAR_37 = FUNC_4(VAR_33, VAR_16) & VAR_19;
 if (!VAR_37) {
  FUNC_0(VAR_34, "ECAM is not present\n");
  return VAR_37;
 }


 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_17) |
     VAR_18, VAR_17);

 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_17) |
     (VAR_33->ecam_value << VAR_21),
     VAR_17);

 FUNC_5(VAR_33, FUNC_3(VAR_33->phys_ecam_base),
     VAR_15);
 FUNC_5(VAR_33, FUNC_10(VAR_33->phys_ecam_base),
     VAR_14);


 VAR_37 = FUNC_4(VAR_33, VAR_17);
 VAR_33->last_busno = (VAR_37 & VAR_20) >> VAR_21;

 VAR_37 = VAR_38;
 VAR_37 |= (VAR_38 + 1) << 8;
 VAR_37 |= (VAR_33->last_busno << VAR_21);
 FUNC_11(VAR_37, (VAR_33->ecam_base + VAR_30));

 if (FUNC_6(VAR_33))
  FUNC_1(VAR_34, "Link is UP\n");
 else
  FUNC_1(VAR_34, "Link is DOWN\n");


 VAR_33->irq_misc = FUNC_8(VAR_35, "misc");
 if (VAR_33->irq_misc < 0) {
  FUNC_0(VAR_34, "failed to get misc IRQ %d\n",
   VAR_33->irq_misc);
  return -VAR_9;
 }

 VAR_39 = FUNC_2(VAR_34, VAR_33->irq_misc,
          VAR_32, VAR_22,
          "nwl_pcie:misc", VAR_33);
 if (VAR_39) {
  FUNC_0(VAR_34, "fail to register misc IRQ#%d\n",
   VAR_33->irq_misc);
  return VAR_39;
 }


 FUNC_5(VAR_33, (u32)~VAR_28, VAR_27);


 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_29) &
     VAR_28, VAR_29);


 FUNC_5(VAR_33, VAR_28, VAR_27);



 FUNC_5(VAR_33, (u32)~VAR_25, VAR_24);


 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_26) &
     VAR_25, VAR_26);


 FUNC_5(VAR_33, VAR_25, VAR_24);


 FUNC_5(VAR_33, FUNC_4(VAR_33, VAR_0) |
     VAR_1, VAR_0);

 return 0;
}
