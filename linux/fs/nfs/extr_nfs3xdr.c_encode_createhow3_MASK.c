
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs3_createargs {int createmode; int verifier; int sattr; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,struct user_namespace*) ;
 int FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_0,
         const struct nfs3_createargs *VAR_1,
         struct user_namespace *VAR_2)
{
 FUNC_3(VAR_0, VAR_1->createmode);
 switch (VAR_1->createmode) {
 case 128:
 case 129:
  FUNC_2(VAR_0, VAR_1->sattr, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_1->verifier);
  break;
 default:
  FUNC_0();
 }
}
