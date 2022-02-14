
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfsd4_callback {int cb_status; scalar_t__ cb_seq_status; } ;
struct nfs4_cb_compound_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct nfs4_cb_compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,int *) ;
 int FUNC_2 (struct xdr_stream*,struct nfsd4_callback*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_1,
     struct xdr_stream *VAR_2,
     void *VAR_3)
{
 struct nfsd4_callback *VAR_4 = VAR_3;
 struct nfs4_cb_compound_hdr VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (FUNC_3(VAR_6))
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (FUNC_3(VAR_6 || VAR_4->cb_seq_status))
  return VAR_6;

 return FUNC_1(VAR_2, VAR_0, &VAR_4->cb_status);
}
