
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {struct page** rq_next_page; struct page** rq_respages; struct nfsd3_readdirres* rq_resp; struct nfsd3_readdirargs* rq_argp; } ;
struct page {int dummy; } ;
struct TYPE_8__ {int err; } ;
struct TYPE_7__ {TYPE_1__* fh_export; } ;
struct nfsd3_readdirres {int count; int buflen; void** offset; void** offset1; scalar_t__ buffer; int verf; TYPE_3__ common; TYPE_2__ fh; struct svc_rqst* rqstp; } ;
struct nfsd3_readdirargs {int count; int cookie; int verf; scalar_t__ buffer; int fh; } ;
typedef int loff_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int ex_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,TYPE_2__*,int ,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct svc_rqst*,TYPE_2__*,int*,TYPE_3__*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (void**) ;
 int FUNC_10 (void**,int) ;

__attribute__((used)) static __be32
FUNC_11(struct svc_rqst *VAR_7)
{
 struct nfsd3_readdirargs *VAR_8 = VAR_7->rq_argp;
 struct nfsd3_readdirres *VAR_9 = VAR_7->rq_resp;
 __be32 VAR_10;
 int VAR_11 = 0;
 loff_t VAR_12;
 struct page **VAR_13;
 caddr_t VAR_14 = ((void*)0);

 FUNC_2("nfsd: READDIR+(3) %s %d bytes at %d\n",
    FUNC_1(&VAR_8->fh),
    VAR_8->count, (u32) VAR_8->cookie);



 VAR_9->count = (VAR_8->count >> 2) - 2;


 FUNC_3(&VAR_9->fh, &VAR_8->fh);

 VAR_9->common.err = VAR_5;
 VAR_9->buffer = VAR_8->buffer;
 VAR_9->buflen = VAR_9->count;
 VAR_9->rqstp = VAR_7;
 VAR_12 = VAR_8->cookie;

 VAR_10 = FUNC_4(VAR_7, &VAR_9->fh, VAR_3, VAR_0);
 if (VAR_10)
  FUNC_0(VAR_10);

 if (VAR_9->fh.fh_export->ex_flags & VAR_1)
  FUNC_0(VAR_6);

 VAR_10 = FUNC_7(VAR_7, &VAR_9->fh,
         &VAR_12,
         &VAR_9->common,
         VAR_4);
 FUNC_6(VAR_9->verf, VAR_8->verf, 8);
 for (VAR_13 = VAR_7->rq_respages + 1; VAR_13 < VAR_7->rq_next_page; VAR_13++) {
  VAR_14 = FUNC_8(*VAR_13);

  if (((caddr_t)VAR_9->buffer >= VAR_14) &&
      ((caddr_t)VAR_9->buffer < VAR_14 + VAR_2)) {
   VAR_11 += (caddr_t)VAR_9->buffer - VAR_14;
   break;
  }
  VAR_11 += VAR_2;
 }
 VAR_9->count = VAR_11 >> 2;
 if (VAR_9->offset) {
  if (FUNC_9(VAR_9->offset1)) {

   *VAR_9->offset = FUNC_5(VAR_12 >> 32);
   *VAR_9->offset1 = FUNC_5(VAR_12 & 0xffffffff);
   VAR_9->offset1 = ((void*)0);
  } else {
   FUNC_10(VAR_9->offset, VAR_12);
  }
  VAR_9->offset = ((void*)0);
 }

 FUNC_0(VAR_10);
}
