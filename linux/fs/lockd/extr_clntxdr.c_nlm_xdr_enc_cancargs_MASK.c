
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct TYPE_2__ {scalar_t__ fl_type; } ;
struct nlm_lock {TYPE_1__ fl; } ;
struct nlm_args {int block; int cookie; struct nlm_lock lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,struct nlm_lock const*) ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_1,
     struct xdr_stream *VAR_2,
     const void *VAR_3)
{
 const struct nlm_args *VAR_4 = VAR_3;
 const struct nlm_lock *VAR_5 = &VAR_4->lock;

 FUNC_1(VAR_2, &VAR_4->cookie);
 FUNC_0(VAR_2, VAR_4->block);
 FUNC_0(VAR_2, VAR_5->fl.fl_type == VAR_0);
 FUNC_2(VAR_2, VAR_5);
}
