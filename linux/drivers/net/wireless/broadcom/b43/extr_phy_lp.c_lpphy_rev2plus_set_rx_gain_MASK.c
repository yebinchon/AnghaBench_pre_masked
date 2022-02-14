
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_5, u32 VAR_6)
{
 u16 VAR_7 = VAR_6 & 0xFFFF;
 u16 VAR_8 = (VAR_6 >> 16) & 0xF;
 u16 VAR_9 = (VAR_6 >> 21) & 0x1;
 u16 VAR_10 = ~(VAR_6 >> 20) & 0x1;
 u16 VAR_11;

 FUNC_2(VAR_5, VAR_2, 0xFFFE, VAR_10);
 FUNC_2(VAR_5, VAR_1,
   0xFDFF, VAR_9 << 9);
 FUNC_2(VAR_5, VAR_1,
   0xFBFF, VAR_9 << 10);
 FUNC_3(VAR_5, VAR_3, VAR_7);
 FUNC_2(VAR_5, VAR_0, 0xFFF0, VAR_8);
 if (FUNC_1(VAR_5->wl) == VAR_4) {
  VAR_11 = (VAR_6 >> 2) & 0x3;
  FUNC_2(VAR_5, VAR_1,
    0xE7FF, VAR_11<<11);
  FUNC_2(VAR_5, FUNC_0(0xE6), 0xFFE7, VAR_11 << 3);
 }
}
