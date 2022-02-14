
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int dummy; } ;
struct nfp_app {int cpp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*) ;
 int FUNC_3 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct nfp_app *VAR_1, char *VAR_2)
{
 struct nfp_nsp *VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = FUNC_4(VAR_1->cpp);
 if (FUNC_0(VAR_3))
  return;

 FUNC_5(VAR_2, VAR_0, "%hu.%hu",
   FUNC_2(VAR_3),
   FUNC_3(VAR_3));

 FUNC_1(VAR_3);
}
