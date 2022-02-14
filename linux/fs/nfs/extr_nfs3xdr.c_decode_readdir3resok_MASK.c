
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs3_readdirres {int verf; int dir_attr; } ;


 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct user_namespace*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_0,
    struct nfs3_readdirres *VAR_1,
    struct user_namespace *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1->dir_attr, VAR_2);
 if (FUNC_3(VAR_3))
  goto out;

 VAR_3 = FUNC_0(VAR_0, VAR_1->verf);
 if (FUNC_3(VAR_3))
  goto out;
 VAR_3 = FUNC_1(VAR_0);
out:
 return VAR_3;
}
