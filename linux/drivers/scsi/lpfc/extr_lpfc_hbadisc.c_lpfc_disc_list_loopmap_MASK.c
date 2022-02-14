
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_myDID; scalar_t__ cfg_scan_down; struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ fc_topology; int* alpa_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_vport*,int) ;

void
FUNC_2(struct lpfc_vport *VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 int VAR_5;
 uint32_t VAR_6, VAR_7;

 if (!FUNC_0(VAR_4))
  return;

 if (VAR_4->fc_topology != VAR_1)
  return;


 if (VAR_4->alpa_map[0]) {
  for (VAR_5 = 1; VAR_5 <= VAR_4->alpa_map[0]; VAR_5++) {
   VAR_6 = VAR_4->alpa_map[VAR_5];
   if (((VAR_3->fc_myDID & 0xff) == VAR_6) || (VAR_6 == 0))
    continue;
   FUNC_1(VAR_3, VAR_6);
  }
 } else {

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {



   if (VAR_3->cfg_scan_down)
    VAR_7 = VAR_5;
   else
    VAR_7 = VAR_0 - VAR_5 - 1;
   VAR_6 = VAR_2[VAR_7];
   if ((VAR_3->fc_myDID & 0xff) == VAR_6)
    continue;
   FUNC_1(VAR_3, VAR_6);
  }
 }
 return;
}
