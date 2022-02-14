
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sd {int chip_revision; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int revision; int internal_sensor_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8;
 u16 VAR_9;


 FUNC_5(VAR_6, 0x02, 0x0010);
 FUNC_4(VAR_6, 0x0010);
 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x00, 0x0010);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0x91, 0x008b);
 FUNC_5(VAR_6, 0x03, 0x0012);
 FUNC_5(VAR_6, 0x01, 0x0012);
 FUNC_5(VAR_6, 0x05, 0x0012);
 VAR_9 = FUNC_2(VAR_6, 0x14);
 if (VAR_9 != 0)
  return 0x11;
 VAR_9 = FUNC_2(VAR_6, 0x15);
 if (VAR_9 != 0)
  return 0x11;
 VAR_9 = FUNC_2(VAR_6, 0x16);
 if (VAR_9 != 0)
  return 0x11;

 FUNC_5(VAR_6, 0x02, 0x0010);
 VAR_9 = FUNC_4(VAR_6, 0x000b) << 8;
 VAR_9 |= FUNC_4(VAR_6, 0x000a);
 FUNC_1(VAR_6, VAR_0, "probe 3wr vga 1 0x%04x\n", VAR_9);
 FUNC_4(VAR_6, 0x0010);
 if ((VAR_9 & 0xff00) == 0x6400)
  return 0x02;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  if (VAR_5[VAR_8].revision == VAR_9) {
   VAR_7->chip_revision = VAR_9;
   FUNC_6(VAR_6, VAR_3);
   return VAR_5[VAR_8].internal_sensor_id;
  }
 }

 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0xdd, 0x008b);
 FUNC_5(VAR_6, 0x0a, 0x0010);
 FUNC_5(VAR_6, 0x03, 0x0012);
 FUNC_5(VAR_6, 0x01, 0x0012);
 VAR_9 = FUNC_2(VAR_6, 0x00);
 if (VAR_9 != 0) {
  FUNC_1(VAR_6, VAR_0, "probe 3wr vga type 0a\n");
  return 0x0a;
 }


 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0x98, 0x008b);
 FUNC_5(VAR_6, 0x01, 0x0010);
 FUNC_5(VAR_6, 0x03, 0x0012);
 FUNC_3(2);
 FUNC_5(VAR_6, 0x01, 0x0012);
 VAR_9 = FUNC_2(VAR_6, 0x00);
 if (VAR_9 != 0) {
  FUNC_1(VAR_6, VAR_0, "probe 3wr vga type %02x\n",
     VAR_9);
  if (VAR_9 == 0x0011)
   return 0x0303;
  if (VAR_9 == 0x0029)
   FUNC_6(VAR_6, VAR_1);
  return VAR_9;
 }

 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0xa1, 0x008b);
 FUNC_5(VAR_6, 0x08, 0x008d);
 FUNC_5(VAR_6, 0x06, 0x0010);
 FUNC_5(VAR_6, 0x01, 0x0012);
 FUNC_5(VAR_6, 0x05, 0x0012);
 if (FUNC_2(VAR_6, 0x1c) == 0x007f
     && FUNC_2(VAR_6, 0x1d) == 0x00a2) {
  FUNC_6(VAR_6, VAR_2);
  return 0x06;
 }

 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x00, 0x0002);
 FUNC_5(VAR_6, 0x01, 0x0010);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0xee, 0x008b);
 FUNC_5(VAR_6, 0x03, 0x0012);
 FUNC_5(VAR_6, 0x01, 0x0012);
 FUNC_5(VAR_6, 0x05, 0x0012);
 VAR_9 = FUNC_2(VAR_6, 0x00) << 8;
 VAR_9 |= FUNC_2(VAR_6, 0x01);
 FUNC_1(VAR_6, VAR_0, "probe 3wr vga 2 0x%04x\n", VAR_9);
 if (VAR_9 == 0x2030) {
  u8 VAR_10;

  VAR_10 = FUNC_2(VAR_6, 0x02);
  FUNC_1(VAR_6, VAR_0, "sensor PO2030 rev 0x%02x\n",
     VAR_10);

  FUNC_6(VAR_6, VAR_4);
  return VAR_9;
 }

 FUNC_5(VAR_6, 0x01, 0x0000);
 FUNC_5(VAR_6, 0x0a, 0x0010);
 FUNC_5(VAR_6, 0xd3, 0x008b);
 FUNC_5(VAR_6, 0x01, 0x0001);
 FUNC_5(VAR_6, 0x03, 0x0012);
 FUNC_5(VAR_6, 0x01, 0x0012);
 FUNC_5(VAR_6, 0x05, 0x0012);
 FUNC_5(VAR_6, 0xd3, 0x008b);
 VAR_9 = FUNC_2(VAR_6, 0x01);
 if (VAR_9 != 0) {
  FUNC_1(VAR_6, VAR_0, "probe 3wr vga type 0a ? ret: %04x\n",
     VAR_9);
  return 0x16;
 }
 return -1;
}
