
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dev; int reboot_notifier; scalar_t__ _reboot; } ;


 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mtd_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->_reboot)
  FUNC_3(&VAR_0->reboot_notifier);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 if (!FUNC_2(&VAR_0->dev))
  return 0;

 return FUNC_0(VAR_0);
}
