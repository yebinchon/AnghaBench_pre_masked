
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_bus {int gpio_lock; int extif; int chipco; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

u32 FUNC_7(struct ssb_bus *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3 = 0;

 FUNC_1(&VAR_0->gpio_lock, VAR_2);
 if (FUNC_3(&VAR_0->chipco))
  VAR_3 = FUNC_4(&VAR_0->chipco, VAR_1);
 else if (FUNC_5(&VAR_0->extif))
  VAR_3 = FUNC_6(&VAR_0->extif, VAR_1);
 else
  FUNC_0(1);
 FUNC_2(&VAR_0->gpio_lock, VAR_2);

 return VAR_3;
}
