
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs3_mknodargs {int rdev; int sattr; } ;


 int FUNC_0 (struct xdr_stream*,int ,struct user_namespace*) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0,
          const struct nfs3_mknodargs *VAR_1,
          struct user_namespace *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->sattr, VAR_2);
 FUNC_1(VAR_0, VAR_1->rdev);
}
