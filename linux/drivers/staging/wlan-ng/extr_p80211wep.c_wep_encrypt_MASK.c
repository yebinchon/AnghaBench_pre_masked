
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wlandevice {scalar_t__* wep_keylens; int * wep_keys; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;

int FUNC_3(struct wlandevice *VAR_2, u8 *VAR_3,
  u8 *VAR_4, u32 VAR_5, int VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14[256], VAR_15[64];


 if (VAR_5 <= 0)
  return -1;


 if (VAR_6 >= VAR_0)
  return -2;
 VAR_13 = VAR_2->wep_keylens[VAR_6];
 if (VAR_13 <= 0)
  return -3;


 FUNC_0(VAR_7, 3);
 while ((VAR_7[1] == 0xff) && (VAR_7[0] >= 3) && (VAR_7[0] < VAR_13))
  FUNC_0(VAR_7, 3);

 VAR_7[3] = (VAR_6 & 0x03) << 6;

 VAR_15[0] = VAR_7[0];
 VAR_15[1] = VAR_7[1];
 VAR_15[2] = VAR_7[2];


 FUNC_1(VAR_15 + 3, VAR_2->wep_keys[VAR_6], VAR_13);

 VAR_13 += 3;


 for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
  VAR_14[VAR_9] = VAR_9;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
  VAR_10 = (VAR_10 + VAR_14[VAR_9] + VAR_15[VAR_9 % VAR_13]) & 0xff;
  FUNC_2(VAR_9, VAR_10);
 }


 VAR_12 = ~0;
 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_12 = VAR_1[(VAR_12 ^ VAR_3[VAR_11]) & 0xff] ^ (VAR_12 >> 8);
  VAR_9 = (VAR_9 + 1) & 0xff;
  VAR_10 = (VAR_10 + VAR_14[VAR_9]) & 0xff;
  FUNC_2(VAR_9, VAR_10);
  VAR_4[VAR_11] = VAR_3[VAR_11] ^ VAR_14[(VAR_14[VAR_9] + VAR_14[VAR_10]) & 0xff];
 }
 VAR_12 = ~VAR_12;


 VAR_8[0] = VAR_12;
 VAR_8[1] = VAR_12 >> 8;
 VAR_8[2] = VAR_12 >> 16;
 VAR_8[3] = VAR_12 >> 24;

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  VAR_9 = (VAR_9 + 1) & 0xff;
  VAR_10 = (VAR_10 + VAR_14[VAR_9]) & 0xff;
  FUNC_2(VAR_9, VAR_10);
  VAR_8[VAR_11] ^= VAR_14[(VAR_14[VAR_9] + VAR_14[VAR_10]) & 0xff];
 }

 return 0;
}
