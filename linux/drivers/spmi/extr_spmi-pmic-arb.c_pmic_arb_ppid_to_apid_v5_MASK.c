
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct spmi_pmic_arb {int* ppid_to_apid; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct spmi_pmic_arb *VAR_2, u16 VAR_3)
{
 if (!(VAR_2->ppid_to_apid[VAR_3] & VAR_1))
  return -VAR_0;

 return VAR_2->ppid_to_apid[VAR_3] & ~VAR_1;
}
