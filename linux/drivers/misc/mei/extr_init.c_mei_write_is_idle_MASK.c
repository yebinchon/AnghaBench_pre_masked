
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; int write_waiting_list; int write_list; int ctrl_wr_list; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

bool FUNC_3(struct mei_device *VAR_1)
{
 bool VAR_2 = (VAR_1->dev_state == VAR_0 &&
  FUNC_1(&VAR_1->ctrl_wr_list) &&
  FUNC_1(&VAR_1->write_list) &&
  FUNC_1(&VAR_1->write_waiting_list));

 FUNC_0(VAR_1->dev, "write pg: is idle[%d] state=%s ctrl=%01d write=%01d wwait=%01d\n",
  VAR_2,
  FUNC_2(VAR_1->dev_state),
  FUNC_1(&VAR_1->ctrl_wr_list),
  FUNC_1(&VAR_1->write_list),
  FUNC_1(&VAR_1->write_waiting_list));

 return VAR_2;
}
