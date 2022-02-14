
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_lock {int oh; int fh; int len; int caller; int svid; int fl; } ;
struct nlm_args {void* fsm_access; void* fsm_mode; int cookie; struct nlm_lock lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nlm_lock*,int ,int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct svc_rqst*,int *) ;
 int * FUNC_7 (int *,int *,int *,int ) ;

int
FUNC_8(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nlm_args *VAR_3 = VAR_1->rq_argp;
 struct nlm_lock *VAR_4 = &VAR_3->lock;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 FUNC_0(&VAR_4->fl);
 VAR_4->svid = ~(u32) 0;

 if (!(VAR_2 = FUNC_2(VAR_2, &VAR_3->cookie))
  || !(VAR_2 = FUNC_7(VAR_2, &VAR_4->caller,
         &VAR_4->len, VAR_0))
  || !(VAR_2 = FUNC_3(VAR_2, &VAR_4->fh))
  || !(VAR_2 = FUNC_4(VAR_2, &VAR_4->oh)))
  return 0;
 VAR_3->fsm_mode = FUNC_5(*VAR_2++);
 VAR_3->fsm_access = FUNC_5(*VAR_2++);
 return FUNC_6(VAR_1, VAR_2);
}
