
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_statfsres* rq_resp; struct nfsd_fhandle* rq_argp; } ;
struct nfsd_statfsres {int stats; } ;
struct nfsd_fhandle {int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_rqst*,int *,int *,int ) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_1)
{
 struct nfsd_fhandle *VAR_2 = VAR_1->rq_argp;
 struct nfsd_statfsres *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;

 FUNC_1("nfsd: STATFS   %s\n", FUNC_0(&VAR_2->fh));

 VAR_4 = FUNC_3(VAR_1, &VAR_2->fh, &VAR_3->stats,
   VAR_0);
 FUNC_2(&VAR_2->fh);
 return VAR_4;
}
