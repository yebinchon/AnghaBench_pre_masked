
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_param {int dummy; } ;
struct tee_context {int dummy; } ;
struct optee_msg_arg {void* ret; int num_params; int params; int cmd; int ret_origin; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tee_param*) ;
 struct tee_param* FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct tee_param*,int ,int ) ;
 void* FUNC_3 (struct tee_context*,int ,int ,struct tee_param*) ;
 scalar_t__ FUNC_4 (int ,int ,struct tee_param*) ;

__attribute__((used)) static void FUNC_5(struct tee_context *VAR_4,
    struct optee_msg_arg *VAR_5)
{
 struct tee_param *VAR_6;

 VAR_5->ret_origin = VAR_3;

 VAR_6 = FUNC_1(VAR_5->num_params, sizeof(struct tee_param),
          VAR_0);
 if (!VAR_6) {
  VAR_5->ret = VAR_2;
  return;
 }

 if (FUNC_2(VAR_6, VAR_5->num_params, VAR_5->params)) {
  VAR_5->ret = VAR_1;
  goto out;
 }

 VAR_5->ret = FUNC_3(VAR_4, VAR_5->cmd, VAR_5->num_params, VAR_6);

 if (FUNC_4(VAR_5->params, VAR_5->num_params, VAR_6))
  VAR_5->ret = VAR_1;
out:
 FUNC_0(VAR_6);
}
