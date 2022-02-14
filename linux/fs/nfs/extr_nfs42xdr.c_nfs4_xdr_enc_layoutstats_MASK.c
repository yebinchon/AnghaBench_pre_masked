
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs42_layoutstat_args {int num_dev; int * devinfo; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,struct nfs42_layoutstat_args const*,int *,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rpc_rqst *VAR_1,
         struct xdr_stream *VAR_2,
         const void *VAR_3)
{
 const struct nfs42_layoutstat_args *VAR_4 = VAR_3;
 int VAR_5;

 struct compound_hdr VAR_6 = {
  .minorversion = FUNC_6(&VAR_4->seq_args),
 };

 FUNC_1(VAR_2, VAR_1, &VAR_6);
 FUNC_5(VAR_2, &VAR_4->seq_args, &VAR_6);
 FUNC_4(VAR_2, VAR_4->fh, &VAR_6);
 FUNC_0(VAR_4->num_dev > VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4->num_dev; VAR_5++)
  FUNC_2(VAR_2, VAR_4, &VAR_4->devinfo[VAR_5], &VAR_6);
 FUNC_3(&VAR_6);
}
