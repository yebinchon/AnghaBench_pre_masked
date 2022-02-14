
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* free ) (struct b43_wldev*) ;} ;


 int FUNC_0 (struct b43_wldev*) ;

void FUNC_1(struct b43_wldev *VAR_0)
{
 VAR_0->phy.ops->free(VAR_0);
 VAR_0->phy.ops = ((void*)0);
}
