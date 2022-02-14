
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int force_ioa_reset; struct pmcraid_cmd* reset_cmd; int ioa_shutdown_type; int host; int ioa_reset_in_progress; } ;
struct pmcraid_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct pmcraid_cmd* FUNC_1 (struct pmcraid_instance*) ;
 int FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (struct pmcraid_instance*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pmcraid_instance *VAR_2)
{
 struct pmcraid_cmd *VAR_3;




 if (!VAR_2->ioa_reset_in_progress) {
  FUNC_4(VAR_2->host);
  VAR_3 = FUNC_1(VAR_2);

  if (VAR_3 == ((void*)0)) {
   FUNC_0("no cmnd blocks for initiate_reset\n");
   return;
  }

  VAR_2->ioa_shutdown_type = VAR_1;
  VAR_2->reset_cmd = VAR_3;
  VAR_2->force_ioa_reset = 1;
  FUNC_3(VAR_2,
     VAR_0);
  FUNC_2(VAR_3);
 }
}
