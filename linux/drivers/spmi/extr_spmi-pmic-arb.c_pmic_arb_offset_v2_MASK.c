
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spmi_pmic_arb {int ee; } ;
typedef enum pmic_arb_channel { ____Placeholder_pmic_arb_channel } pmic_arb_channel ;


 int FUNC_0 (struct spmi_pmic_arb*,int) ;

__attribute__((used)) static int FUNC_1(struct spmi_pmic_arb *VAR_0, u8 VAR_1, u16 VAR_2,
      enum pmic_arb_channel VAR_3)
{
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_5 = VAR_1 << 8 | ((VAR_2 >> 8) & 0xFF);
 VAR_6 = FUNC_0(VAR_0, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 = VAR_6;
 return 0x1000 * VAR_0->ee + 0x8000 * VAR_4;
}
