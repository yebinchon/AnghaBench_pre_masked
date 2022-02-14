
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_scsi_req {int cmdsn; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int i_state; scalar_t__ unsolicited_data; int se_cmd; scalar_t__ sense_reason; int first_burst_len; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_scsi_req*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_3 (struct iscsi_cmd*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct iscsi_cmd *VAR_5, struct iscsi_scsi_req *VAR_6,
     bool VAR_7)
{
 struct iscsi_conn *VAR_8 = VAR_5->conn;
 int VAR_9 = 0, VAR_10 = VAR_3;



 if (VAR_7)
  goto after_immediate_data;

 VAR_10 = FUNC_0(VAR_5, VAR_6,
       VAR_5->first_burst_len);
after_immediate_data:
 if (VAR_10 == VAR_3) {





  VAR_9 = FUNC_2(VAR_8, VAR_5,
      (unsigned char *)VAR_6,
      VAR_6->cmdsn);
  if (VAR_9 == VAR_0)
   return -1;

  if (VAR_5->sense_reason || VAR_9 == VAR_1) {
   FUNC_4(&VAR_5->se_cmd);
   return 0;
  } else if (VAR_5->unsolicited_data) {
   FUNC_3(VAR_5);
  }

 } else if (VAR_10 == VAR_2) {
  VAR_5->i_state = VAR_4;
  FUNC_1(VAR_5, VAR_8, VAR_5->i_state);
 } else
  return -1;

 return 0;
}
