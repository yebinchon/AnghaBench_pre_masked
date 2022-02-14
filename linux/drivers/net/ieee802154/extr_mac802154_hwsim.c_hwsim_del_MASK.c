
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwsim_pib {int dummy; } ;
struct hwsim_phy {int hw; int pib; int list; } ;


 int FUNC_0 (struct hwsim_phy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hwsim_pib*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct hwsim_pib* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct hwsim_phy *VAR_1)
{
 struct hwsim_pib *VAR_2;

 FUNC_0(VAR_1);

 FUNC_4(&VAR_1->list);

 FUNC_6();
 VAR_2 = FUNC_5(VAR_1->pib);
 FUNC_7();

 FUNC_3(VAR_2, VAR_0);

 FUNC_2(VAR_1->hw);
 FUNC_1(VAR_1->hw);
}
