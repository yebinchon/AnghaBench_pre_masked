
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {int dev; scalar_t__ apb_base; scalar_t__ msg_region; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int ,int,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct rockchip_pcie *VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 FUNC_4(0x0, VAR_3->msg_region + VAR_2);


 VAR_5 = FUNC_3(VAR_3->apb_base + VAR_1,
     VAR_4, FUNC_0(VAR_4), 20,
     FUNC_2(5 * VAR_0));
 if (VAR_5) {
  FUNC_1(VAR_3->dev, "PCIe link enter L2 timeout!\n");
  return VAR_5;
 }

 return 0;
}
