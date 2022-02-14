
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DeviceCtlBlk {size_t target_id; int target_lun; int list; struct AdapterCtlBlk* acb; } ;
struct AdapterCtlBlk {int* dcb_map; struct DeviceCtlBlk*** children; int dcb_list; struct DeviceCtlBlk* dcb_run_robin; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct AdapterCtlBlk *VAR_0,
  struct DeviceCtlBlk *VAR_1)
{

 VAR_1->acb = VAR_0;


 if (FUNC_1(&VAR_0->dcb_list))
  VAR_0->dcb_run_robin = VAR_1;


 FUNC_0(&VAR_1->list, &VAR_0->dcb_list);


 VAR_0->dcb_map[VAR_1->target_id] |= (1 << VAR_1->target_lun);
 VAR_0->children[VAR_1->target_id][VAR_1->target_lun] = VAR_1;
}
