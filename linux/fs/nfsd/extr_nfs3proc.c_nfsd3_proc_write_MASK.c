
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages; } ;
struct svc_rqst {int rq_vec; TYPE_1__ rq_arg; struct nfsd3_writeres* rq_resp; struct nfsd3_writeargs* rq_argp; } ;
struct nfsd3_writeres {unsigned long count; scalar_t__ committed; int fh; } ;
struct nfsd3_writeargs {unsigned long len; scalar_t__ offset; int first; scalar_t__ stable; int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long long,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,scalar_t__,int ,unsigned int,unsigned long*,scalar_t__) ;
 int VAR_0 ;
 unsigned int FUNC_5 (struct svc_rqst*,int ,int *,unsigned long) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_1)
{
 struct nfsd3_writeargs *VAR_2 = VAR_1->rq_argp;
 struct nfsd3_writeres *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;
 unsigned long VAR_5 = VAR_2->len;
 unsigned int VAR_6;

 FUNC_2("nfsd: WRITE(3)    %s %d bytes at %Lu%s\n",
    FUNC_1(&VAR_2->fh),
    VAR_2->len,
    (unsigned long long) VAR_2->offset,
    VAR_2->stable? " stable" : "");

 FUNC_3(&VAR_3->fh, &VAR_2->fh);
 VAR_3->committed = VAR_2->stable;
 VAR_6 = FUNC_5(VAR_1, VAR_1->rq_arg.pages,
          &VAR_2->first, VAR_5);
 if (!VAR_6)
  FUNC_0(VAR_0);
 VAR_4 = FUNC_4(VAR_1, &VAR_3->fh, VAR_2->offset,
       VAR_1->rq_vec, VAR_6, &VAR_5,
       VAR_3->committed);
 VAR_3->count = VAR_5;
 FUNC_0(VAR_4);
}
