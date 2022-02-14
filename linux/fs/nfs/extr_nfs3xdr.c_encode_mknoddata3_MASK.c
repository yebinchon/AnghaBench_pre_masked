
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs3_mknodargs {int type; int sattr; } ;


 int FUNC_0 () ;






 int FUNC_1 (struct xdr_stream*,struct nfs3_mknodargs const*,struct user_namespace*) ;
 int FUNC_2 (struct xdr_stream*,int) ;
 int FUNC_3 (struct xdr_stream*,int ,struct user_namespace*) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_0,
         const struct nfs3_mknodargs *VAR_1,
         struct user_namespace *VAR_2)
{
 FUNC_2(VAR_0, VAR_1->type);
 switch (VAR_1->type) {
 case 132:
 case 133:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 128:
 case 130:
  FUNC_3(VAR_0, VAR_1->sattr, VAR_2);
  break;
 case 129:
 case 131:
  break;
 default:
  FUNC_0();
 }
}
