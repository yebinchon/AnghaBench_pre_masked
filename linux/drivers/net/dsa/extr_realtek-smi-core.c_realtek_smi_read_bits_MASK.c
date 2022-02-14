
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct realtek_smi {int mdio; int mdc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct realtek_smi*) ;

__attribute__((used)) static void FUNC_5(struct realtek_smi *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 FUNC_0(VAR_0->mdio);

 for (*VAR_2 = 0; VAR_1 > 0; VAR_1--) {
  u32 VAR_3;

  FUNC_4(VAR_0);


  FUNC_3(VAR_0->mdc, 1);
  FUNC_4(VAR_0);
  VAR_3 = !!FUNC_2(VAR_0->mdio);
  FUNC_3(VAR_0->mdc, 0);

  *VAR_2 |= (VAR_3 << (VAR_1 - 1));
 }

 FUNC_1(VAR_0->mdio, 0);
}
