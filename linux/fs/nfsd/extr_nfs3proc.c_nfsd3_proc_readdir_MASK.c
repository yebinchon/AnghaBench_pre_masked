
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {struct page** rq_next_page; struct page** rq_respages; struct nfsd3_readdirres* rq_resp; struct nfsd3_readdirargs* rq_argp; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int err; } ;
struct nfsd3_readdirres {int buflen; int count; void** offset; void** offset1; scalar_t__ buffer; int verf; TYPE_1__ common; int fh; struct svc_rqst* rqstp; } ;
struct nfsd3_readdirargs {int count; int cookie; int verf; scalar_t__ buffer; int fh; } ;
typedef int loff_t ;
typedef scalar_t__ caddr_t ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct svc_rqst*,int *,int*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (void**) ;
 int FUNC_9 (void**,int) ;

__attribute__((used)) static __be32
FUNC_10(struct svc_rqst *VAR_3)
{
 struct nfsd3_readdirargs *VAR_4 = VAR_3->rq_argp;
 struct nfsd3_readdirres *VAR_5 = VAR_3->rq_resp;
 __be32 VAR_6;
 int VAR_7 = 0;
 struct page **VAR_8;
 caddr_t VAR_9 = ((void*)0);

 FUNC_2("nfsd: READDIR(3)  %s %d bytes at %d\n",
    FUNC_1(&VAR_4->fh),
    VAR_4->count, (u32) VAR_4->cookie);



 VAR_7 = (VAR_4->count >> 2) - 2;


 FUNC_3(&VAR_5->fh, &VAR_4->fh);

 VAR_5->buflen = VAR_7;
 VAR_5->common.err = VAR_2;
 VAR_5->buffer = VAR_4->buffer;
 VAR_5->rqstp = VAR_3;
 VAR_6 = FUNC_6(VAR_3, &VAR_5->fh, (loff_t*) &VAR_4->cookie,
     &VAR_5->common, VAR_1);
 FUNC_5(VAR_5->verf, VAR_4->verf, 8);
 VAR_7 = 0;
 for (VAR_8 = VAR_3->rq_respages + 1; VAR_8 < VAR_3->rq_next_page; VAR_8++) {
  VAR_9 = FUNC_7(*VAR_8);

  if (((caddr_t)VAR_5->buffer >= VAR_9) &&
      ((caddr_t)VAR_5->buffer < VAR_9 + VAR_0)) {
   VAR_7 += (caddr_t)VAR_5->buffer - VAR_9;
   break;
  }
  VAR_7 += VAR_0;
 }
 VAR_5->count = VAR_7 >> 2;
 if (VAR_5->offset) {
  loff_t VAR_10 = VAR_4->cookie;

  if (FUNC_8(VAR_5->offset1)) {

   *VAR_5->offset = FUNC_4(VAR_10 >> 32);
   *VAR_5->offset1 = FUNC_4(VAR_10 & 0xffffffff);
   VAR_5->offset1 = ((void*)0);
  } else {
   FUNC_9(VAR_5->offset, VAR_10);
  }
  VAR_5->offset = ((void*)0);
 }

 FUNC_0(VAR_6);
}
