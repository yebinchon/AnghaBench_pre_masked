
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {int gpio_lock; TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssb_chipcommon*,int ,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

u32 FUNC_3(struct ssb_chipcommon *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5 = 0;

 if (VAR_1->dev->id.revision < 20)
  return 0xffffffff;

 FUNC_1(&VAR_1->gpio_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3);
 FUNC_2(&VAR_1->gpio_lock, VAR_4);

 return VAR_5;
}
