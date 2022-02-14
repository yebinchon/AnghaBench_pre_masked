
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int ctrl_rd_list; int ctrl_wr_list; int write_waiting_list; int write_list; } ;
struct mei_cl {int rd_completed; int rd_pending; struct mei_device* dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (int *,struct mei_cl*) ;
 int FUNC_3 (int *,struct file const*) ;
 int FUNC_4 (int *,struct mei_cl*) ;

int FUNC_5(struct mei_cl *VAR_1, const struct file *VAR_2)
{
 struct mei_device *VAR_3;

 if (FUNC_0(!VAR_1 || !VAR_1->dev))
  return -VAR_0;

 VAR_3 = VAR_1->dev;

 FUNC_1(VAR_3, VAR_1, "remove list entry belonging to cl\n");
 FUNC_4(&VAR_1->dev->write_list, VAR_1);
 FUNC_4(&VAR_1->dev->write_waiting_list, VAR_1);
 FUNC_2(&VAR_1->dev->ctrl_wr_list, VAR_1);
 FUNC_2(&VAR_1->dev->ctrl_rd_list, VAR_1);
 FUNC_3(&VAR_1->rd_pending, VAR_2);
 FUNC_3(&VAR_1->rd_completed, VAR_2);

 return 0;
}
