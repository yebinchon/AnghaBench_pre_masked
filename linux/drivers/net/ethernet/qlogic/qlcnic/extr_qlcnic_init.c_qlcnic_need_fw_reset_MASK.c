
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; scalar_t__ fw; scalar_t__ need_fw_reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

int
FUNC_2(struct qlcnic_adapter *VAR_1)
{
 if ((VAR_1->flags & VAR_0) ||
   FUNC_0(VAR_1)) {
  FUNC_1(VAR_1);
  return 1;
 }

 if (VAR_1->need_fw_reset)
  return 1;

 if (VAR_1->fw)
  return 1;

 return 0;
}
