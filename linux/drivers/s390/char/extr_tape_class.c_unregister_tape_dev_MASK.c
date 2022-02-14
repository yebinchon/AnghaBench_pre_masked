
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_class_device {TYPE_1__* char_device; int mode_name; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct tape_class_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tape_class_device*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;

void FUNC_5(struct device *VAR_1, struct tape_class_device *VAR_2)
{
 if (VAR_2 != ((void*)0) && !FUNC_0(VAR_2)) {
  FUNC_4(&VAR_1->kobj, VAR_2->mode_name);
  FUNC_2(VAR_0, VAR_2->char_device->dev);
  FUNC_1(VAR_2->char_device);
  FUNC_3(VAR_2);
 }
}
