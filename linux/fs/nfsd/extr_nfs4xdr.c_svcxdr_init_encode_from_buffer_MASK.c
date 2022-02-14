
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iov_len; } ;
struct xdr_stream {void* end; int * p; TYPE_2__* iov; struct xdr_buf* buf; TYPE_1__ scratch; } ;
struct xdr_buf {int buflen; TYPE_2__* head; scalar_t__ len; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ iov_len; int * iov_base; } ;


 int FUNC_0 (struct xdr_buf*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_0,
    struct xdr_buf *VAR_1, __be32 *VAR_2, int VAR_3)
{
 VAR_0->scratch.iov_len = 0;
 FUNC_0(VAR_1, 0, sizeof(struct xdr_buf));
 VAR_1->head[0].iov_base = VAR_2;
 VAR_1->head[0].iov_len = 0;
 VAR_1->len = 0;
 VAR_0->buf = VAR_1;
 VAR_0->iov = VAR_1->head;
 VAR_0->p = VAR_2;
 VAR_0->end = (void *)VAR_2 + VAR_3;
 VAR_1->buflen = VAR_3;
}
