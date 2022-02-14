
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_scsi_req {int exp_statsn; int cmdsn; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {scalar_t__ sense_reason; int se_cmd; scalar_t__ unsolicited_data; int immediate_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_3 (struct iscsi_cmd*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(struct iscsi_conn *VAR_2, struct iscsi_cmd *VAR_3,
       struct iscsi_scsi_req *VAR_4)
{
 int VAR_5 = 0;
 if (!VAR_3->immediate_data) {
  VAR_5 = FUNC_2(VAR_2, VAR_3,
     (unsigned char *)VAR_4, VAR_4->cmdsn);
  if (VAR_5 == VAR_0)
   return -1;
  else if (VAR_5 == VAR_1) {
   FUNC_4(&VAR_3->se_cmd);
   return 0;
  }
 }

 FUNC_1(VAR_2, FUNC_0(VAR_4->exp_statsn));




 if (!VAR_3->immediate_data) {
  if (!VAR_3->sense_reason && VAR_3->unsolicited_data)
   FUNC_3(VAR_3);
  if (!VAR_3->sense_reason)
   return 0;

  FUNC_4(&VAR_3->se_cmd);
  return 0;
 }






 if (VAR_3->sense_reason)
  return 1;




 VAR_3->sense_reason = FUNC_5(&VAR_3->se_cmd);
 if (VAR_3->sense_reason)
  return 1;

 return 0;
}
