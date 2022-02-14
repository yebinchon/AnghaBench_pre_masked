
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int check_immediate_queue; int cid; int sess; } ;
struct iscsi_cmd {int i_state; int init_task_tag; int iscsi_opcode; int istate_lock; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_6 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_7 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_8 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_9 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_10 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_11 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_12 (char*,int ,int ,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int
FUNC_15(struct iscsi_conn *VAR_2, struct iscsi_cmd *VAR_3, int VAR_4)
{
 int VAR_5;

check_rsp_state:
 switch (VAR_4) {
 case 135:
  VAR_5 = FUNC_4(VAR_3, VAR_2);
  if (VAR_5 < 0)
   goto err;
  else if (!VAR_5)

   goto check_rsp_state;
  else if (VAR_5 == 1) {

   FUNC_13(&VAR_3->istate_lock);
   VAR_3->i_state = VAR_1;
   FUNC_14(&VAR_3->istate_lock);

   if (FUNC_0(&VAR_2->check_immediate_queue))
    return 1;

   return 0;
  } else if (VAR_5 == 2) {


   FUNC_13(&VAR_3->istate_lock);
   VAR_3->i_state = 131;
   FUNC_14(&VAR_3->istate_lock);
   VAR_4 = 131;
   goto check_rsp_state;
  }

  break;
 case 131:
 case 130:
  VAR_5 = FUNC_8(VAR_3, VAR_2);
  break;
 case 134:
  VAR_5 = FUNC_5(VAR_3, VAR_2);
  break;
 case 136:
  VAR_5 = FUNC_3(
   VAR_3, VAR_2);
  break;
 case 133:
  VAR_5 = FUNC_6(VAR_3, VAR_2);
  break;
 case 132:
  VAR_5 = FUNC_7(VAR_3, VAR_2);
  break;
 case 129:
  VAR_5 = FUNC_9(VAR_3, VAR_2);
  if (VAR_5 != 0)
   break;
  VAR_5 = FUNC_11(VAR_3, VAR_2);
  if (VAR_5 != 0)
   FUNC_1(VAR_2->sess);
  break;
 case 128:
  VAR_5 = FUNC_10(VAR_3, VAR_2);
  break;
 default:
  FUNC_12("Unknown Opcode: 0x%02x ITT:"
         " 0x%08x, i_state: %d on CID: %hu\n",
         VAR_3->iscsi_opcode, VAR_3->init_task_tag,
         VAR_4, VAR_2->cid);
  goto err;
 }
 if (VAR_5 < 0)
  goto err;

 switch (VAR_4) {
 case 134:
  if (!FUNC_2(VAR_3, VAR_2))
   return -VAR_0;

 case 131:
 case 136:
 case 133:
 case 130:
 case 128:
 case 129:
 case 132:
  FUNC_13(&VAR_3->istate_lock);
  VAR_3->i_state = VAR_1;
  FUNC_14(&VAR_3->istate_lock);
  break;
 default:
  FUNC_12("Unknown Opcode: 0x%02x ITT:"
         " 0x%08x, i_state: %d on CID: %hu\n",
         VAR_3->iscsi_opcode, VAR_3->init_task_tag,
         VAR_3->i_state, VAR_2->cid);
  goto err;
 }

 if (FUNC_0(&VAR_2->check_immediate_queue))
  return 1;

 return 0;

err:
 return -1;
}
