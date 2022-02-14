
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_buf {scalar_t__ len; scalar_t__ page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct svc_rqst {scalar_t__ rq_next_page; struct nfsd4_compoundres* rq_resp; } ;
struct TYPE_6__ {scalar_t__ page_ptr; struct xdr_buf* buf; } ;
struct nfsd4_compoundres {int opcnt; int taglen; int tag; int * tagp; TYPE_3__ xdr; } ;
typedef int __be32 ;
struct TYPE_5__ {scalar_t__ iov_len; } ;
struct TYPE_4__ {scalar_t__ iov_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct nfsd4_compoundres*) ;

int
FUNC_5(struct svc_rqst *VAR_0, __be32 *VAR_1)
{



 struct nfsd4_compoundres *VAR_2 = VAR_0->rq_resp;
 struct xdr_buf *VAR_3 = VAR_2->xdr.buf;

 FUNC_0(VAR_3->len != VAR_3->head[0].iov_len + VAR_3->page_len +
     VAR_3->tail[0].iov_len);

 VAR_0->rq_next_page = VAR_2->xdr.page_ptr + 1;

 VAR_1 = VAR_2->tagp;
 *VAR_1++ = FUNC_2(VAR_2->taglen);
 FUNC_3(VAR_1, VAR_2->tag, VAR_2->taglen);
 VAR_1 += FUNC_1(VAR_2->taglen);
 *VAR_1++ = FUNC_2(VAR_2->opcnt);

 FUNC_4(VAR_2);
 return 1;
}
