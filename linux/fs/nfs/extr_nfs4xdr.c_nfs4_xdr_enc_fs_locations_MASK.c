
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct page {int dummy; } ;
struct nfs4_fs_locations_arg {int page; int bitmask; int name; int dir_fh; int clientid; scalar_t__ renew; int fh; scalar_t__ migration; int seq_args; } ;
struct compound_hdr {scalar_t__ replen; int minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_6 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rpc_rqst*,struct page**,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct rpc_rqst *VAR_1,
          struct xdr_stream *VAR_2,
          const void *VAR_3)
{
 const struct nfs4_fs_locations_arg *VAR_4 = VAR_3;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_7(&VAR_4->seq_args),
 };
 uint32_t VAR_6;

 FUNC_0(VAR_2, VAR_1, &VAR_5);
 FUNC_6(VAR_2, &VAR_4->seq_args, &VAR_5);
 if (VAR_4->migration) {
  FUNC_4(VAR_2, VAR_4->fh, &VAR_5);
  VAR_6 = VAR_5.replen;
  FUNC_1(VAR_2, VAR_4->bitmask, &VAR_5);
  if (VAR_4->renew)
   FUNC_5(VAR_2, VAR_4->clientid, &VAR_5);
 } else {
  FUNC_4(VAR_2, VAR_4->dir_fh, &VAR_5);
  FUNC_2(VAR_2, VAR_4->name, &VAR_5);
  VAR_6 = VAR_5.replen;
  FUNC_1(VAR_2, VAR_4->bitmask, &VAR_5);
 }

 FUNC_8(VAR_1, (struct page **)&VAR_4->page, 0,
    VAR_0, VAR_6 + 1);
 FUNC_3(&VAR_5);
}
