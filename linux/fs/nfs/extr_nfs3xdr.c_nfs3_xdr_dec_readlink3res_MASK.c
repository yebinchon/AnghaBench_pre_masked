
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*) ;
 int FUNC_1 (struct xdr_stream*,int*) ;
 int FUNC_2 (struct xdr_stream*,void*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rpc_rqst*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_1,
         struct xdr_stream *VAR_2,
         void *VAR_3)
{
 enum nfs_stat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (FUNC_5(VAR_5))
  goto out;
 VAR_5 = FUNC_2(VAR_2, VAR_3, FUNC_4(VAR_1));
 if (FUNC_5(VAR_5))
  goto out;
 if (VAR_4 != VAR_0)
  goto out_default;
 VAR_5 = FUNC_0(VAR_2);
out:
 return VAR_5;
out_default:
 return FUNC_3(VAR_4);
}
