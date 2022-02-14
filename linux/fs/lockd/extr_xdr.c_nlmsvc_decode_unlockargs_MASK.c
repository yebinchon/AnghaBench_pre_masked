
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {struct nlm_args* rq_argp; } ;
struct TYPE_3__ {int fl_type; } ;
struct TYPE_4__ {TYPE_1__ fl; } ;
struct nlm_args {TYPE_2__ lock; int cookie; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nlm_args *VAR_3 = VAR_1->rq_argp;

 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie))
  || !(VAR_2 = FUNC_1(VAR_2, &VAR_3->lock)))
  return 0;
 VAR_3->lock.fl.fl_type = VAR_0;
 return FUNC_2(VAR_1, VAR_2);
}
