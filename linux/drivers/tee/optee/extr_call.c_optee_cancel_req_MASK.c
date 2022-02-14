
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tee_shm {int dummy; } ;
struct tee_context {struct optee_context_data* data; } ;
struct optee_session {int dummy; } ;
struct optee_msg_arg {void* cancel_id; void* session; int cmd; } ;
struct optee_context_data {int mutex; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_1 ;
 int FUNC_1 (struct tee_shm*) ;
 struct optee_session* FUNC_2 (struct optee_context_data*,void*) ;
 struct tee_shm* FUNC_3 (struct tee_context*,int ,struct optee_msg_arg**,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tee_context*,int ) ;
 int FUNC_7 (struct tee_shm*) ;

int FUNC_8(struct tee_context *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct optee_context_data *VAR_5 = VAR_2->data;
 struct tee_shm *VAR_6;
 struct optee_msg_arg *VAR_7;
 phys_addr_t VAR_8;
 struct optee_session *VAR_9;


 FUNC_4(&VAR_5->mutex);
 VAR_9 = FUNC_2(VAR_5, VAR_4);
 FUNC_5(&VAR_5->mutex);
 if (!VAR_9)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, 0, &VAR_7, &VAR_8);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7->cmd = VAR_1;
 VAR_7->session = VAR_4;
 VAR_7->cancel_id = VAR_3;
 FUNC_6(VAR_2, VAR_8);

 FUNC_7(VAR_6);
 return 0;
}
