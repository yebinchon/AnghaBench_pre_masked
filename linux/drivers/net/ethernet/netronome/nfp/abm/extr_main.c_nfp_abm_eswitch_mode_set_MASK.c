
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_app {struct nfp_abm* priv; } ;
struct nfp_abm {int eswitch_mode; } ;




 int VAR_0 ;
 int FUNC_0 (struct nfp_abm*) ;
 int FUNC_1 (struct nfp_abm*) ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_1, u16 VAR_2)
{
 struct nfp_abm *VAR_3 = VAR_1->priv;

 if (VAR_3->eswitch_mode == VAR_2)
  return 0;

 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_3);
 case 128:
  return FUNC_1(VAR_3);
 default:
  return -VAR_0;
 }
}
