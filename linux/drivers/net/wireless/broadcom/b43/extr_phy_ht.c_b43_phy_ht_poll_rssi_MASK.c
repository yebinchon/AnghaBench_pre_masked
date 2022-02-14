
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;
typedef int s8 ;
typedef scalar_t__ s32 ;
typedef enum ht_rssi_type { ____Placeholder_ht_rssi_type } ht_rssi_type ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int const) ;
 int FUNC_2 (struct b43_wldev*,int const,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_3, enum ht_rssi_type VAR_4,
     s32 *VAR_5, u8 VAR_6)
{
 u16 VAR_7[12];
 static const u16 VAR_8[] = {
  133, 132,
  0x848, 0x841,
  131, 130,
  0x868, 0x861,
  129, 128,
  0x888, 0x881,
 };
 u16 VAR_9[3];
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < 12; VAR_10++)
  VAR_7[VAR_10] = FUNC_1(VAR_3, VAR_8[VAR_10]);

 FUNC_0(VAR_3, 5, VAR_4);

 for (VAR_10 = 0; VAR_10 < 6; VAR_10++)
  VAR_5[VAR_10] = 0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9[0] = FUNC_1(VAR_3, VAR_0);
  VAR_9[1] = FUNC_1(VAR_3, VAR_1);
  VAR_9[2] = FUNC_1(VAR_3, VAR_2);

  VAR_5[0] += ((s8)((VAR_9[0] & 0x3F) << 2)) >> 2;
  VAR_5[1] += ((s8)(((VAR_9[0] >> 8) & 0x3F) << 2)) >> 2;
  VAR_5[2] += ((s8)((VAR_9[1] & 0x3F) << 2)) >> 2;
  VAR_5[3] += ((s8)(((VAR_9[1] >> 8) & 0x3F) << 2)) >> 2;
  VAR_5[4] += ((s8)((VAR_9[2] & 0x3F) << 2)) >> 2;
  VAR_5[5] += ((s8)(((VAR_9[2] >> 8) & 0x3F) << 2)) >> 2;
 }

 for (VAR_10 = 0; VAR_10 < 12; VAR_10++)
  FUNC_2(VAR_3, VAR_8[VAR_10], VAR_7[VAR_10]);
}
