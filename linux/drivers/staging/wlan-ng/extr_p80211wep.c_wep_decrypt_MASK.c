
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wlandevice {scalar_t__* wep_keylens; int * wep_keys; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;

int FUNC_3(struct wlandevice *VAR_2, u8 *VAR_3, u32 VAR_4, int VAR_5,
  u8 *VAR_6, u8 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13[256], VAR_14[64], VAR_15[4];
 u8 VAR_16;


 if (VAR_4 <= 0)
  return -1;


 VAR_14[0] = VAR_6[0];
 VAR_14[1] = VAR_6[1];
 VAR_14[2] = VAR_6[2];
 VAR_16 = FUNC_0(VAR_6[3]);

 if (VAR_5 >= 0)
  VAR_16 = VAR_5;

 if (VAR_16 >= VAR_0)
  return -2;

 VAR_12 = VAR_2->wep_keylens[VAR_16];

 if (VAR_12 == 0)
  return -3;


 FUNC_1(VAR_14 + 3, VAR_2->wep_keys[VAR_16], VAR_12);

 VAR_12 += 3;


 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
  VAR_13[VAR_8] = VAR_8;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_9 = (VAR_9 + VAR_13[VAR_8] + VAR_14[VAR_8 % VAR_12]) & 0xff;
  FUNC_2(VAR_8, VAR_9);
 }


 VAR_11 = ~0;
 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = (VAR_8 + 1) & 0xff;
  VAR_9 = (VAR_9 + VAR_13[VAR_8]) & 0xff;
  FUNC_2(VAR_8, VAR_9);
  VAR_3[VAR_10] ^= VAR_13[(VAR_13[VAR_8] + VAR_13[VAR_9]) & 0xff];
  VAR_11 = VAR_1[(VAR_11 ^ VAR_3[VAR_10]) & 0xff] ^ (VAR_11 >> 8);
 }
 VAR_11 = ~VAR_11;


 VAR_15[0] = VAR_11;
 VAR_15[1] = VAR_11 >> 8;
 VAR_15[2] = VAR_11 >> 16;
 VAR_15[3] = VAR_11 >> 24;

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  VAR_8 = (VAR_8 + 1) & 0xff;
  VAR_9 = (VAR_9 + VAR_13[VAR_8]) & 0xff;
  FUNC_2(VAR_8, VAR_9);
  if ((VAR_15[VAR_10] ^ VAR_13[(VAR_13[VAR_8] + VAR_13[VAR_9]) & 0xff]) != VAR_7[VAR_10])
   return -(4 | (VAR_10 << 4));
 }

 return 0;
}
