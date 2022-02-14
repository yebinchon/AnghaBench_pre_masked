
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_bus {int gpio_lock; int chipco; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

u32 FUNC_4(struct ssb_bus *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4 = 0;

 FUNC_0(&VAR_0->gpio_lock, VAR_3);
 if (FUNC_2(&VAR_0->chipco))
  VAR_4 = FUNC_3(&VAR_0->chipco, VAR_1, VAR_2);
 FUNC_1(&VAR_0->gpio_lock, VAR_3);

 return VAR_4;
}
