
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_openargs {TYPE_2__* lg_args; int open_bitmap; int bitmask; scalar_t__ access; int fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;
struct TYPE_3__ {int pglen; int pages; } ;
struct TYPE_4__ {TYPE_1__ layout; } ;


 int FUNC_0 (struct xdr_stream*,scalar_t__,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,TYPE_2__*,struct compound_hdr*) ;
 int FUNC_5 (struct compound_hdr*) ;
 int FUNC_6 (struct xdr_stream*,struct nfs_openargs const*,struct compound_hdr*) ;
 int FUNC_7 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_8 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rpc_rqst*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs_openargs *VAR_3 = VAR_2;
 struct compound_hdr VAR_4 = {
  .minorversion = FUNC_9(&VAR_3->seq_args),
 };

 FUNC_1(VAR_1, VAR_0, &VAR_4);
 FUNC_8(VAR_1, &VAR_3->seq_args, &VAR_4);
 FUNC_7(VAR_1, VAR_3->fh, &VAR_4);
 FUNC_6(VAR_1, VAR_3, &VAR_4);
 FUNC_3(VAR_1, &VAR_4);
 if (VAR_3->access)
  FUNC_0(VAR_1, VAR_3->access, &VAR_4);
 FUNC_2(VAR_1, VAR_3->bitmask, VAR_3->open_bitmap, &VAR_4);
 if (VAR_3->lg_args) {
  FUNC_4(VAR_1, VAR_3->lg_args, &VAR_4);
  FUNC_10(VAR_0, VAR_3->lg_args->layout.pages, 0,
     VAR_3->lg_args->layout.pglen,
     VAR_4.replen);
 }
 FUNC_5(&VAR_4);
}
