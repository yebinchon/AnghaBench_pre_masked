
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_getaclargs {int acl_len; int acl_pages; int fh; int seq_args; } ;
struct compound_hdr {scalar_t__ replen; int minorversion; } ;
typedef int __u32 ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
 int FUNC_1 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int const*,int *,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct rpc_rqst*,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct rpc_rqst *VAR_2, struct xdr_stream *VAR_3,
    const void *VAR_4)
{
 const struct nfs_getaclargs *VAR_5 = VAR_4;
 struct compound_hdr VAR_6 = {
  .minorversion = FUNC_6(&VAR_5->seq_args),
 };
 const __u32 VAR_7[1] = {
  [0] = VAR_0,
 };
 uint32_t VAR_8;

 FUNC_1(VAR_3, VAR_2, &VAR_6);
 FUNC_5(VAR_3, &VAR_5->seq_args, &VAR_6);
 FUNC_4(VAR_3, VAR_5->fh, &VAR_6);
 VAR_8 = VAR_6.replen + VAR_1;
 FUNC_2(VAR_3, VAR_7, ((void*)0),
   FUNC_0(VAR_7), &VAR_6);

 FUNC_7(VAR_2, VAR_5->acl_pages, 0,
    VAR_5->acl_len, VAR_8 + 1);
 FUNC_3(&VAR_6);
}
