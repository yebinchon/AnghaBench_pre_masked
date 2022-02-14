
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DeviceCtlBlk {int srb_going_list; int target_lun; int target_id; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (struct DeviceCtlBlk*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct AdapterCtlBlk *VAR_1,
  struct DeviceCtlBlk *VAR_2)
{
 if (FUNC_3(&VAR_2->srb_going_list) > 1) {
  FUNC_1(VAR_0, "adapter_remove_and_free_device: <%02i-%i> "
             "Won't remove because of %i active requests.\n",
      VAR_2->target_id, VAR_2->target_lun,
      FUNC_3(&VAR_2->srb_going_list));
  return;
 }
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2);
}
