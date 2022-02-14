
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_device {scalar_t__ owner; int io_mutex; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 struct hdpvr_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0)
{
 struct hdpvr_device *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->io_mutex);
 if (VAR_0->private_data == VAR_1->owner) {
  FUNC_0(VAR_1);
  VAR_1->owner = ((void*)0);
 }
 FUNC_2(&VAR_1->io_mutex);

 return FUNC_3(VAR_0);
}
