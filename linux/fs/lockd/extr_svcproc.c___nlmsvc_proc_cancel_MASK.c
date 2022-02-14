
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_res {int status; int cookie; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {int lock; int cookie; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 struct net* FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct net*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct nlm_file*) ;
 int FUNC_5 (struct net*,struct nlm_file*,int *) ;
 int FUNC_6 (struct nlm_host*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_10(struct svc_rqst *VAR_4, struct nlm_res *VAR_5)
{
 struct nlm_args *VAR_6 = VAR_4->rq_argp;
 struct nlm_host *VAR_7;
 struct nlm_file *VAR_8;
 struct net *VAR_9 = FUNC_0(VAR_4);

 FUNC_2("lockd: CANCEL        called\n");

 VAR_5->cookie = VAR_6->cookie;


 if (FUNC_3(VAR_9)) {
  VAR_5->status = VAR_1;
  return VAR_3;
 }


 if ((VAR_5->status = FUNC_8(VAR_4, VAR_6, &VAR_7, &VAR_8)))
  return VAR_5->status == VAR_0 ? VAR_2 :VAR_3;


 VAR_5->status = FUNC_1(FUNC_5(VAR_9, VAR_8, &VAR_6->lock));

 FUNC_2("lockd: CANCEL        status %d\n", FUNC_9(VAR_5->status));
 FUNC_7(&VAR_6->lock);
 FUNC_6(VAR_7);
 FUNC_4(VAR_8);
 return VAR_3;
}
