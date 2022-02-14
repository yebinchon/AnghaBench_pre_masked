
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct as10x_tune_args {int dummy; } ;
struct as10x_bus_adapter_t {int lock; TYPE_1__* usb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct as10x_bus_adapter_t*,struct as10x_tune_args*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, struct as10x_tune_args *VAR_2)
{
 struct as10x_bus_adapter_t *VAR_3 = VAR_1;
 int VAR_4;


 if (FUNC_2(&VAR_3->lock))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 != 0)
  FUNC_1(&VAR_3->usb_dev->dev,
   "as10x_cmd_set_tune failed. (err = %d)\n", VAR_4);

 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
