
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int (* bus_may_powerdown ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(struct b43_wldev *VAR_0)
{
 return VAR_0->dev->bus_may_powerdown(VAR_0->dev);
}
