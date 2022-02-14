
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
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

u32 FUNC_7(struct ssb_bus *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4 = 0;

 FUNC_1(&VAR_0->gpio_lock, VAR_3);
 if (FUNC_3(&VAR_0->chipco))
  VAR_4 = FUNC_4(&VAR_0->chipco, VAR_1, VAR_2);
 else if (FUNC_5(&VAR_0->extif))
  VAR_4 = FUNC_6(&VAR_0->extif, VAR_1, VAR_2);
 else
  FUNC_0(1);
 FUNC_2(&VAR_0->gpio_lock, VAR_3);

 return VAR_4;
}
