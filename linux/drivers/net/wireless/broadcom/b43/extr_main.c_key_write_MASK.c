
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct b43_wldev {scalar_t__ ktp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_3,
        u8 VAR_4, u8 VAR_5, const u8 *VAR_6)
{
 unsigned int VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 u16 VAR_10;


 VAR_10 = FUNC_0(VAR_3, VAR_4);
 VAR_9 = ((VAR_10 << 4) | VAR_5);
 FUNC_1(VAR_3, VAR_1,
   VAR_2 + (VAR_10 * 2), VAR_9);


 VAR_8 = VAR_3->ktp + (VAR_4 * VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7 += 2) {
  VAR_9 = VAR_6[VAR_7];
  VAR_9 |= (u16) (VAR_6[VAR_7 + 1]) << 8;
  FUNC_1(VAR_3, VAR_1, VAR_8 + VAR_7, VAR_9);
 }
}
