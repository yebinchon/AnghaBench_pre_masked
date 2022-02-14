
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;

void FUNC_1(struct b43legacy_wldev *VAR_3, u16 VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_3, VAR_0, VAR_4);
 FUNC_0(VAR_3, VAR_2,
       (VAR_5 & 0xFFFF0000) >> 16);
 FUNC_0(VAR_3, VAR_1,
       VAR_5 & 0x0000FFFF);
}
