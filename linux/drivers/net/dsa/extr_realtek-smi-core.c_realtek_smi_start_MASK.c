
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int mdio; int mdc; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct realtek_smi*) ;

__attribute__((used)) static void FUNC_3(struct realtek_smi *VAR_0)
{



 FUNC_0(VAR_0->mdc, 0);
 FUNC_0(VAR_0->mdio, 1);
 FUNC_2(VAR_0);


 FUNC_1(VAR_0->mdc, 1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mdc, 0);
 FUNC_2(VAR_0);


 FUNC_1(VAR_0->mdc, 1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mdio, 0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mdc, 0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mdio, 1);
}
