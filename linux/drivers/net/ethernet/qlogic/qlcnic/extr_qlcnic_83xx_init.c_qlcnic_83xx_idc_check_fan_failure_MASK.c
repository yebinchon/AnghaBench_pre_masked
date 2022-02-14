
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 if (VAR_5 & VAR_3) {
  FUNC_2(&VAR_4->pdev->dev,
   "peg halt status1=0x%x\n", VAR_5);
  if (FUNC_0(VAR_5) == VAR_1) {
   FUNC_2(&VAR_4->pdev->dev,
    "On board active cooling fan failed. "
    "Device has been halted.\n");
   FUNC_2(&VAR_4->pdev->dev,
    "Replace the adapter.\n");
   return -VAR_0;
  }
 }

 return 0;
}
