
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct b43legacy_wldev *VAR_1)
{
 u32 VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0x40A);
 VAR_2 <<= 16;
 VAR_2 |= FUNC_0(VAR_1, VAR_0, 0x408);

 return VAR_2;
}
