
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_agent {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct fw_card *VAR_2,
  int VAR_3, void *VAR_4, struct sbp_target_agent *VAR_5)
{
 switch (VAR_3) {
 case 128:
  FUNC_0("tgt_agent UNSOLICITED_STATUS_ENABLE\n");

  return VAR_0;

 case 129:
  return VAR_0;

 default:
  return VAR_1;
 }
}
