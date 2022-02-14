
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_ant_train {scalar_t__ bBecomeLinked; } ;
struct odm_dm_struct {int SupportAbility; scalar_t__ AntDivType; scalar_t__ bLinked; struct adapter* Adapter; struct fast_ant_train DM_FatTable; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_2 (struct adapter*,int ,int ,int) ;
 int FUNC_3 (struct odm_dm_struct*) ;

void FUNC_4(struct odm_dm_struct *VAR_8)
{
 struct fast_ant_train *VAR_9 = &VAR_8->DM_FatTable;
 struct adapter *VAR_10 = VAR_8->Adapter;

 if (!(VAR_8->SupportAbility & VAR_2))
  return;
 if (!VAR_8->bLinked) {
  FUNC_1(VAR_8, VAR_3, VAR_4,
        ("ODM_AntennaDiversity_88E(): No Link.\n"));
  if (VAR_9->bBecomeLinked) {
   FUNC_1(VAR_8, VAR_3, VAR_4,
         ("Need to Turn off HW AntDiv\n"));
   FUNC_2(VAR_10, VAR_6, FUNC_0(7), 0);
   FUNC_2(VAR_10, VAR_5,
           FUNC_0(15), 0);
   if (VAR_8->AntDivType == VAR_1)
    FUNC_2(VAR_10, VAR_7,
            FUNC_0(21), 0);
   VAR_9->bBecomeLinked = VAR_8->bLinked;
  }
  return;
 } else {
  if (!VAR_9->bBecomeLinked) {
   FUNC_1(VAR_8, VAR_3, VAR_4,
         ("Need to Turn on HW AntDiv\n"));
   FUNC_2(VAR_10, VAR_6, FUNC_0(7), 1);
   FUNC_2(VAR_10, VAR_5,
           FUNC_0(15), 1);
   if (VAR_8->AntDivType == VAR_1)
    FUNC_2(VAR_10, VAR_7,
            FUNC_0(21), 1);
   VAR_9->bBecomeLinked = VAR_8->bLinked;
  }
 }
 if ((VAR_8->AntDivType == VAR_1) ||
     (VAR_8->AntDivType == VAR_0))
  FUNC_3(VAR_8);
}
