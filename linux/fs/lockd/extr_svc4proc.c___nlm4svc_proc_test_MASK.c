
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_res {int status; int cookie; int lock; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {int lock; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int VAR_0 ;
 int FUNC_2 (struct nlm_file*) ;
 int FUNC_3 (struct nlm_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct svc_rqst*,struct nlm_file*,struct nlm_host*,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_3, struct nlm_res *VAR_4)
{
 struct nlm_args *VAR_5 = VAR_3->rq_argp;
 struct nlm_host *VAR_6;
 struct nlm_file *VAR_7;
 __be32 VAR_8 = VAR_2;

 FUNC_0("lockd: TEST4        called\n");
 VAR_4->cookie = VAR_5->cookie;


 if ((VAR_4->status = FUNC_1(VAR_3, VAR_5, &VAR_6, &VAR_7)))
  return VAR_4->status == VAR_0 ? VAR_1 :VAR_2;


 VAR_4->status = FUNC_5(VAR_3, VAR_7, VAR_6, &VAR_5->lock, &VAR_4->lock, &VAR_4->cookie);
 if (VAR_4->status == VAR_0)
  VAR_8 = VAR_1;
 else
  FUNC_0("lockd: TEST4        status %d\n", FUNC_6(VAR_4->status));

 FUNC_4(&VAR_5->lock);
 FUNC_3(VAR_6);
 FUNC_2(VAR_7);
 return VAR_8;
}
