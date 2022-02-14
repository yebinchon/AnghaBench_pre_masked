
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct as10x_bus_adapter_t {int lock; TYPE_1__* usb_dev; TYPE_2__* ops; } ;
struct as102_dev_t {struct as10x_bus_adapter_t bus_adap; } ;
struct TYPE_4__ {int (* stop_stream ) (struct as102_dev_t*) ;} ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct as10x_bus_adapter_t*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct as102_dev_t*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct as102_dev_t *VAR_1)
{
 struct as10x_bus_adapter_t *VAR_2;

 if (VAR_1 != ((void*)0))
  VAR_2 = &VAR_1->bus_adap;
 else
  return;

 if (VAR_2->ops->stop_stream != ((void*)0))
  VAR_2->ops->stop_stream(VAR_1);

 if (VAR_0) {
  if (FUNC_2(&VAR_1->bus_adap.lock))
   return;

  if (FUNC_0(VAR_2) < 0)
   FUNC_1(&VAR_1->bus_adap.usb_dev->dev,
    "as10x_cmd_stop_streaming failed\n");

  FUNC_3(&VAR_1->bus_adap.lock);
 }
}
