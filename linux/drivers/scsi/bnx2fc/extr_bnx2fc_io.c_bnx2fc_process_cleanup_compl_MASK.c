
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fcoe_task_ctx_entry {int dummy; } ;
struct bnx2fc_cmd {int cleanup_done; scalar_t__ wait_for_cleanup_comp; int refcount; int abts_done; scalar_t__ wait_for_abts_comp; int req_flags; int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2fc_cmd*,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2fc_cmd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct bnx2fc_cmd *VAR_5,
      struct fcoe_task_ctx_entry *VAR_6,
      u8 VAR_7)
{
 FUNC_0(VAR_5, "Entered process_cleanup_compl "
         "refcnt = %d, cmd_type = %d\n",
     FUNC_4(&VAR_5->refcount), VAR_5->cmd_type);




 if (!FUNC_6(VAR_2,
    &VAR_5->req_flags))
  return;





 if (FUNC_7(VAR_1, &VAR_5->req_flags) &&
     !FUNC_7(VAR_0, &VAR_5->req_flags)) {
  FUNC_5(VAR_0, &VAR_5->req_flags);
  if (VAR_5->wait_for_abts_comp)
   FUNC_2(&VAR_5->abts_done);
 }

 FUNC_1(VAR_5, VAR_3);
 FUNC_3(&VAR_5->refcount, VAR_4);
 if (VAR_5->wait_for_cleanup_comp)
  FUNC_2(&VAR_5->cleanup_done);
}
