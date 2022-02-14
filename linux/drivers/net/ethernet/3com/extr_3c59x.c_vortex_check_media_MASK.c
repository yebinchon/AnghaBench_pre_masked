
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int full_duplex; } ;
struct vortex_private {TYPE_1__ mii; int full_duplex; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int,unsigned int) ;
 struct vortex_private* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, unsigned int VAR_2)
{
 struct vortex_private *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = 0;

 if (VAR_0 > 3)
  VAR_4 = 1;

 if (FUNC_0(&VAR_3->mii, VAR_4, VAR_2)) {
  VAR_3->full_duplex = VAR_3->mii.full_duplex;
  FUNC_2(VAR_1);
 } else if (VAR_2) {
  FUNC_2(VAR_1);
 }
}
