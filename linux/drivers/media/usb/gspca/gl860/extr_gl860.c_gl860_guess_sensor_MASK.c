
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct gspca_dev*,int,int,int,int,int,int*) ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int ,int *) ;
 int FUNC_2 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_9,
    u16 VAR_10, u16 VAR_11)
{
 struct sd *VAR_12 = (struct sd *) VAR_9;
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 if (VAR_11 == 0xf191)
  VAR_12->sensor = VAR_1;

 if (VAR_12->sensor == 0xff) {
  FUNC_0(VAR_9, 0xc0, 2, 0x0000, 0x0004, 1, &VAR_13);
  FUNC_0(VAR_9, 0xc0, 2, 0x0000, 0x0004, 1, &VAR_13);

  FUNC_1(VAR_9, 0x40, 1, 0x0000, 0x0000, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x0010, 0x0010, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x0008, 0x00c0, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x0001, 0x00c1, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x0001, 0x00c2, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x0020, 0x0006, 0, ((void*)0));
  FUNC_3(3);
  FUNC_1(VAR_9, 0x40, 1, 0x006a, 0x000d, 0, ((void*)0));
  FUNC_3(56);

  FUNC_2(VAR_9, VAR_0, "probing for sensor MI2020 or OVXXXX\n");
  VAR_16 = 0;
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
   FUNC_1(VAR_9, 0x40, 1, 0x0040, 0x0000, 0, ((void*)0));
   FUNC_3(3);
   FUNC_1(VAR_9, 0x40, 1, 0x0063, 0x0006, 0, ((void*)0));
   FUNC_3(3);
   FUNC_1(VAR_9, 0x40, 1, 0x7a00, 0x8030, 0, ((void*)0));
   FUNC_3(10);
   FUNC_0(VAR_9, 0xc0, 2, 0x7a00, 0x8030, 1, &VAR_13);
   FUNC_2(VAR_9, VAR_0, "probe=0x%02x\n", VAR_13);
   if (VAR_13 == 0xff)
    VAR_16++;
  }

  if (VAR_16) {
   FUNC_2(VAR_9, VAR_0, "0xff -> OVXXXX\n");
   FUNC_2(VAR_9, VAR_0, "probing for sensor OV2640 or OV9655");

   VAR_14 = VAR_15 = 0;
   for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
    FUNC_1(VAR_9, 0x40, 1, 0x0040, 0x0000,
      0, ((void*)0));
    FUNC_3(3);
    FUNC_1(VAR_9, 0x40, 1, 0x6000, 0x800a,
      0, ((void*)0));
    FUNC_3(10);


    FUNC_0(VAR_9, 0xc0, 2, 0x6000, 0x800a,
      1, &VAR_13);

    if (VAR_13 == 0x26 || VAR_13 == 0x40) {
     FUNC_2(VAR_9, VAR_0,
        "probe=0x%02x -> OV2640\n",
        VAR_13);
     VAR_12->sensor = VAR_3;
     VAR_14 += 4;
     break;
    }
    if (VAR_13 == 0x96 || VAR_13 == 0x55) {
     FUNC_2(VAR_9, VAR_0,
        "probe=0x%02x -> OV9655\n",
        VAR_13);
     VAR_12->sensor = VAR_4;
     VAR_15 += 4;
     break;
    }
    FUNC_2(VAR_9, VAR_0, "probe=0x%02x\n",
       VAR_13);
    if (VAR_13 == 0x00)
     VAR_14++;
    if (VAR_13 == 0xff)
     VAR_15++;
    FUNC_3(3);
   }
   if (VAR_14 < 4 && VAR_15 < 4)
    return -1;
  } else {
   FUNC_2(VAR_9, VAR_0, "Not any 0xff -> MI2020\n");
   VAR_12->sensor = VAR_2;
  }
 }

 if (VAR_5) {
  FUNC_2(VAR_9, VAR_0, "05e3:f191 sensor MI1320 (1.3M)\n");
 } else if (VAR_6) {
  FUNC_2(VAR_9, VAR_0, "05e3:0503 sensor MI2020 (2.0M)\n");
 } else if (VAR_8) {
  FUNC_2(VAR_9, VAR_0, "05e3:0503 sensor OV9655 (1.3M)\n");
 } else if (VAR_7) {
  FUNC_2(VAR_9, VAR_0, "05e3:0503 sensor OV2640 (2.0M)\n");
 } else {
  FUNC_2(VAR_9, VAR_0, "***** Unknown sensor *****\n");
  return -1;
 }

 return 0;
}
