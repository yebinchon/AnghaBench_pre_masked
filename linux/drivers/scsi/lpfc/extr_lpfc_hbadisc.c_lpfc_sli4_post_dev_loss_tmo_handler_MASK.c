
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fcf_flag; } ;
struct lpfc_hba {int hba_flag; int hbalock; TYPE_1__ fcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_8, int VAR_9,
        uint32_t VAR_10)
{



 if (!VAR_9)
  return;

 if ((VAR_8->hba_flag & VAR_5) && !FUNC_0(VAR_8)) {
  FUNC_4(&VAR_8->hbalock);
  if (VAR_8->fcf.fcf_flag & VAR_0) {
   if (VAR_8->hba_flag & VAR_4) {
    FUNC_5(&VAR_8->hbalock);
    return;
   }
   VAR_8->hba_flag |= VAR_4;
   FUNC_1(VAR_8, VAR_6, VAR_7,
     "2847 Last remote node (x%x) using "
     "FCF devloss tmo\n", VAR_10);
  }
  if (VAR_8->fcf.fcf_flag & VAR_1) {
   FUNC_5(&VAR_8->hbalock);
   FUNC_1(VAR_8, VAR_6, VAR_7,
     "2868 Devloss tmo to FCF rediscovery "
     "in progress\n");
   return;
  }
  if (!(VAR_8->hba_flag & (VAR_3 | VAR_2))) {
   FUNC_5(&VAR_8->hbalock);
   FUNC_1(VAR_8, VAR_6, VAR_7,
     "2869 Devloss tmo to idle FIP engine, "
     "unreg in-use FCF and rescan.\n");

   FUNC_2(VAR_8);
   return;
  }
  FUNC_5(&VAR_8->hbalock);
  if (VAR_8->hba_flag & VAR_3)
   FUNC_1(VAR_8, VAR_6, VAR_7,
     "2870 FCF table scan in progress\n");
  if (VAR_8->hba_flag & VAR_2)
   FUNC_1(VAR_8, VAR_6, VAR_7,
     "2871 FLOGI roundrobin FCF failover "
     "in progress\n");
 }
 FUNC_3(VAR_8);
}
