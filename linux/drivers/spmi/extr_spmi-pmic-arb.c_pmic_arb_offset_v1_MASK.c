
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spmi_pmic_arb {int channel; } ;
typedef enum pmic_arb_channel { ____Placeholder_pmic_arb_channel } pmic_arb_channel ;



__attribute__((used)) static int FUNC_0(struct spmi_pmic_arb *VAR_0, u8 VAR_1, u16 VAR_2,
   enum pmic_arb_channel VAR_3)
{
 return 0x800 + 0x80 * VAR_0->channel;
}
