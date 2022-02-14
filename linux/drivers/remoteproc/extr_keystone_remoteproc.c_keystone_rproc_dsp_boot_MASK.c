
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_rproc {int reset; int dev; int boot_offset; int dev_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct keystone_rproc *VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_3 & (VAR_1 - 1)) {
  FUNC_0(VAR_2->dev, "invalid boot address 0x%x, must be aligned on a 1KB boundary\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2->dev_ctrl, VAR_2->boot_offset, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "regmap_write of boot address failed, status = %d\n",
   VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_2->reset);

 return 0;
}
