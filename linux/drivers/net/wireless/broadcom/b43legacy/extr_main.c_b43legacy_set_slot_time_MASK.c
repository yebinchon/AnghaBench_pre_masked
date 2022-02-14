
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct b43legacy_wldev {TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int,scalar_t__) ;
 int FUNC_1 (struct b43legacy_wldev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_2,
        u16 VAR_3)
{

 if (VAR_2->phy.type != VAR_0)
  return;
 FUNC_1(VAR_2, 0x684, 510 + VAR_3);
 FUNC_0(VAR_2, VAR_1, 0x0010,
         VAR_3);
}
