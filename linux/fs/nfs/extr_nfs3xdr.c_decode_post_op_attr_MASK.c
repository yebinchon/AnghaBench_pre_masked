
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs_fattr {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct nfs_fattr*,struct user_namespace*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__* FUNC_2 (struct xdr_stream*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct nfs_fattr *VAR_3,
  struct user_namespace *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_2, 4);
 if (FUNC_1(!VAR_5))
  return -VAR_0;
 if (*VAR_5 != VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 return 0;
}
