
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {TYPE_3__* buf; } ;
struct TYPE_4__ {int data; } ;
struct nfsd4_sequence {scalar_t__ status_flags; scalar_t__ maxslots; scalar_t__ slotid; scalar_t__ seqid; TYPE_1__ sessionid; } ;
struct TYPE_5__ {int data_offset; } ;
struct nfsd4_compoundres {TYPE_2__ cstate; struct xdr_stream xdr; } ;
typedef int __be32 ;
struct TYPE_6__ {int len; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_2, __be32 VAR_3,
        struct nfsd4_sequence *VAR_4)
{
 struct xdr_stream *VAR_5 = &VAR_2->xdr;
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_0 + 20);
 if (!VAR_6)
  return VAR_1;
 VAR_6 = FUNC_1(VAR_6, VAR_4->sessionid.data,
     VAR_0);
 *VAR_6++ = FUNC_0(VAR_4->seqid);
 *VAR_6++ = FUNC_0(VAR_4->slotid);

 *VAR_6++ = FUNC_0(VAR_4->maxslots - 1);
 *VAR_6++ = FUNC_0(VAR_4->maxslots - 1);
 *VAR_6++ = FUNC_0(VAR_4->status_flags);

 VAR_2->cstate.data_offset = VAR_5->buf->len;
 return 0;
}
