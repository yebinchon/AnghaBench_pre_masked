
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int * compr_block_types; } ;



__attribute__((used)) static int FUNC_0(struct usb_usbvision *VAR_0, unsigned char *VAR_1,
        unsigned char *VAR_2, int *VAR_3,
        int *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned char VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_17 = 0;
 VAR_8 = *VAR_3;
 VAR_11 = *VAR_4;
 VAR_9 = VAR_8;
 VAR_10 = 0;
 VAR_13 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;
 VAR_12 = 0;
 VAR_6 = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_10 == 0) {
   if (VAR_12 == 0) {
    VAR_16 = VAR_1[VAR_11];
    VAR_11++;
    VAR_12 = 4;
   }
   VAR_15 = (VAR_16 & 0xC0) >> 6;


   VAR_0->compr_block_types[VAR_15]++;

   VAR_8 = VAR_9;
   if (VAR_15 == 0) {
    if (VAR_6 >= 24) {
     VAR_7 += 23;
     VAR_6 -= 24;
     VAR_17 = VAR_2[VAR_7];
    } else {
     VAR_7 += VAR_6 - 1;
     VAR_6 = 0;
    }
   } else {
    VAR_14 = VAR_1[VAR_8];
    VAR_8++;
    if (VAR_6 >= 24)
     VAR_10 = 24;
    else
     VAR_10 = VAR_6;
    VAR_6 -= VAR_10;
    VAR_9 = VAR_8 + (VAR_10 / 4);
   }
   VAR_16 <<= 2;
   VAR_12 -= 1;
  }
  if (VAR_10 > 0) {
   if ((VAR_10 % 4) == 0) {
    VAR_13 = VAR_1[VAR_8];
    VAR_8++;
   }
   if (VAR_15 == 1)
    VAR_17 = VAR_2[VAR_7];
   switch (VAR_13 & 0xC0) {
   case 0x03 << 6:
    VAR_17 += VAR_1[VAR_9];
    VAR_9++;
    break;
   case 0x02 << 6:
    VAR_17 += VAR_14;
    break;
   case 0x00:
    VAR_17 -= VAR_14;
    break;
   }
   VAR_2[VAR_7] = VAR_17;
   VAR_13 <<= 2;
   VAR_10 -= 1;
  }
 }
 *VAR_3 = VAR_9;
 *VAR_4 = VAR_11;
 return VAR_7;
}
