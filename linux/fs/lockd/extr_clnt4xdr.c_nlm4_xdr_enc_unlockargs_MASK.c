
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nlm_lock {int dummy; } ;
struct nlm_args {int cookie; struct nlm_lock lock; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,struct nlm_lock const*) ;

__attribute__((used)) static void FUNC_2(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        const void *VAR_2)
{
 const struct nlm_args *VAR_3 = VAR_2;
 const struct nlm_lock *VAR_4 = &VAR_3->lock;

 FUNC_0(VAR_1, &VAR_3->cookie);
 FUNC_1(VAR_1, VAR_4);
}
