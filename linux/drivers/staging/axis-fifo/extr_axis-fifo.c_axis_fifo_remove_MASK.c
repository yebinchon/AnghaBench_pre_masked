
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct axis_fifo {TYPE_1__* mem; int base_addr; int irq; int devt; struct device* device; int char_device; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct axis_fifo* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct axis_fifo*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct axis_fifo *VAR_4 = FUNC_1(VAR_3);

 FUNC_8(&VAR_4->device->kobj, &VAR_0);
 FUNC_0(&VAR_4->char_device);
 FUNC_2(VAR_4->device, ((void*)0));
 FUNC_3(VAR_1, VAR_4->devt);
 FUNC_9(VAR_4->devt, 1);
 FUNC_4(VAR_4->irq, VAR_4);
 FUNC_5(VAR_4->base_addr);
 FUNC_6(VAR_4->mem->start, FUNC_7(VAR_4->mem));
 FUNC_2(VAR_3, ((void*)0));
 return 0;
}
