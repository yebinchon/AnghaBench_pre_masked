
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_1)
{
 u32 VAR_2;



 while (1) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  if (!(VAR_2 & 0x00000008))
   break;
 }

 FUNC_1(VAR_1, VAR_0, 0x0002);
}
