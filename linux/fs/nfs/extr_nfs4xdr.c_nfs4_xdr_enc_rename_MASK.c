
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_renameargs {int new_name; int old_name; int new_dir; int old_dir; int seq_args; } ;
struct compound_hdr {int minorversion; } ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
    const void *VAR_2)
{
 const struct nfs_renameargs *VAR_3 = VAR_2;
 struct compound_hdr VAR_4 = {
  .minorversion = FUNC_6(&VAR_3->seq_args),
 };

 FUNC_0(VAR_1, VAR_0, &VAR_4);
 FUNC_5(VAR_1, &VAR_3->seq_args, &VAR_4);
 FUNC_2(VAR_1, VAR_3->old_dir, &VAR_4);
 FUNC_4(VAR_1, &VAR_4);
 FUNC_2(VAR_1, VAR_3->new_dir, &VAR_4);
 FUNC_3(VAR_1, VAR_3->old_name, VAR_3->new_name, &VAR_4);
 FUNC_1(&VAR_4);
}
