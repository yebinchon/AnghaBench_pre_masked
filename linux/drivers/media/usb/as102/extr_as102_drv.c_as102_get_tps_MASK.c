
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as10x_tps {int dummy; } ;
struct as10x_bus_adapter_t {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct as10x_bus_adapter_t*,struct as10x_tps*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct as10x_tps *VAR_2)
{
 struct as10x_bus_adapter_t *VAR_3 = VAR_1;
 int VAR_4;

 if (FUNC_1(&VAR_3->lock))
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_3, VAR_2);

 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
