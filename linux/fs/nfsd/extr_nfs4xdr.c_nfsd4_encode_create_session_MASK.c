
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_6__ {scalar_t__ rdma_attrs; scalar_t__ nr_rdma_attrs; scalar_t__ maxreqs; scalar_t__ maxops; scalar_t__ maxresp_cached; scalar_t__ maxresp_sz; scalar_t__ maxreq_sz; } ;
struct TYPE_5__ {scalar_t__ rdma_attrs; scalar_t__ nr_rdma_attrs; scalar_t__ maxreqs; scalar_t__ maxops; scalar_t__ maxresp_cached; scalar_t__ maxresp_sz; scalar_t__ maxreq_sz; } ;
struct TYPE_4__ {int data; } ;
struct nfsd4_create_session {TYPE_3__ back_channel; TYPE_2__ fore_channel; scalar_t__ flags; scalar_t__ seqid; TYPE_1__ sessionid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_2, __be32 VAR_3,
       struct nfsd4_create_session *VAR_4)
{
 struct xdr_stream *VAR_5 = &VAR_2->xdr;
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_5, 24);
 if (!VAR_6)
  return VAR_1;
 VAR_6 = FUNC_1(VAR_6, VAR_4->sessionid.data,
     VAR_0);
 *VAR_6++ = FUNC_0(VAR_4->seqid);
 *VAR_6++ = FUNC_0(VAR_4->flags);

 VAR_6 = FUNC_2(VAR_5, 28);
 if (!VAR_6)
  return VAR_1;
 *VAR_6++ = FUNC_0(0);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.maxreq_sz);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.maxresp_sz);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.maxresp_cached);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.maxops);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.maxreqs);
 *VAR_6++ = FUNC_0(VAR_4->fore_channel.nr_rdma_attrs);

 if (VAR_4->fore_channel.nr_rdma_attrs) {
  VAR_6 = FUNC_2(VAR_5, 4);
  if (!VAR_6)
   return VAR_1;
  *VAR_6++ = FUNC_0(VAR_4->fore_channel.rdma_attrs);
 }

 VAR_6 = FUNC_2(VAR_5, 28);
 if (!VAR_6)
  return VAR_1;
 *VAR_6++ = FUNC_0(0);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.maxreq_sz);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.maxresp_sz);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.maxresp_cached);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.maxops);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.maxreqs);
 *VAR_6++ = FUNC_0(VAR_4->back_channel.nr_rdma_attrs);

 if (VAR_4->back_channel.nr_rdma_attrs) {
  VAR_6 = FUNC_2(VAR_5, 4);
  if (!VAR_6)
   return VAR_1;
  *VAR_6++ = FUNC_0(VAR_4->back_channel.rdma_attrs);
 }
 return 0;
}
