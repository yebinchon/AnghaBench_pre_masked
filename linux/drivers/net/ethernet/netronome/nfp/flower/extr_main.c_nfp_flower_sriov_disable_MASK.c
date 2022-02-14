
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int nn; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,int ) ;

__attribute__((used)) static void FUNC_1(struct nfp_app *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_1->priv;

 if (!VAR_2->nn)
  return;

 FUNC_0(VAR_1, VAR_0);
}
