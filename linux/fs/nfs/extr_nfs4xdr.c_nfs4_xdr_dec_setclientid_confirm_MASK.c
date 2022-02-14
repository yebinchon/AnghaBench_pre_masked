
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct compound_hdr {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*) ;

__attribute__((used)) static int FUNC_2(struct rpc_rqst *VAR_0,
         struct xdr_stream *VAR_1,
         void *VAR_2)
{
 struct compound_hdr VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_1);
 return VAR_4;
}
