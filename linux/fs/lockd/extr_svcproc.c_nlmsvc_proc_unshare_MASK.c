
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_res* rq_resp; struct nlm_args* rq_argp; } ;
struct nlm_res {scalar_t__ status; int cookie; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {int lock; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct nlm_file*) ;
 int FUNC_5 (struct nlm_host*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int FUNC_8 (struct nlm_host*,struct nlm_file*,struct nlm_args*) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_10(struct svc_rqst *VAR_4)
{
 struct nlm_args *VAR_5 = VAR_4->rq_argp;
 struct nlm_res *VAR_6 = VAR_4->rq_resp;
 struct nlm_host *VAR_7;
 struct nlm_file *VAR_8;

 FUNC_2("lockd: UNSHARE       called\n");

 VAR_6->cookie = VAR_5->cookie;


 if (FUNC_3(FUNC_0(VAR_4))) {
  VAR_6->status = VAR_1;
  return VAR_3;
 }


 if ((VAR_6->status = FUNC_7(VAR_4, VAR_5, &VAR_7, &VAR_8)))
  return VAR_6->status == VAR_0 ? VAR_2 :VAR_3;


 VAR_6->status = FUNC_1(FUNC_8(VAR_7, VAR_8, VAR_5));

 FUNC_2("lockd: UNSHARE       status %d\n", FUNC_9(VAR_6->status));
 FUNC_6(&VAR_5->lock);
 FUNC_5(VAR_7);
 FUNC_4(VAR_8);
 return VAR_3;
}
