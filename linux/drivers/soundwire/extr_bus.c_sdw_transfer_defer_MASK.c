
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_msg {int dev_num; scalar_t__ page; } ;
struct sdw_defer {int dummy; } ;
struct sdw_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int xfer_msg_defer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct sdw_bus*,struct sdw_msg*,struct sdw_defer*) ;
 int FUNC_2 (struct sdw_bus*,int ) ;

int FUNC_3(struct sdw_bus *VAR_2, struct sdw_msg *VAR_3,
         struct sdw_defer *VAR_4)
{
 int VAR_5;

 if (!VAR_2->ops->xfer_msg_defer)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 != 0 && VAR_5 != -VAR_0)
  FUNC_0(VAR_2->dev, "Defer trf on Slave %d failed:%d\n",
   VAR_3->dev_num, VAR_5);

 if (VAR_3->page)
  FUNC_2(VAR_2, VAR_3->dev_num);

 return VAR_5;
}
