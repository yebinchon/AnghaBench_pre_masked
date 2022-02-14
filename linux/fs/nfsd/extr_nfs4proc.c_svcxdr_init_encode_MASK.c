
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iov_len; } ;
struct xdr_stream {int page_ptr; TYPE_1__ scratch; scalar_t__ end; scalar_t__ p; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {int pages; scalar_t__ buflen; struct kvec* head; scalar_t__ len; } ;
struct svc_rqst {int rq_page_end; scalar_t__ rq_auth_slack; struct xdr_buf rq_res; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
struct kvec {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct svc_rqst *VAR_1,
          struct nfsd4_compoundres *VAR_2)
{
 struct xdr_stream *VAR_3 = &VAR_2->xdr;
 struct xdr_buf *VAR_4 = &VAR_1->rq_res;
 struct kvec *VAR_5 = VAR_4->head;

 VAR_3->buf = VAR_4;
 VAR_3->iov = VAR_5;
 VAR_3->p = VAR_5->iov_base + VAR_5->iov_len;
 VAR_3->end = VAR_5->iov_base + VAR_0 - VAR_1->rq_auth_slack;

 VAR_4->len = VAR_4->head[0].iov_len;
 VAR_3->scratch.iov_len = 0;
 VAR_3->page_ptr = VAR_4->pages - 1;
 VAR_4->buflen = VAR_0 * (1 + VAR_1->rq_page_end - VAR_4->pages)
  - VAR_1->rq_auth_slack;
}
