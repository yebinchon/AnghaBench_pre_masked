
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tee_param {int dummy; } ;
struct tee_context {scalar_t__ supp_nowait; int teedev; } ;
struct optee_supp_req {size_t num_params; int in_queue; void* ret; int link; int c; struct tee_param* param; void* func; } ;
struct optee_supp {int mutex; int ctx; int reqs_c; int reqs; } ;
struct optee {struct optee_supp supp; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct optee_supp_req*) ;
 struct optee_supp_req* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct optee* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;

u32 FUNC_10(struct tee_context *VAR_3, u32 VAR_4, size_t VAR_5,
   struct tee_param *VAR_6)

{
 struct optee *VAR_7 = FUNC_8(VAR_3->teedev);
 struct optee_supp *VAR_8 = &VAR_7->supp;
 struct optee_supp_req *VAR_9;
 bool VAR_10;
 u32 VAR_11;





 if (!VAR_8->ctx && VAR_3->supp_nowait)
  return VAR_1;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return VAR_2;

 FUNC_1(&VAR_9->c);
 VAR_9->func = VAR_4;
 VAR_9->num_params = VAR_5;
 VAR_9->param = VAR_6;


 FUNC_6(&VAR_8->mutex);
 FUNC_4(&VAR_9->link, &VAR_8->reqs);
 VAR_9->in_queue = 1;
 FUNC_7(&VAR_8->mutex);


 FUNC_0(&VAR_8->reqs_c);






 while (FUNC_9(&VAR_9->c)) {
  FUNC_6(&VAR_8->mutex);
  VAR_10 = !VAR_8->ctx;
  if (VAR_10) {
   if (VAR_9->in_queue) {
    FUNC_5(&VAR_9->link);
    VAR_9->in_queue = 0;
   }
  }
  FUNC_7(&VAR_8->mutex);

  if (VAR_10) {
   VAR_9->ret = VAR_1;
   break;
  }
 }

 VAR_11 = VAR_9->ret;
 FUNC_2(VAR_9);

 return VAR_11;
}
