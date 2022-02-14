
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ unsolicited_data; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_1 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_2 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_3 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_4 (struct iscsi_cmd*,unsigned char*) ;
 int FUNC_5 (struct iscsi_cmd*,unsigned char*) ;

int FUNC_6(
 struct iscsi_cmd *VAR_2,
 unsigned char *VAR_3)
{
 int VAR_4;
 struct iscsi_conn *VAR_5 = VAR_2->conn;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if ((VAR_4 == VAR_1) ||
     (VAR_4 == VAR_0))
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if ((VAR_4 == VAR_1) ||
     (VAR_4 == VAR_0))
  return VAR_4;

 if (VAR_2->unsolicited_data) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if ((VAR_4 == VAR_1) ||
      (VAR_4 == VAR_0))
   return VAR_4;
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if ((VAR_4 == VAR_1) ||
      (VAR_4 == VAR_0))
   return VAR_4;
 }

 return (VAR_5->sess->sess_ops->DataPDUInOrder) ?
  FUNC_4(VAR_2, VAR_3) :
  FUNC_3(VAR_2, VAR_3);
}
