
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tee_shm {int dummy; } ;
struct tee_context {struct optee_context_data* data; } ;
struct optee_session {int list_node; } ;
struct optee_msg_arg {int session; int cmd; } ;
struct optee_context_data {int mutex; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_1 ;
 int FUNC_1 (struct tee_shm*) ;
 struct optee_session* FUNC_2 (struct optee_context_data*,int ) ;
 struct tee_shm* FUNC_3 (struct tee_context*,int ,struct optee_msg_arg**,int *) ;
 int FUNC_4 (struct optee_session*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tee_context*,int ) ;
 int FUNC_9 (struct tee_shm*) ;

int FUNC_10(struct tee_context *VAR_2, u32 VAR_3)
{
 struct optee_context_data *VAR_4 = VAR_2->data;
 struct tee_shm *VAR_5;
 struct optee_msg_arg *VAR_6;
 phys_addr_t VAR_7;
 struct optee_session *VAR_8;


 FUNC_6(&VAR_4->mutex);
 VAR_8 = FUNC_2(VAR_4, VAR_3);
 if (VAR_8)
  FUNC_5(&VAR_8->list_node);
 FUNC_7(&VAR_4->mutex);
 if (!VAR_8)
  return -VAR_0;
 FUNC_4(VAR_8);

 VAR_5 = FUNC_3(VAR_2, 0, &VAR_6, &VAR_7);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6->cmd = VAR_1;
 VAR_6->session = VAR_3;
 FUNC_8(VAR_2, VAR_7);

 FUNC_9(VAR_5);
 return 0;
}
