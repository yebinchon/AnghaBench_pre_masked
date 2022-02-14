
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,char const) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,char const) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct sisusb_usb_data *VAR_6,
  int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 static const char VAR_16[] = {
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
  0x01, 0x00, 0x00, 0x00
 };
 static const char VAR_17[] = {
  0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80, 0x0b, 0x3e,
  0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xea, 0x8c, 0xdf, 0x28, 0x40, 0xe7, 0x04, 0xa3,
  0xff
 };
 static const char VAR_18[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x05, 0x0f,
  0xff
 };
 static const char VAR_19[] = {
  0x5f, 0x4f, 0x4f, 0x83, 0x55, 0x81, 0x0b, 0x3e,
  0xe9, 0x8b, 0xdf, 0xe8, 0x0c, 0x00, 0x00, 0x05,
  0x00
 };

 VAR_10 = 640; VAR_11 = 2;

 FUNC_0(VAR_5, 0x31, &VAR_13);
 FUNC_0(VAR_1, 0x63, &VAR_14);
 FUNC_5(VAR_5, 0x01, 0x20);
 FUNC_2(VAR_1, 0x63, VAR_14 & 0xbf);
 FUNC_5(VAR_1, 0x17, 0x80);
 FUNC_5(VAR_5, 0x1f, 0x04);
 FUNC_3(VAR_5, 0x07, 0xfb);
 FUNC_2(VAR_5, 0x00, 0x03);
 FUNC_2(VAR_5, 0x01, 0x21);
 FUNC_2(VAR_5, 0x02, 0x0f);
 FUNC_2(VAR_5, 0x03, 0x00);
 FUNC_2(VAR_5, 0x04, 0x0e);
 FUNC_6(VAR_4, 0x23);
 for (VAR_8 = 0; VAR_8 <= 0x18; VAR_8++) {
  FUNC_2(VAR_1, VAR_8, VAR_17[VAR_8]);
 }
 for (VAR_8 = 0; VAR_8 <= 0x13; VAR_8++) {
  FUNC_1(VAR_3, &VAR_15);
  FUNC_6(VAR_0, VAR_8);
  FUNC_6(VAR_0, VAR_16[VAR_8]);
 }
 FUNC_1(VAR_3, &VAR_15);
 FUNC_6(VAR_0, 0x14);
 FUNC_6(VAR_0, 0x00);
 FUNC_1(VAR_3, &VAR_15);
 FUNC_6(VAR_0, 0x20);
 FUNC_1(VAR_3, &VAR_15);
 for (VAR_8 = 0; VAR_8 <= 0x08; VAR_8++) {
  FUNC_2(VAR_2, VAR_8, VAR_18[VAR_8]);
 }
 FUNC_3(VAR_2, 0x05, 0xbf);
 for (VAR_8 = 0x0A; VAR_8 <= 0x0E; VAR_8++) {
  FUNC_2(VAR_5, VAR_8, 0x00);
 }
 FUNC_3(VAR_5, 0x37, 0xfe);
 FUNC_6(VAR_4, 0xef);
 FUNC_2(VAR_1, 0x11, 0x00);
 for (VAR_9 = 0x00, VAR_8 = 0; VAR_8 <= 7; VAR_8++, VAR_9++)
  FUNC_2(VAR_1, VAR_9, VAR_19[VAR_8]);

 for (VAR_9 = 0x10; VAR_8 <= 10; VAR_8++, VAR_9++)
  FUNC_2(VAR_1, VAR_9, VAR_19[VAR_8]);

 for (VAR_9 = 0x15; VAR_8 <= 12; VAR_8++, VAR_9++)
  FUNC_2(VAR_1, VAR_9, VAR_19[VAR_8]);

 for (VAR_9 = 0x0A; VAR_8 <= 15; VAR_8++, VAR_9++)
  FUNC_2(VAR_5, VAR_9, VAR_19[VAR_8]);

 FUNC_2(VAR_5, 0x0E, (VAR_19[16] & 0xE0));
 FUNC_4(VAR_1, 0x09, 0x5f, ((VAR_19[16] & 0x01) << 5));
 FUNC_2(VAR_1, 0x14, 0x4f);
 VAR_12 = (VAR_10 / 16) * (VAR_11 * 2);
 FUNC_4(VAR_5, 0x0e, 0xf0, ((VAR_12 >> 8) & 0x0f));
 FUNC_2(VAR_1, 0x13, (VAR_12 & 0xff));
 VAR_12 <<= 5;
 VAR_15 = VAR_12 >> 8;
 FUNC_2(VAR_5, 0x10, VAR_15);
 FUNC_2(VAR_5, 0x31, 0x00);
 FUNC_2(VAR_5, 0x2b, 0x1b);
 FUNC_2(VAR_5, 0x2c, 0xe1);
 FUNC_2(VAR_5, 0x2d, 0x01);
 FUNC_3(VAR_5, 0x3d, 0xfe);
 FUNC_2(VAR_5, 0x08, 0xae);
 FUNC_3(VAR_5, 0x09, 0xf0);
 FUNC_2(VAR_5, 0x08, 0x34);
 FUNC_5(VAR_5, 0x3d, 0x01);
 FUNC_3(VAR_5, 0x1f, 0x3f);
 FUNC_4(VAR_5, 0x06, 0xc0, 0x0a);
 FUNC_2(VAR_1, 0x19, 0x00);
 FUNC_3(VAR_1, 0x1a, 0xfc);
 FUNC_3(VAR_5, 0x0f, 0xb7);
 FUNC_3(VAR_5, 0x31, 0xfb);
 FUNC_4(VAR_5, 0x21, 0x1f, 0xa0);
 FUNC_3(VAR_5, 0x32, 0xf3);
 FUNC_4(VAR_5, 0x07, 0xf8, 0x03);
 FUNC_2(VAR_1, 0x52, 0x6c);

 FUNC_2(VAR_1, 0x0d, 0x00);
 FUNC_2(VAR_1, 0x0c, 0x00);
 FUNC_2(VAR_5, 0x0d, 0x00);
 FUNC_3(VAR_5, 0x37, 0xfe);

 FUNC_2(VAR_1, 0x32, 0x20);
 FUNC_3(VAR_5, 0x01, 0xdf);
 FUNC_2(VAR_1, 0x63, (VAR_14 & 0xbf));
 FUNC_2(VAR_5, 0x31, (VAR_13 & 0xfb));

 if (VAR_7) {
  FUNC_2(VAR_5, 0x20, 0xa1);
  FUNC_5(VAR_5, 0x1e, 0x5a);

  FUNC_2(VAR_5, 0x26, 0x01);
  FUNC_2(VAR_5, 0x27, 0x1f);
  FUNC_2(VAR_5, 0x26, 0x00);
 }

 FUNC_2(VAR_1, 0x34, 0x44);
}
