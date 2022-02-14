
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int data_direction; } ;
typedef int itt_t ;




 struct iscsi_cmd* FUNC_0 (struct iscsi_conn*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,unsigned char*,int ,int ) ;
 int FUNC_2 (struct iscsi_cmd*,unsigned char*,int ,int ) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(
 struct iscsi_conn *VAR_0,
 unsigned char *VAR_1,
 itt_t VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 u32 VAR_5)
{
 struct iscsi_cmd *VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_6)
  return 0;




 switch (VAR_6->data_direction) {
 case 128:
  return FUNC_1(VAR_6, VAR_1, VAR_4, VAR_5);
 case 129:
  return FUNC_2(VAR_6, VAR_1, VAR_4,
    VAR_5);
 default:
  FUNC_3("Unknown cmd->data_direction: 0x%02x\n",
    VAR_6->data_direction);
  return -1;
 }

 return 0;
}
