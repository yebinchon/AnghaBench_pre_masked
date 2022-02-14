
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {int list; struct DeviceCtlBlk* dcb; } ;
struct DeviceCtlBlk {scalar_t__ max_command; int srb_waiting_list; int srb_going_list; } ;
struct AdapterCtlBlk {int acb_flag; scalar_t__ active_dcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_4 (struct AdapterCtlBlk*) ;
 int FUNC_5 (struct AdapterCtlBlk*,int) ;

__attribute__((used)) static void FUNC_6(struct AdapterCtlBlk *VAR_4, struct ScsiReqBlk *VAR_5)
{
 struct DeviceCtlBlk *VAR_6 = VAR_5->dcb;

 if (VAR_6->max_command <= FUNC_2(&VAR_6->srb_going_list) ||
     VAR_4->active_dcb ||
     (VAR_4->acb_flag & (VAR_1 + VAR_3 + VAR_2))) {
  FUNC_1(&VAR_5->list, &VAR_6->srb_waiting_list);
  FUNC_4(VAR_4);
  return;
 }

 if (!FUNC_3(VAR_4, VAR_6, VAR_5)) {
  FUNC_1(&VAR_5->list, &VAR_6->srb_going_list);
 } else {
  FUNC_0(&VAR_5->list, &VAR_6->srb_waiting_list);
  FUNC_5(VAR_4, VAR_0 / 50);
 }
}
