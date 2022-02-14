
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages; } ;
struct svc_rqst {int rq_vec; TYPE_1__ rq_arg; struct nfsd_attrstat* rq_resp; struct nfsd_writeargs* rq_argp; } ;
struct nfsd_writeargs {unsigned long len; int offset; int fh; int first; } ;
struct nfsd_attrstat {int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,unsigned long,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,struct nfsd_attrstat*) ;
 int FUNC_4 (struct svc_rqst*,int ,int ,int ,unsigned int,unsigned long*,int ) ;
 int VAR_1 ;
 unsigned int FUNC_5 (struct svc_rqst*,int ,int *,unsigned long) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_2)
{
 struct nfsd_writeargs *VAR_3 = VAR_2->rq_argp;
 struct nfsd_attrstat *VAR_4 = VAR_2->rq_resp;
 __be32 VAR_5;
 unsigned long VAR_6 = VAR_3->len;
 unsigned int VAR_7;

 FUNC_1("nfsd: WRITE    %s %d bytes at %d\n",
  FUNC_0(&VAR_3->fh),
  VAR_3->len, VAR_3->offset);

 VAR_7 = FUNC_5(VAR_2, VAR_2->rq_arg.pages,
          &VAR_3->first, VAR_6);
 if (!VAR_7)
  return VAR_1;
 VAR_5 = FUNC_4(VAR_2, FUNC_2(&VAR_4->fh, &VAR_3->fh),
       VAR_3->offset, VAR_2->rq_vec, VAR_7,
       &VAR_6, VAR_0);
 return FUNC_3(VAR_5, VAR_4);
}
