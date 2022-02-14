
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs_fattr {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,struct nfs_fattr*,struct user_namespace*) ;
 int FUNC_1 (struct xdr_stream*,struct nfs_fattr*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_0, struct nfs_fattr *VAR_1,
  struct user_namespace *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_2(VAR_3))
  goto out;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
out:
 return VAR_3;
}
