
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_renameres {int new_fattr; int old_fattr; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct user_namespace*) ;
 int FUNC_2 (int) ;
 struct user_namespace* FUNC_3 (struct rpc_rqst*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_1,
       struct xdr_stream *VAR_2,
       void *VAR_3)
{
 struct user_namespace *VAR_4 = FUNC_3(VAR_1);
 struct nfs_renameres *VAR_5 = VAR_3;
 enum nfs_stat VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (FUNC_4(VAR_7))
  goto out;
 VAR_7 = FUNC_1(VAR_2, VAR_5->old_fattr, VAR_4);
 if (FUNC_4(VAR_7))
  goto out;
 VAR_7 = FUNC_1(VAR_2, VAR_5->new_fattr, VAR_4);
 if (FUNC_4(VAR_7))
  goto out;
 if (VAR_6 != VAR_0)
  goto out_status;
out:
 return VAR_7;
out_status:
 return FUNC_2(VAR_6);
}
