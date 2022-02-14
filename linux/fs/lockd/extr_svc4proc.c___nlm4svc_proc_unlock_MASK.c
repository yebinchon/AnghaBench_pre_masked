
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_res {int status; int cookie; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {int lock; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct nlm_file*) ;
 int FUNC_5 (struct nlm_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct nlm_file*,int *) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_9(struct svc_rqst *VAR_4, struct nlm_res *VAR_5)
{
 struct nlm_args *VAR_6 = VAR_4->rq_argp;
 struct nlm_host *VAR_7;
 struct nlm_file *VAR_8;

 FUNC_1("lockd: UNLOCK        called\n");

 VAR_5->cookie = VAR_6->cookie;


 if (FUNC_2(FUNC_0(VAR_4))) {
  VAR_5->status = VAR_1;
  return VAR_3;
 }


 if ((VAR_5->status = FUNC_3(VAR_4, VAR_6, &VAR_7, &VAR_8)))
  return VAR_5->status == VAR_0 ? VAR_2 :VAR_3;


 VAR_5->status = FUNC_7(FUNC_0(VAR_4), VAR_8, &VAR_6->lock);

 FUNC_1("lockd: UNLOCK        status %d\n", FUNC_8(VAR_5->status));
 FUNC_6(&VAR_6->lock);
 FUNC_5(VAR_7);
 FUNC_4(VAR_8);
 return VAR_3;
}
