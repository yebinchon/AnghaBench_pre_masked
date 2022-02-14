
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_dm_struct {int SupportAbility; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_1 (struct odm_dm_struct*) ;

void FUNC_2(struct odm_dm_struct *VAR_3)
{



 FUNC_0(VAR_3, VAR_0, VAR_1, ("odm_EdcaTurboCheck========================>\n"));

 if (!(VAR_3->SupportAbility & VAR_2))
  return;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_0, VAR_1, ("<========================odm_EdcaTurboCheck\n"));
}
