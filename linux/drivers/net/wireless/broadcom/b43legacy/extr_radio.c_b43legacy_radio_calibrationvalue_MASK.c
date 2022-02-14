
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int* VAR_0 ;

u16 FUNC_1(struct b43legacy_wldev *VAR_1)
{
 u16 VAR_2;
 u16 VAR_3;
 u16 VAR_4;

 VAR_2 = FUNC_0(VAR_1, 0x0060);
 VAR_3 = (VAR_2 & 0x001E) >> 1;
 VAR_4 = VAR_0[VAR_3] << 1;
 VAR_4 |= (VAR_2 & 0x0001);
 VAR_4 |= 0x0020;

 return VAR_4;
}
