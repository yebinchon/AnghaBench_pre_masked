
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {struct nfsd_readdirres* rq_resp; struct nfsd_readdirargs* rq_argp; } ;
struct TYPE_2__ {int err; } ;
struct nfsd_readdirres {int buflen; int * offset; scalar_t__ buffer; scalar_t__ count; TYPE_1__ common; } ;
struct nfsd_readdirargs {int count; int fh; scalar_t__ buffer; int cookie; } ;
typedef int loff_t ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct svc_rqst*,int *,int *,TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_2)
{
 struct nfsd_readdirargs *VAR_3 = VAR_2->rq_argp;
 struct nfsd_readdirres *VAR_4 = VAR_2->rq_resp;
 int VAR_5;
 __be32 VAR_6;
 loff_t VAR_7;

 FUNC_1("nfsd: READDIR  %s %d bytes at %d\n",
  FUNC_0(&VAR_3->fh),
  VAR_3->count, VAR_3->cookie);


 VAR_5 = (VAR_3->count >> 2) - 2;


 VAR_5 -= 2;
 if (VAR_5 < 0)
  VAR_5 = 0;

 VAR_4->buffer = VAR_3->buffer;
 VAR_4->offset = ((void*)0);
 VAR_4->buflen = VAR_5;
 VAR_4->common.err = VAR_0;

 VAR_7 = VAR_3->cookie;
 VAR_6 = FUNC_4(VAR_2, &VAR_3->fh, &VAR_7,
         &VAR_4->common, VAR_1);

 VAR_4->count = VAR_4->buffer - VAR_3->buffer;
 if (VAR_4->offset)
  *VAR_4->offset = FUNC_3(VAR_7);

 FUNC_2(&VAR_3->fh);
 return VAR_6;
}
