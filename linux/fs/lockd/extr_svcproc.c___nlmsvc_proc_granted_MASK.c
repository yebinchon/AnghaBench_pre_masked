
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_res {int status; int cookie; } ;
struct nlm_args {int lock; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct svc_rqst*) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_1, struct nlm_res *VAR_2)
{
 struct nlm_args *VAR_3 = VAR_1->rq_argp;

 VAR_2->cookie = VAR_3->cookie;

 FUNC_0("lockd: GRANTED       called\n");
 VAR_2->status = FUNC_1(FUNC_3(VAR_1), &VAR_3->lock);
 FUNC_0("lockd: GRANTED       status %d\n", FUNC_2(VAR_2->status));
 return VAR_0;
}
