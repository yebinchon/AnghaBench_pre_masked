
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pr_registration {char* pr_reg_isid; int isid_present_at_reg; } ;


 int FUNC_0 (char*,int ,char*,char*) ;

void FUNC_1(
 struct t10_pr_registration *VAR_0,
 char *VAR_1,
 u32 VAR_2)
{
 if (!VAR_0->isid_present_at_reg) {
  VAR_1[0] = '\0';
  return;
 }

 FUNC_0(VAR_1, VAR_2, ",i,0x%s", VAR_0->pr_reg_isid);
}
