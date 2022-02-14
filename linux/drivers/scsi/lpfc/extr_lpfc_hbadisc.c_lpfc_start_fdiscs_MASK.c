
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_type; scalar_t__ vpi; int fc_flag; } ;
struct lpfc_hba {int max_vports; scalar_t__ max_vpi; scalar_t__ fc_topology; int link_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct lpfc_vport** FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_5 (struct lpfc_vport*,int ) ;

void
FUNC_6(struct lpfc_hba *VAR_9)
{
 struct lpfc_vport **VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 != ((void*)0)) {
  for (VAR_11 = 0; VAR_11 <= VAR_9->max_vports && VAR_10[VAR_11] != ((void*)0); VAR_11++) {
   if (VAR_10[VAR_11]->port_type == VAR_6)
    continue;

   if (VAR_10[VAR_11]->vpi > VAR_9->max_vpi) {
    FUNC_5(VAR_10[VAR_11],
           VAR_0);
    continue;
   }
   if (VAR_9->fc_topology == VAR_7) {
    FUNC_5(VAR_10[VAR_11],
           VAR_1);
    continue;
   }
   if (VAR_10[VAR_11]->fc_flag & VAR_2) {
    FUNC_3(VAR_10[VAR_11]);
    continue;
   }
   if (VAR_9->link_flag & VAR_8)
    FUNC_2(VAR_10[VAR_11]);
   else {
    FUNC_5(VAR_10[VAR_11],
           VAR_3);
    FUNC_4(VAR_10[VAR_11], VAR_4,
       VAR_5,
       "0259 No NPIV "
       "Fabric support\n");
   }
  }
 }
 FUNC_1(VAR_9, VAR_10);
}
