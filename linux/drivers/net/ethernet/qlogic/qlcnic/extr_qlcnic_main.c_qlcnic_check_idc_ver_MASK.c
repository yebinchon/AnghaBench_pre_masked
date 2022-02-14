
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3 != VAR_1) {
  FUNC_1(&VAR_2->pdev->dev, "IDC Version mismatch, driver's"
   " idc ver = %x; reqd = %x\n", VAR_1, VAR_3);
 }

 return 0;
}
