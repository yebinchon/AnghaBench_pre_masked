
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_r2t {int dummy; } ;
struct iscsi_cmd {int cmd_flags; scalar_t__ acked_data_sn; scalar_t__ r2t_sn; int init_task_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_r2t* FUNC_0 (struct iscsi_cmd*,scalar_t__) ;
 int FUNC_1 (struct iscsi_cmd*,int ,unsigned char*) ;
 scalar_t__ FUNC_2 (struct iscsi_cmd*,struct iscsi_r2t*) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_3,
 unsigned char *VAR_4,
 u32 VAR_5,
 u32 VAR_6)
{
 u32 VAR_7;
 struct iscsi_r2t *VAR_8;





 if ((VAR_3->cmd_flags & VAR_0) &&
     (VAR_5 <= VAR_3->acked_data_sn)) {
  FUNC_3("ITT: 0x%08x, R2T SNACK requesting"
   " retransmission of R2TSN: 0x%08x to 0x%08x but already"
   " acked to  R2TSN: 0x%08x by TMR TASK_REASSIGN,"
   " protocol error.\n", VAR_3->init_task_tag, VAR_5,
   (VAR_5 + VAR_6), VAR_3->acked_data_sn);

  return FUNC_1(VAR_3, VAR_2, VAR_4);
 }

 if (VAR_6) {
  if ((VAR_5 + VAR_6) > VAR_3->r2t_sn) {
   FUNC_3("Command ITT: 0x%08x received R2T SNACK"
   " with BegRun: 0x%08x, RunLength: 0x%08x, exceeds"
   " current R2TSN: 0x%08x, protocol error.\n",
   VAR_3->init_task_tag, VAR_5, VAR_6, VAR_3->r2t_sn);
   return FUNC_1(VAR_3,
     VAR_1, VAR_4);
  }
  VAR_7 = (VAR_5 + VAR_6);
 } else
  VAR_7 = VAR_3->r2t_sn;

 while (VAR_5 < VAR_7) {
  VAR_8 = FUNC_0(VAR_3, VAR_5);
  if (!VAR_8)
   return -1;
  if (FUNC_2(VAR_3, VAR_8) < 0)
   return -1;

  VAR_5++;
 }

 return 0;
}
