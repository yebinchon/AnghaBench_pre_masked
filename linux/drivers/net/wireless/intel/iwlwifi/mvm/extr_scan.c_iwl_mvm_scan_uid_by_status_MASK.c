
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int max_scans; int* scan_uid_status; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct iwl_mvm *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_scans; VAR_3++)
  if (VAR_1->scan_uid_status[VAR_3] == VAR_2)
   return VAR_3;

 return -VAR_0;
}
