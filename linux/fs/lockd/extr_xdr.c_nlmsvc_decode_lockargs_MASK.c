
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct svc_rqst {struct nlm_args* rq_argp; } ;
struct TYPE_3__ {int fl_type; } ;
struct TYPE_4__ {TYPE_1__ fl; } ;
struct nlm_args {int monitor; void* state; void* reclaim; TYPE_2__ lock; void* block; int cookie; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nlm_args *VAR_3 = VAR_1->rq_argp;
 u32 VAR_4;

 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie)))
  return 0;
 VAR_3->block = FUNC_2(*VAR_2++);
 VAR_4 = FUNC_2(*VAR_2++);
 if (!(VAR_2 = FUNC_1(VAR_2, &VAR_3->lock)))
  return 0;
 if (VAR_4)
  VAR_3->lock.fl.fl_type = VAR_0;
 VAR_3->reclaim = FUNC_2(*VAR_2++);
 VAR_3->state = FUNC_2(*VAR_2++);
 VAR_3->monitor = 1;

 return FUNC_3(VAR_1, VAR_2);
}
