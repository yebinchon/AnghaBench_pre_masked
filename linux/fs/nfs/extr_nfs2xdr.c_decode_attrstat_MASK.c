
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs_fattr {int dummy; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct nfs_fattr*,struct user_namespace*) ;
 int FUNC_1 (struct xdr_stream*,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1, struct nfs_fattr *VAR_2,
      __u32 *VAR_3,
      struct user_namespace *VAR_4)
{
 enum nfs_stat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, &VAR_5);
 if (FUNC_3(VAR_6))
  goto out;
 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_5 != VAR_0)
  goto out_default;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);
out:
 return VAR_6;
out_default:
 return FUNC_2(VAR_5);
}
