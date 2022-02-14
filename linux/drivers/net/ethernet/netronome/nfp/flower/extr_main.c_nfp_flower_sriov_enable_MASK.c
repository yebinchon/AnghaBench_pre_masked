
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int nn; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_app*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct nfp_app *VAR_2, int VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_2->priv;

 if (!VAR_4->nn)
  return 0;

 return FUNC_0(VAR_2,
        VAR_0,
        VAR_1, VAR_3);
}
