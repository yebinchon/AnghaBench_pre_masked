
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct sisusb_usb_data*,int) ;

__attribute__((used)) static int FUNC_8(struct sisusb_usb_data *VAR_2,
  int *VAR_3, int *VAR_4)
{
 int VAR_5;
 u8 VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = VAR_1;

 VAR_5 = FUNC_0(VAR_0, 0x3a, &VAR_6);
 VAR_6 &= 3;

 VAR_5 |= FUNC_2(VAR_0, 0x13, 0x00);

 if (VAR_6 <= 1) {
  VAR_5 |= FUNC_2(VAR_0, 0x14, 0x12);
  VAR_5 |= FUNC_3(VAR_0, 0x15, 0xef);
 } else {
  VAR_5 |= FUNC_2(VAR_0, 0x14, 0x02);
 }

 VAR_5 |= FUNC_7(VAR_2, VAR_6);
 VAR_5 |= FUNC_6(VAR_12 + 0, 0x01234567);
 VAR_5 |= FUNC_6(VAR_12 + 4, 0x456789ab);
 VAR_5 |= FUNC_6(VAR_12 + 8, 0x89abcdef);
 VAR_5 |= FUNC_6(VAR_12 + 12, 0xcdef0123);
 VAR_5 |= FUNC_6(VAR_12 + 16, 0x55555555);
 VAR_5 |= FUNC_6(VAR_12 + 20, 0x55555555);
 VAR_5 |= FUNC_6(VAR_12 + 24, 0xffffffff);
 VAR_5 |= FUNC_6(VAR_12 + 28, 0xffffffff);
 VAR_5 |= FUNC_1(VAR_12 + 0, &VAR_8);
 VAR_5 |= FUNC_1(VAR_12 + 4, &VAR_9);
 VAR_5 |= FUNC_1(VAR_12 + 8, &VAR_10);
 VAR_5 |= FUNC_1(VAR_12 + 12, &VAR_11);

 if (VAR_6 <= 1) {

  *VAR_4 = 0; *VAR_3 = 64;

  if ((VAR_11 != 0xcdef0123) || (VAR_10 != 0x89abcdef)) {
   if ((VAR_9 == 0x456789ab) && (VAR_8 == 0x01234567)) {
    *VAR_4 = 0; *VAR_3 = 64;
    VAR_5 |= FUNC_3(VAR_0, 0x14, 0xfd);
   }
  }
  if ((VAR_9 != 0x456789ab) || (VAR_8 != 0x01234567)) {
   *VAR_4 = 1; *VAR_3 = 64;
   VAR_5 |= FUNC_4(VAR_0, 0x14, 0xfc, 0x01);

   VAR_5 |= FUNC_7(VAR_2, VAR_6);
   VAR_5 |= FUNC_6(VAR_12 + 0, 0x89abcdef);
   VAR_5 |= FUNC_6(VAR_12 + 4, 0xcdef0123);
   VAR_5 |= FUNC_6(VAR_12 + 8, 0x55555555);
   VAR_5 |= FUNC_6(VAR_12 + 12, 0x55555555);
   VAR_5 |= FUNC_6(VAR_12 + 16, 0xaaaaaaaa);
   VAR_5 |= FUNC_6(VAR_12 + 20, 0xaaaaaaaa);
   VAR_5 |= FUNC_1(VAR_12 + 4, &VAR_9);

   if (VAR_9 != 0xcdef0123) {
    *VAR_3 = 32;
    VAR_5 |= FUNC_5(VAR_0, 0x15, 0x10);
   }
  }

 } else {

  *VAR_4 = 0; *VAR_3 = 64;

  VAR_7 = 0;

  if (VAR_9 == 0x456789ab) {
   if (VAR_8 == 0x01234567) {
    *VAR_4 = 0; *VAR_3 = 64;
    VAR_7 = 1;
   }
  } else {
   if (VAR_8 == 0x01234567) {
    *VAR_4 = 0; *VAR_3 = 32;
    VAR_5 |= FUNC_2(VAR_0, 0x14, 0x00);
    VAR_7 = 1;
   }
  }

  if (!VAR_7) {
   VAR_5 |= FUNC_2(VAR_0, 0x14, 0x03);
   VAR_5 |= FUNC_7(VAR_2, VAR_6);

   VAR_5 |= FUNC_6(VAR_12 + 0, 0x01234567);
   VAR_5 |= FUNC_6(VAR_12 + 4, 0x456789ab);
   VAR_5 |= FUNC_6(VAR_12 + 8, 0x89abcdef);
   VAR_5 |= FUNC_6(VAR_12 + 12, 0xcdef0123);
   VAR_5 |= FUNC_6(VAR_12 + 16, 0x55555555);
   VAR_5 |= FUNC_6(VAR_12 + 20, 0x55555555);
   VAR_5 |= FUNC_6(VAR_12 + 24, 0xffffffff);
   VAR_5 |= FUNC_6(VAR_12 + 28, 0xffffffff);
   VAR_5 |= FUNC_1(VAR_12 + 0, &VAR_8);
   VAR_5 |= FUNC_1(VAR_12 + 4, &VAR_9);

   if (VAR_9 == 0x456789ab) {
    if (VAR_8 == 0x01234567) {
     *VAR_4 = 1; *VAR_3 = 64;
     return VAR_5;
    }
   } else {
    if (VAR_8 == 0x01234567) {
     *VAR_4 = 1; *VAR_3 = 32;
     VAR_5 |= FUNC_2(VAR_0, 0x14, 0x01);
    }
   }
  }
 }
 return VAR_5;
}
