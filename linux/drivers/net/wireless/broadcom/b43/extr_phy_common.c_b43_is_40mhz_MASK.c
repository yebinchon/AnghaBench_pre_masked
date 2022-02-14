
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chandef; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {scalar_t__ width; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct b43_wldev *VAR_1)
{
 return VAR_1->phy.chandef->width == VAR_0;
}
