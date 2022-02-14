
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_3, u32 VAR_4)
{
 u16 VAR_5 = VAR_4 & 0x1;
 u16 VAR_6 = (VAR_4 & 0xFFFC) | ((VAR_4 & 0xC) >> 2);
 u16 VAR_7 = (VAR_4 & 2) >> 1;

 FUNC_0(VAR_3, VAR_1, 0xFFFE, VAR_5);
 FUNC_0(VAR_3, VAR_0,
   0xFBFF, VAR_7 << 10);
 FUNC_0(VAR_3, VAR_0,
   0xF7FF, VAR_7 << 11);
 FUNC_1(VAR_3, VAR_2, VAR_6);
}
