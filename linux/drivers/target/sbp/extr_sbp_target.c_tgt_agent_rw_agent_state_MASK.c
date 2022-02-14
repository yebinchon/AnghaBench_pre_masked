
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_agent {int state; int lock; } ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fw_card *VAR_2, int VAR_3, void *VAR_4,
  struct sbp_target_agent *VAR_5)
{
 int VAR_6;

 switch (VAR_3) {
 case 129:
  FUNC_1("tgt_agent AGENT_STATE READ\n");

  FUNC_2(&VAR_5->lock);
  VAR_6 = VAR_5->state;
  FUNC_3(&VAR_5->lock);

  *(__be32 *)VAR_4 = FUNC_0(VAR_6);

  return VAR_0;

 case 128:

  return VAR_0;

 default:
  return VAR_1;
 }
}
