
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hns_mac_cb {scalar_t__ cpld_ctrl_reg; int cpld_ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct hns_mac_cb *VAR_2, int *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 if (!VAR_2->cpld_ctrl)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2->cpld_ctrl,
          VAR_2->cpld_ctrl_reg + VAR_1,
          &VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = !VAR_4;
 return 0;
}
