
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int rq_xprt; } ;
struct TYPE_2__ {int list; } ;
struct nfsd4_conn {TYPE_1__ cn_xpt_user; int cn_flags; int cn_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfsd4_conn* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct nfsd4_conn *FUNC_3(struct svc_rqst *VAR_1, u32 VAR_2)
{
 struct nfsd4_conn *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct nfsd4_conn), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_2(VAR_1->rq_xprt);
 VAR_3->cn_xprt = VAR_1->rq_xprt;
 VAR_3->cn_flags = VAR_2;
 FUNC_0(&VAR_3->cn_xpt_user.list);
 return VAR_3;
}
