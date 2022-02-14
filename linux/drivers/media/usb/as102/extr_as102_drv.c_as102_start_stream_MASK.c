
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct as10x_bus_adapter_t {int lock; TYPE_1__* ops; } ;
struct as102_dev_t {struct as10x_bus_adapter_t bus_adap; } ;
struct TYPE_2__ {int (* start_stream ) (struct as102_dev_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct as10x_bus_adapter_t*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct as102_dev_t*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct as102_dev_t *VAR_2)
{
 struct as10x_bus_adapter_t *VAR_3;
 int VAR_4 = -VAR_0;

 if (VAR_2 != ((void*)0))
  VAR_3 = &VAR_2->bus_adap;
 else
  return VAR_4;

 if (VAR_3->ops->start_stream != ((void*)0))
  VAR_4 = VAR_3->ops->start_stream(VAR_2);

 if (VAR_1) {
  if (FUNC_1(&VAR_2->bus_adap.lock))
   return -VAR_0;

  VAR_4 = FUNC_0(VAR_3);

  FUNC_2(&VAR_2->bus_adap.lock);
 }

 return VAR_4;
}
