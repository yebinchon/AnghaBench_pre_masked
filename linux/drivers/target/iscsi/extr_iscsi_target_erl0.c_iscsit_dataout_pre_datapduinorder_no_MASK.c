
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_pdu {int status; } ;
struct iscsi_data {int offset; int dlength; } ;
struct iscsi_cmd {int conn; int init_task_tag; struct iscsi_pdu* pdu_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct iscsi_pdu* FUNC_2 (struct iscsi_cmd*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_2,
 unsigned char *VAR_3)
{
 struct iscsi_pdu *VAR_4;
 struct iscsi_data *VAR_5 = (struct iscsi_data *) VAR_3;
 u32 VAR_6 = FUNC_3(VAR_5->dlength);

 VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_5->offset),
        VAR_6);
 if (!VAR_4)
  return VAR_0;

 VAR_2->pdu_ptr = VAR_4;

 switch (VAR_4->status) {
 case 130:
 case 131:
 case 128:
  break;
 case 129:
  FUNC_4("Command ITT: 0x%08x received already gotten"
   " Offset: %u, Length: %u\n", VAR_2->init_task_tag,
    FUNC_0(VAR_5->offset), VAR_6);
  return FUNC_1(VAR_2->conn, VAR_6, 1);
 default:
  return VAR_0;
 }

 return VAR_1;
}
