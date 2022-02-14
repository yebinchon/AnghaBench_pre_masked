
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_agent {int lock; int state; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fw_card *VAR_3, int VAR_4, void *VAR_5,
  struct sbp_target_agent *VAR_6)
{
 switch (VAR_4) {
 case 128:
  FUNC_0("tgt_agent AGENT_RESET\n");
  FUNC_1(&VAR_6->lock);
  VAR_6->state = VAR_0;
  FUNC_2(&VAR_6->lock);
  return VAR_1;

 default:
  return VAR_2;
 }
}
