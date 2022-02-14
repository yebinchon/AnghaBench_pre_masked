
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_pdu {int status; } ;
struct iscsi_data {int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {struct iscsi_pdu* pdu_ptr; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_cmd*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
 struct iscsi_cmd *VAR_1,
 unsigned char *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->conn;
 struct iscsi_pdu *VAR_4;
 struct iscsi_data *VAR_5 = (struct iscsi_data *) VAR_2;
 u32 VAR_6 = FUNC_2(VAR_5->dlength);

 if (VAR_3->sess->sess_ops->DataPDUInOrder)
  goto recover;



 VAR_4 = VAR_1->pdu_ptr;

 switch (VAR_4->status) {
 case 129:
  VAR_4->status = 130;
  break;
 case 130:
  break;
 case 128:
  VAR_4->status = 130;
  break;
 default:
  return VAR_0;
 }

recover:
 return FUNC_1(VAR_1, FUNC_0(VAR_5->offset),
      VAR_6);
}
