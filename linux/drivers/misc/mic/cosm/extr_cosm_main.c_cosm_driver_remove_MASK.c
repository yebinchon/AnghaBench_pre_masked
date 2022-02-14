
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosm_device {int bootmode; int ramdisk; int firmware; int cmdline; int reset_trigger_work; int index; int state_sysfs; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cosm_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cosm_device*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct cosm_device *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_8(VAR_2->state_sysfs);
 FUNC_5(VAR_0, FUNC_0(0, VAR_2->index));
 FUNC_6(&VAR_2->reset_trigger_work);
 FUNC_4(VAR_2, 0);
 if (FUNC_1(&VAR_1))
  FUNC_3();


 FUNC_7(VAR_2->cmdline);
 FUNC_7(VAR_2->firmware);
 FUNC_7(VAR_2->ramdisk);
 FUNC_7(VAR_2->bootmode);
}
