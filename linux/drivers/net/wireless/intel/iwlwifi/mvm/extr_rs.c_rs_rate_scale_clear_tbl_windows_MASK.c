
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int * tpc_win; int * win; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1,
         struct iwl_scale_tbl_info *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, "Clearing up window stats\n");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(&VAR_2->win[VAR_3]);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->tpc_win); VAR_3++)
  FUNC_2(&VAR_2->tpc_win[VAR_3]);
}
