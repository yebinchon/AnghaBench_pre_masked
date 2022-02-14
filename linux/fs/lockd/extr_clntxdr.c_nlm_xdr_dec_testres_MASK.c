
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nlm_res {int cookie; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,struct nlm_res*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rpc_rqst *VAR_0,
          struct xdr_stream *VAR_1,
          void *VAR_2)
{
 struct nlm_res *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3->cookie);
 if (FUNC_2(VAR_4))
  goto out;
 VAR_4 = FUNC_1(VAR_1, VAR_3);
out:
 return VAR_4;
}
