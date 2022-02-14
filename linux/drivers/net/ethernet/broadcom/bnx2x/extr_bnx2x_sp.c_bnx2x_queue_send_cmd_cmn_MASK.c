
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_queue_state_params {int cmd; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_queue_state_params*) ;

__attribute__((used)) static inline int FUNC_11(struct bnx2x *VAR_1,
     struct bnx2x_queue_state_params *VAR_2)
{
 switch (VAR_2->cmd) {
 case 132:
  return FUNC_1(VAR_1, VAR_2);
 case 131:
  return FUNC_7(VAR_1, VAR_2);
 case 135:
  return FUNC_4(VAR_1, VAR_2);
 case 137:
  return FUNC_2(VAR_1, VAR_2);
 case 129:
  return FUNC_9(VAR_1, VAR_2);
 case 128:
  return FUNC_10(VAR_1, VAR_2);
 case 133:
  return FUNC_6(VAR_1, VAR_2);
 case 136:
  return FUNC_3(VAR_1, VAR_2);
 case 130:
  return FUNC_8(VAR_1, VAR_2);
 case 134:
  return FUNC_5(VAR_1, VAR_2);
 default:
  FUNC_0("Unknown command: %d\n", VAR_2->cmd);
  return -VAR_0;
 }
}
