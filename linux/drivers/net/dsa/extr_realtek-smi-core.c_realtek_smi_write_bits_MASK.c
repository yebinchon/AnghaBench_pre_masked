
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct realtek_smi {int mdc; int mdio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct realtek_smi*) ;

__attribute__((used)) static void FUNC_2(struct realtek_smi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 for (; VAR_2 > 0; VAR_2--) {
  FUNC_1(VAR_0);


  FUNC_0(VAR_0->mdio, !!(VAR_1 & (1 << (VAR_2 - 1))));
  FUNC_1(VAR_0);


  FUNC_0(VAR_0->mdc, 1);
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->mdc, 0);
 }
}
