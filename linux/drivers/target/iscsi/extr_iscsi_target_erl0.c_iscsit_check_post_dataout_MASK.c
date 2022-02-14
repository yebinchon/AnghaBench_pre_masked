
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ dataout_timeout_retries; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_1 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_2 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(
 struct iscsi_cmd *VAR_2,
 unsigned char *VAR_3,
 u8 VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_2->conn;

 VAR_2->dataout_timeout_retries = 0;

 if (!VAR_4)
  return FUNC_1(VAR_2, VAR_3);
 else {
  if (!VAR_5->sess->sess_ops->ErrorRecoveryLevel) {
   FUNC_3("Unable to recover from DataOUT CRC"
    " failure while ERL=0, closing session.\n");
   FUNC_2(VAR_2, VAR_1,
       VAR_3);
   return VAR_0;
  }

  FUNC_2(VAR_2, VAR_1, VAR_3);
  return FUNC_0(VAR_2, VAR_3);
 }
}
