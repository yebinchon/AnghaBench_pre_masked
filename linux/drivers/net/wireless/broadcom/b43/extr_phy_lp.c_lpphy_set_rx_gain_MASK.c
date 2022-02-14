
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_0, u32 VAR_1)
{
 if (VAR_0->phy.rev < 2)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_0);
}
