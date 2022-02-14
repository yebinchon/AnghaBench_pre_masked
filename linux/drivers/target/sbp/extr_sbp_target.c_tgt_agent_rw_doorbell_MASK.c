
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_agent {int doorbell; int work; int lock; int state; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct fw_card *VAR_6, int VAR_7, void *VAR_8,
  struct sbp_target_agent *VAR_9)
{
 switch (VAR_7) {
 case 128:
  FUNC_2(&VAR_9->lock);
  if (VAR_9->state != VAR_1) {
   FUNC_3(&VAR_9->lock);
   FUNC_0("Ignoring DOORBELL while active.\n");
   return VAR_3;
  }
  VAR_9->state = VAR_0;
  FUNC_3(&VAR_9->lock);

  VAR_9->doorbell = 1;

  FUNC_0("tgt_agent DOORBELL\n");

  FUNC_1(VAR_5, &VAR_9->work);

  return VAR_2;

 case 129:
  return VAR_2;

 default:
  return VAR_4;
 }
}
