
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int cid; int cmd_lock; } ;
struct iscsi_cmd {int init_task_tag; int iscsi_opcode; int i_conn_node; } ;






 int FUNC_0 (struct iscsi_cmd*,int) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct iscsi_conn *VAR_0, struct iscsi_cmd *VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  if (VAR_3 < 0)
   goto err;
  break;
 case 131:
  FUNC_6(&VAR_0->cmd_lock);
  FUNC_4(&VAR_1->i_conn_node);
  FUNC_7(&VAR_0->cmd_lock);

  FUNC_0(VAR_1, 0);
  break;
 case 129:
  FUNC_1(VAR_0);
  VAR_3 = FUNC_3(VAR_1, VAR_0, 1);
  if (VAR_3 < 0)
   goto err;
  break;
 case 130:
  VAR_3 = FUNC_3(VAR_1, VAR_0, 0);
  if (VAR_3 < 0)
   goto err;
  break;
 default:
  FUNC_5("Unknown Opcode: 0x%02x ITT:"
         " 0x%08x, i_state: %d on CID: %hu\n",
         VAR_1->iscsi_opcode, VAR_1->init_task_tag, VAR_2,
         VAR_0->cid);
  goto err;
 }

 return 0;

err:
 return -1;
}
