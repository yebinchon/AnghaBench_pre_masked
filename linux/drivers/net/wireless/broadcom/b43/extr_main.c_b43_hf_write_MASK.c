
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int ,int) ;

void FUNC_1(struct b43_wldev *VAR_4, u64 VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8;

 VAR_6 = (VAR_5 & 0x00000000FFFFULL);
 VAR_7 = (VAR_5 & 0x0000FFFF0000ULL) >> 16;
 VAR_8 = (VAR_5 & 0xFFFF00000000ULL) >> 32;
 FUNC_0(VAR_4, VAR_0, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_0, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_0, VAR_3, VAR_8);
}
