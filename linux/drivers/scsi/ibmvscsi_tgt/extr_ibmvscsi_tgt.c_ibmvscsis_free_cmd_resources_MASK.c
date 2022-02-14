
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info {int debit; int flags; int wait_idle; int waiting_rsp; int schedule_q; int active_q; int free_cmd; int dev; } ;
struct iu_entry {int dummy; } ;
struct ibmvscsis_cmd {int type; int list; struct iu_entry* iue; } ;



 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct iu_entry*) ;

__attribute__((used)) static void FUNC_5(struct scsi_info *VAR_2,
      struct ibmvscsis_cmd *VAR_3)
{
 struct iu_entry *VAR_4 = VAR_3->iue;

 switch (VAR_3->type) {
 case 129:
 case 130:




  if (VAR_2->debit)
   VAR_2->debit -= 1;
  break;
 case 131:
  VAR_2->flags &= ~VAR_0;
  break;
 case 128:
  break;
 default:
  FUNC_1(&VAR_2->dev, "free_cmd_resources unknown type %d\n",
   VAR_3->type);
  break;
 }

 VAR_3->iue = ((void*)0);
 FUNC_2(&VAR_3->list, &VAR_2->free_cmd);
 FUNC_4(VAR_4);

 if (FUNC_3(&VAR_2->active_q) && FUNC_3(&VAR_2->schedule_q) &&
     FUNC_3(&VAR_2->waiting_rsp) && (VAR_2->flags & VAR_1)) {
  VAR_2->flags &= ~VAR_1;
  FUNC_0(&VAR_2->wait_idle);
 }
}
