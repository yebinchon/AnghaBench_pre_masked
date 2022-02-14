
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_3, u16 VAR_4, u16 VAR_5,
         u16 VAR_6)
{
 FUNC_0(VAR_3, VAR_1,
   0xFFC0, VAR_4 - 1);
 if (VAR_5 != 0xFFFF)
  VAR_5--;
 FUNC_0(VAR_3, VAR_2, 0xF000, VAR_5);
 FUNC_0(VAR_3, VAR_1, 0x3F, VAR_6 << 6);
 FUNC_1(VAR_3, VAR_0, 0x1);
}
