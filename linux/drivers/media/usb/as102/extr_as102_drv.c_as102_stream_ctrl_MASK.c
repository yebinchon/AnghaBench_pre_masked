
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct as10x_bus_adapter_t {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct as10x_bus_adapter_t*,int ,int ) ;
 int FUNC_1 (struct as10x_bus_adapter_t*) ;
 int FUNC_2 (struct as10x_bus_adapter_t*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct as10x_bus_adapter_t *VAR_6 = VAR_3;
 int VAR_7;

 if (FUNC_3(&VAR_6->lock))
  return -VAR_1;

 if (VAR_4) {
  if (VAR_2)
   FUNC_0(VAR_6,
           VAR_0, VAR_5);

  VAR_7 = FUNC_2(VAR_6);
 } else {
  VAR_7 = FUNC_1(VAR_6);
 }

 FUNC_4(&VAR_6->lock);

 return VAR_7;
}
