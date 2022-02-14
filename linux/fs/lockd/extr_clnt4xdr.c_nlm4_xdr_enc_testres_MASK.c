
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nlm_res {scalar_t__ status; int cookie; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,struct nlm_res const*) ;
 int FUNC_2 (struct xdr_stream*,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_1,
     struct xdr_stream *VAR_2,
     const void *VAR_3)
{
 const struct nlm_res *VAR_4 = VAR_3;

 FUNC_0(VAR_2, &VAR_4->cookie);
 FUNC_2(VAR_2, VAR_4->status);
 if (VAR_4->status == VAR_0)
  FUNC_1(VAR_2, VAR_4);
}
