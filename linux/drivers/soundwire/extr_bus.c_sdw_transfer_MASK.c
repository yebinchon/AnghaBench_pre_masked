
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {int dev_num; scalar_t__ page; } ;
struct sdw_bus {int msg_lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct sdw_bus*,struct sdw_msg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdw_bus*,int ) ;

int FUNC_5(struct sdw_bus *VAR_1, struct sdw_msg *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->msg_lock);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != 0 && VAR_3 != -VAR_0)
  FUNC_0(VAR_1->dev, "trf on Slave %d failed:%d\n",
   VAR_2->dev_num, VAR_3);

 if (VAR_2->page)
  FUNC_4(VAR_1, VAR_2->dev_num);

 FUNC_3(&VAR_1->msg_lock);

 return VAR_3;
}
