
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int* usb_buf; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {int priv; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev*VAR_13)
{
 int VAR_14;
 int VAR_15;
 __u8 VAR_16;
 int VAR_17;

 FUNC_3(VAR_13, 0x00c0, 0x01);
 FUNC_3(VAR_13, 0x00c3, 0x00);
 FUNC_3(VAR_13, 0x00c0, 0x00);
 FUNC_1(VAR_13, 0x0001, 1);
 VAR_15 = 8;
 switch (VAR_13->cam.cam_mode[VAR_13->curr_mode].priv) {
 case 0:
  for (VAR_14 = 0; VAR_14 < 27; VAR_14++) {
   if (VAR_14 == 26)
    VAR_15 = 2;
   FUNC_2(VAR_13, 0x0008, VAR_3[VAR_14], VAR_15);
  }
  VAR_16 = 0x28;
  break;
 case 1:
  for (VAR_14 = 0; VAR_14 < 27; VAR_14++) {
   if (VAR_14 == 26)
    VAR_15 = 2;
   FUNC_2(VAR_13, 0x0008, VAR_2[VAR_14], VAR_15);
  }
  VAR_16 = 0x16;
  break;
 default:

  for (VAR_14 = 0; VAR_14 < 27; VAR_14++) {
   if (VAR_14 == 26)
    VAR_15 = 2;
   FUNC_2(VAR_13, 0x0008, VAR_1[VAR_14], VAR_15);
  }
  VAR_16 = 0x14;
  break;
 case 3:
  for (VAR_14 = 0; VAR_14 < 27; VAR_14++) {
   if (VAR_14 == 26)
    VAR_15 = 2;
   FUNC_2(VAR_13, 0x0008, VAR_0[VAR_14], VAR_15);
  }
  VAR_16 = 0x0B;
  break;
 }

 FUNC_1(VAR_13, 0x0002, 1);
 FUNC_3(VAR_13, 0x0055, VAR_16);
 FUNC_1(VAR_13, 0x0002, 1);
 FUNC_2(VAR_13, 0x0010, VAR_5, 2);
 FUNC_3(VAR_13, 0x0054, 0x02);
 FUNC_3(VAR_13, 0x0054, 0x01);
 FUNC_3(VAR_13, 0x0000, 0x94);
 FUNC_3(VAR_13, 0x0053, 0xc0);
 FUNC_3(VAR_13, 0x00fc, 0xe1);
 FUNC_3(VAR_13, 0x0000, 0x00);

 VAR_17 = 50;
 do {
  FUNC_1(VAR_13, 0x0002, 1);

  if (VAR_13->usb_buf[0] == 0x00)
   break;
  FUNC_3(VAR_13, 0x0053, 0x00);
 } while (--VAR_17);
 if (VAR_17 == 0)
  FUNC_0(VAR_13, "Damned Errors sending jpeg Table\n");

 FUNC_1(VAR_13, 0x0001, 1);
 VAR_15 = 8;
 for (VAR_14 = 0; VAR_14 < 18; VAR_14++) {
  if (VAR_14 == 17)
   VAR_15 = 2;
  FUNC_2(VAR_13, 0x0008, VAR_4[VAR_14], VAR_15);

 }
 FUNC_1(VAR_13, 0x0002, 1);
 FUNC_1(VAR_13, 0x0053, 1);
 FUNC_3(VAR_13, 0x0054, 0x02);
 FUNC_3(VAR_13, 0x0054, 0x01);
 FUNC_3(VAR_13, 0x0000, 0x94);
 FUNC_3(VAR_13, 0x0053, 0xc0);

 FUNC_1(VAR_13, 0x0038, 1);
 FUNC_1(VAR_13, 0x0038, 1);
 FUNC_1(VAR_13, 0x001f, 1);
 FUNC_2(VAR_13, 0x0012, VAR_6, 5);
 FUNC_2(VAR_13, 0x00e5, VAR_9, 8);
 FUNC_1(VAR_13, 0x00e8, 8);
 FUNC_2(VAR_13, 0x00e5, VAR_10, 4);
 FUNC_1(VAR_13, 0x00e8, 1);
 FUNC_3(VAR_13, 0x009a, 0x01);
 FUNC_2(VAR_13, 0x00e5, VAR_11, 4);
 FUNC_1(VAR_13, 0x00e8, 1);
 FUNC_2(VAR_13, 0x00e5, VAR_12, 4);
 FUNC_1(VAR_13, 0x00e8, 1);

 FUNC_2(VAR_13, 0x0051, VAR_7, 2);
 FUNC_2(VAR_13, 0x0010, VAR_5, 2);
 FUNC_3(VAR_13, 0x0070, VAR_8);
}
