
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_nopout {scalar_t__ itt; scalar_t__ exp_statsn; int opcode; scalar_t__ ttt; int cmdsn; } ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; } ;
struct iscsi_cmd {int i_state; int i_conn_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iscsi_conn*,int ) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_5 (struct iscsi_conn*,int ,unsigned char*) ;
 struct iscsi_cmd* FUNC_6 (struct iscsi_conn*,int ) ;
 int FUNC_7 (struct iscsi_cmd*,int) ;
 int FUNC_8 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_9 (struct iscsi_conn*) ;
 int FUNC_10 (struct iscsi_conn*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct iscsi_conn *VAR_7, struct iscsi_cmd *VAR_8,
      struct iscsi_nopout *VAR_9)
{
 struct iscsi_cmd *VAR_10 = ((void*)0);
 int VAR_11 = 0;



 if (VAR_9->itt != VAR_6) {
  if (!VAR_8)
   return FUNC_5(VAR_7, VAR_4,
      (unsigned char *)VAR_9);

  FUNC_12(&VAR_7->cmd_lock);
  FUNC_11(&VAR_8->i_conn_node, &VAR_7->conn_cmd_list);
  FUNC_13(&VAR_7->cmd_lock);

  FUNC_2(VAR_7, FUNC_0(VAR_9->exp_statsn));

  if (VAR_9->opcode & VAR_3) {
   FUNC_4(VAR_8, VAR_7,
        VAR_8->i_state);
   return 0;
  }

  VAR_11 = FUNC_8(VAR_7, VAR_8,
    (unsigned char *)VAR_9, VAR_9->cmdsn);
                if (VAR_11 == VAR_1)
   return 0;
  if (VAR_11 == VAR_0)
   return -1;

  return 0;
 }



 if (VAR_9->ttt != FUNC_1(0xFFFFFFFF)) {
  VAR_10 = FUNC_6(VAR_7, FUNC_0(VAR_9->ttt));
  if (!VAR_10)
   return -VAR_2;

  FUNC_10(VAR_7);

  VAR_10->i_state = VAR_5;
  FUNC_3(VAR_10, VAR_7, VAR_10->i_state);

  FUNC_9(VAR_7);
  return 0;
 }





 if (VAR_8)
  FUNC_7(VAR_8, 0);

        return 0;
}
