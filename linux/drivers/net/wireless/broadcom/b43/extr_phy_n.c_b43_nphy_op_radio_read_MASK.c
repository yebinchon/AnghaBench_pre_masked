
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static u16 FUNC_3(struct b43_wldev *VAR_2, u16 VAR_3)
{

 FUNC_0(VAR_2->phy.rev < 7 && VAR_3 == 1);

 if (VAR_2->phy.rev >= 7)
  VAR_3 |= 0x200;
 else
  VAR_3 |= 0x100;

 FUNC_2(VAR_2, VAR_0, VAR_3);
 return FUNC_1(VAR_2, VAR_1);
}
