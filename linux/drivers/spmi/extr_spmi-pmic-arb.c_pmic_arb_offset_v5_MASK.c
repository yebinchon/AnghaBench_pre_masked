
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spmi_pmic_arb {int ee; } ;
typedef enum pmic_arb_channel { ____Placeholder_pmic_arb_channel } pmic_arb_channel ;




 int FUNC_0 (struct spmi_pmic_arb*,int) ;

__attribute__((used)) static int FUNC_1(struct spmi_pmic_arb *VAR_0, u8 VAR_1, u16 VAR_2,
      enum pmic_arb_channel VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 u32 VAR_6 = 0;
 u16 VAR_7 = (VAR_1 << 8) | (VAR_2 >> 8);

 VAR_5 = FUNC_0(VAR_0, VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_5;
 switch (VAR_3) {
 case 129:
  VAR_6 = 0x10000 * VAR_0->ee + 0x80 * VAR_4;
  break;
 case 128:
  VAR_6 = 0x10000 * VAR_4;
  break;
 }

 return VAR_6;
}
