
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app {struct nfp_abm* priv; } ;
struct nfp_abm {int thresholds; int actions; int threshold_undef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_abm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_abm*) ;
 int FUNC_4 (struct nfp_app*,int ) ;

__attribute__((used)) static void FUNC_5(struct nfp_app *VAR_2)
{
 struct nfp_abm *VAR_3 = VAR_2->priv;

 FUNC_3(VAR_3);
 FUNC_4(VAR_2, VAR_0);
 FUNC_4(VAR_2, VAR_1);
 FUNC_0(VAR_3->threshold_undef);
 FUNC_2(VAR_3->actions);
 FUNC_2(VAR_3->thresholds);
 FUNC_1(VAR_3);
 VAR_2->priv = ((void*)0);
}
