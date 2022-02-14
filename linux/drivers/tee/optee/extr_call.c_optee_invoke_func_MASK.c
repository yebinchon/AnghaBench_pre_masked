
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int dummy; } ;
struct tee_param {int dummy; } ;
struct tee_ioctl_invoke_arg {void* ret_origin; void* ret; int num_params; int cancel_id; int session; int func; } ;
struct tee_context {struct optee_context_data* data; } ;
struct optee_session {int dummy; } ;
struct optee_msg_arg {void* ret_origin; void* ret; int params; int cancel_id; int session; int func; int cmd; } ;
struct optee_context_data {int mutex; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_1 ;
 int FUNC_1 (struct tee_shm*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct optee_session* FUNC_2 (struct optee_context_data*,int ) ;
 struct tee_shm* FUNC_3 (struct tee_context*,int ,struct optee_msg_arg**,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct tee_context*,int ) ;
 scalar_t__ FUNC_7 (struct tee_param*,int ,int ) ;
 int FUNC_8 (int ,int ,struct tee_param*) ;
 int FUNC_9 (struct tee_shm*) ;

int FUNC_10(struct tee_context *VAR_4, struct tee_ioctl_invoke_arg *VAR_5,
        struct tee_param *VAR_6)
{
 struct optee_context_data *VAR_7 = VAR_4->data;
 struct tee_shm *VAR_8;
 struct optee_msg_arg *VAR_9;
 phys_addr_t VAR_10;
 struct optee_session *VAR_11;
 int VAR_12;


 FUNC_4(&VAR_7->mutex);
 VAR_11 = FUNC_2(VAR_7, VAR_5->session);
 FUNC_5(&VAR_7->mutex);
 if (!VAR_11)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4, VAR_5->num_params, &VAR_9, &VAR_10);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_9->cmd = VAR_1;
 VAR_9->func = VAR_5->func;
 VAR_9->session = VAR_5->session;
 VAR_9->cancel_id = VAR_5->cancel_id;

 VAR_12 = FUNC_8(VAR_9->params, VAR_5->num_params, VAR_6);
 if (VAR_12)
  goto out;

 if (FUNC_6(VAR_4, VAR_10)) {
  VAR_9->ret = VAR_2;
  VAR_9->ret_origin = VAR_3;
 }

 if (FUNC_7(VAR_6, VAR_5->num_params, VAR_9->params)) {
  VAR_9->ret = VAR_2;
  VAR_9->ret_origin = VAR_3;
 }

 VAR_5->ret = VAR_9->ret;
 VAR_5->ret_origin = VAR_9->ret_origin;
out:
 FUNC_9(VAR_8);
 return VAR_12;
}
