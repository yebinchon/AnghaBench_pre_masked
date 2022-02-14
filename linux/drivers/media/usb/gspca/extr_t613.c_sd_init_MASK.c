
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {size_t sensor; } ;
struct gspca_dev {int dummy; } ;
struct additional_sensor_data {int const* n3; int const* n4; int n4sz; int reg80; int reg8e; int const* data5; int const* nset8; int const* stream; int data3; int data2; int data1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct gspca_dev*,int const) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int const*,int) ;
 int FUNC_6 (struct gspca_dev*,int,int ,int) ;
 struct additional_sensor_data* VAR_8 ;
 int const* VAR_9 ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_10)
{




 struct sd *VAR_11 = (struct sd *) VAR_10;
 const struct additional_sensor_data *VAR_12;
 int VAR_13;
 u16 VAR_14;
 u8 VAR_15 = 0;

 static const u8 VAR_16[] =
  { 0x0a, 0x0b, 0x66, 0x80, 0x81, 0x8e, 0x8f, 0xa5,
    0xa6, 0xa8, 0xbb, 0xbc, 0xc6, 0x00 };
 static const u8 VAR_17[] =
   {0x08, 0x03, 0x09, 0x03, 0x12, 0x04};
 static const u8 VAR_18[] =
   {0x08, 0x00};

 VAR_14 = (FUNC_3(VAR_10, 0x06) << 8)
   | FUNC_3(VAR_10, 0x07);
 switch (VAR_14 & 0xff0f) {
 case 0x0801:
  FUNC_0(VAR_10, VAR_0, "sensor tas5130a\n");
  VAR_11->sensor = VAR_7;
  break;
 case 0x0802:
  FUNC_0(VAR_10, VAR_0, "sensor lt168g\n");
  VAR_11->sensor = VAR_4;
  break;
 case 0x0803:
  FUNC_0(VAR_10, VAR_0, "sensor 'other'\n");
  VAR_11->sensor = VAR_6;
  break;
 case 0x0807:
  FUNC_0(VAR_10, VAR_0, "sensor om6802\n");
  VAR_11->sensor = VAR_5;
  break;
 default:
  FUNC_2("unknown sensor %04x\n", VAR_14);
  return -VAR_2;
 }

 if (VAR_11->sensor == VAR_5) {
  FUNC_5(VAR_10, VAR_17, sizeof VAR_17);
  VAR_13 = 5;
  while (--VAR_13 >= 0) {
   FUNC_5(VAR_10, VAR_9, sizeof VAR_9);
   VAR_15 = FUNC_3(VAR_10, 0x0063);
   FUNC_1(100);
   if (VAR_15 == 0x17)
    break;
  }
  if (VAR_13 < 0) {
   FUNC_2("Bad sensor reset %02x\n", VAR_15);
   return -VAR_3;
  }
  FUNC_5(VAR_10, VAR_18, sizeof VAR_18);
 }

 VAR_13 = 0;
 while (VAR_16[VAR_13] != 0x00) {
  VAR_15 = FUNC_3(VAR_10, VAR_16[VAR_13]);
  FUNC_0(VAR_10, VAR_1, "Reg 0x%02x = 0x%02x\n",
     VAR_16[VAR_13], VAR_15);
  VAR_13++;
 }

 VAR_12 = &VAR_8[VAR_11->sensor];
 FUNC_5(VAR_10, VAR_12->n3, sizeof VAR_12->n3);
 FUNC_5(VAR_10, VAR_12->n4, VAR_12->n4sz);

 if (VAR_11->sensor == VAR_4) {
  VAR_15 = FUNC_3(VAR_10, 0x80);
  FUNC_0(VAR_10, VAR_1, "Reg 0x%02x = 0x%02x\n", 0x80,
     VAR_15);
  FUNC_4(VAR_10, 0x6c80);
 }

 FUNC_6(VAR_10, 0xd0, VAR_12->data1, sizeof VAR_12->data1);
 FUNC_6(VAR_10, 0xc7, VAR_12->data2, sizeof VAR_12->data2);
 FUNC_6(VAR_10, 0xe0, VAR_12->data3, sizeof VAR_12->data3);

 FUNC_4(VAR_10, (VAR_12->reg80 << 8) + 0x80);
 FUNC_4(VAR_10, (VAR_12->reg80 << 8) + 0x80);
 FUNC_4(VAR_10, (VAR_12->reg8e << 8) + 0x8e);
 FUNC_4(VAR_10, (0x20 << 8) + 0x87);
 FUNC_4(VAR_10, (0x20 << 8) + 0x88);
 FUNC_4(VAR_10, (0x20 << 8) + 0x89);

 FUNC_5(VAR_10, VAR_12->data5, sizeof VAR_12->data5);
 FUNC_5(VAR_10, VAR_12->nset8, sizeof VAR_12->nset8);
 FUNC_5(VAR_10, VAR_12->stream, sizeof VAR_12->stream);

 if (VAR_11->sensor == VAR_4) {
  VAR_15 = FUNC_3(VAR_10, 0x80);
  FUNC_0(VAR_10, VAR_1, "Reg 0x%02x = 0x%02x\n", 0x80,
     VAR_15);
  FUNC_4(VAR_10, 0x6c80);
 }

 FUNC_6(VAR_10, 0xd0, VAR_12->data1, sizeof VAR_12->data1);
 FUNC_6(VAR_10, 0xc7, VAR_12->data2, sizeof VAR_12->data2);
 FUNC_6(VAR_10, 0xe0, VAR_12->data3, sizeof VAR_12->data3);

 return 0;
}
