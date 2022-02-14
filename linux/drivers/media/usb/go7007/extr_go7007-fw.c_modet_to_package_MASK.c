
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int* modet_map; TYPE_1__* modet; } ;
typedef int __le16 ;
struct TYPE_2__ {int enable; int pixel_threshold; int motion_threshold; int mb_threshold; } ;


 int FUNC_0 (int *,int*,int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_0, __le16 *VAR_1, int VAR_2)
{
 bool VAR_3 = VAR_0->modet[0].enable;
 bool VAR_4 = VAR_0->modet[1].enable;
 bool VAR_5 = VAR_0->modet[2].enable;
 bool VAR_6 = VAR_0->modet[3].enable;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 u16 VAR_12[32];
 u16 VAR_13[] = {
  0x200e, 0,
  0xbf82, VAR_3 ? VAR_0->modet[0].pixel_threshold : 32767,
  0xbf83, VAR_4 ? VAR_0->modet[1].pixel_threshold : 32767,
  0xbf84, VAR_5 ? VAR_0->modet[2].pixel_threshold : 32767,
  0xbf85, VAR_6 ? VAR_0->modet[3].pixel_threshold : 32767,
  0xbf86, VAR_3 ? VAR_0->modet[0].motion_threshold : 32767,
  0xbf87, VAR_4 ? VAR_0->modet[1].motion_threshold : 32767,
  0xbf88, VAR_5 ? VAR_0->modet[2].motion_threshold : 32767,
  0xbf89, VAR_6 ? VAR_0->modet[3].motion_threshold : 32767,
  0xbf8a, VAR_3 ? VAR_0->modet[0].mb_threshold : 32767,
  0xbf8b, VAR_4 ? VAR_0->modet[1].mb_threshold : 32767,
  0xbf8c, VAR_5 ? VAR_0->modet[2].mb_threshold : 32767,
  0xbf8d, VAR_6 ? VAR_0->modet[3].mb_threshold : 32767,
  0xbf8e, 0,
  0xbf8f, 0,
  0, 0,
 };

 VAR_7 = FUNC_0(VAR_1, VAR_13, 1, VAR_2);
 if (VAR_7 < 0)
  return -1;
 VAR_11 += VAR_7;

 VAR_10 = 0xbac0;
 FUNC_1(VAR_12, 0, 64);
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < 1624; ++VAR_8) {
  VAR_12[VAR_9 * 2 + 3] <<= 2;
  VAR_12[VAR_9 * 2 + 3] |= VAR_0->modet_map[VAR_8];
  if (VAR_8 % 8 != 7)
   continue;
  VAR_12[VAR_9 * 2 + 2] = VAR_10++;
  ++VAR_9;
  if (VAR_9 == 10 || VAR_8 == 1623) {
   VAR_12[0] = 0x2000 | VAR_9;
   VAR_7 = FUNC_0(VAR_1 + VAR_11, VAR_12, 1, VAR_2 - VAR_11);
   if (VAR_7 < 0)
    return -1;
   VAR_11 += VAR_7;
   VAR_9 = 0;
   FUNC_1(VAR_12, 0, 64);
  }
  VAR_12[VAR_9 * 2 + 3] = 0;
 }

 FUNC_1(VAR_12, 0, 64);
 VAR_9 = 0;
 for (VAR_10 = 0xbb90; VAR_10 < 0xbbfa; ++VAR_10) {
  VAR_12[VAR_9 * 2 + 2] = VAR_10;
  VAR_12[VAR_9 * 2 + 3] = 0;
  ++VAR_9;
  if (VAR_9 == 10 || VAR_10 == 0xbbf9) {
   VAR_12[0] = 0x2000 | VAR_9;
   VAR_7 = FUNC_0(VAR_1 + VAR_11, VAR_12, 1, VAR_2 - VAR_11);
   if (VAR_7 < 0)
    return -1;
   VAR_11 += VAR_7;
   VAR_9 = 0;
   FUNC_1(VAR_12, 0, 64);
  }
 }
 return VAR_11;
}
