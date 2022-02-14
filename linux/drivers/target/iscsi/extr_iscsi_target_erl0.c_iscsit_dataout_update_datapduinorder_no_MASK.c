
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_pdu {int status; int data_sn; } ;
struct iscsi_cmd {struct iscsi_pdu* pdu_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;


 void* VAR_2 ;

 int FUNC_0 (struct iscsi_cmd*,struct iscsi_pdu*) ;

__attribute__((used)) static int FUNC_1(
 struct iscsi_cmd *VAR_3,
 u32 VAR_4,
 int VAR_5)
{
 int VAR_6 = 0;
 struct iscsi_pdu *VAR_7 = VAR_3->pdu_ptr;

 VAR_7->data_sn = VAR_4;

 switch (VAR_7->status) {
 case 129:
  VAR_7->status = VAR_2;
  break;
 case 130:
  VAR_7->status = VAR_2;
  break;
 case 128:
  VAR_7->status = VAR_2;
  break;
 default:
  return VAR_0;
 }

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_3, VAR_7);
  if (VAR_6 == VAR_0)
   return VAR_6;
 }

 return VAR_1;
}
