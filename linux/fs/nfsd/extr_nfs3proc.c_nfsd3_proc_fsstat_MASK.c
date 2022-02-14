
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_fsstatres* rq_resp; struct nfsd_fhandle* rq_argp; } ;
struct nfsd_fhandle {int fh; } ;
struct nfsd3_fsstatres {int stats; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int *,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0)
{
 struct nfsd_fhandle *VAR_1 = VAR_0->rq_argp;
 struct nfsd3_fsstatres *VAR_2 = VAR_0->rq_resp;
 __be32 VAR_3;

 FUNC_2("nfsd: FSSTAT(3)   %s\n",
    FUNC_1(&VAR_1->fh));

 VAR_3 = FUNC_4(VAR_0, &VAR_1->fh, &VAR_2->stats, 0);
 FUNC_3(&VAR_1->fh);
 FUNC_0(VAR_3);
}
