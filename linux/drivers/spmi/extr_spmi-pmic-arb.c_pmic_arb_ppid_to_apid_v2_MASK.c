
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct spmi_pmic_arb {size_t* ppid_to_apid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct spmi_pmic_arb*,size_t) ;

__attribute__((used)) static int FUNC_1(struct spmi_pmic_arb *VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 VAR_4 = VAR_2->ppid_to_apid[VAR_3];
 if (!(VAR_4 & VAR_1))
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!(VAR_4 & VAR_1))
  return -VAR_0;

 return VAR_4 & ~VAR_1;
}
