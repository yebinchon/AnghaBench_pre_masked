
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int rq_vec; struct nfsd3_readres* rq_resp; struct nfsd3_readargs* rq_argp; } ;
struct nfsd3_readres {unsigned long count; int eof; int fh; } ;
struct nfsd3_readargs {int vlen; scalar_t__ offset; int fh; scalar_t__ count; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long long) ;
 int FUNC_3 (int *,int *) ;
 unsigned long FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct svc_rqst*,int *,scalar_t__,int ,int ,int*,int *) ;
 int FUNC_6 (struct svc_rqst*) ;
 int FUNC_7 (struct svc_rqst*,int) ;

__attribute__((used)) static __be32
FUNC_8(struct svc_rqst *VAR_1)
{
 struct nfsd3_readargs *VAR_2 = VAR_1->rq_argp;
 struct nfsd3_readres *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;
 u32 VAR_5 = FUNC_6(VAR_1);
 unsigned long VAR_6 = FUNC_4(VAR_2->count, VAR_5);

 FUNC_2("nfsd: READ(3) %s %lu bytes at %Lu\n",
    FUNC_1(&VAR_2->fh),
    (unsigned long) VAR_2->count,
    (unsigned long long) VAR_2->offset);





 VAR_3->count = VAR_6;
 FUNC_7(VAR_1, ((1 + VAR_0 + 3)<<2) + VAR_3->count +4);

 FUNC_3(&VAR_3->fh, &VAR_2->fh);
 VAR_4 = FUNC_5(VAR_1, &VAR_3->fh,
      VAR_2->offset,
         VAR_1->rq_vec, VAR_2->vlen,
      &VAR_3->count,
      &VAR_3->eof);
 FUNC_0(VAR_4);
}
