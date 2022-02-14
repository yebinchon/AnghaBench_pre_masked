
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {size_t mirror; size_t flip; size_t AC50Hz; size_t whitebal; } ;
struct TYPE_8__ {scalar_t__ mirror; scalar_t__ flip; scalar_t__ AC50Hz; size_t whitebal; } ;
struct sd {int mirrorMask; int nbIm; TYPE_1__ vold; TYPE_4__ vcur; } ;
struct TYPE_7__ {TYPE_2__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_3__ cam; } ;
typedef size_t s32 ;
struct TYPE_6__ {size_t priv; } ;


 int FUNC_0 (int ) ;




 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int,int,int*) ;
 int FUNC_3 (struct gspca_dev*,int,int,int,int,int,...) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_20)
{
 struct sd *VAR_21 = (struct sd *) VAR_20;
 s32 VAR_22 = VAR_20->cam.cam_mode[(s32) VAR_20->curr_mode].priv;

 s32 VAR_23 = (((VAR_21->vcur.mirror > 0) ^ VAR_21->mirrorMask) > 0);
 s32 VAR_24 = (((VAR_21->vcur.flip > 0) ^ VAR_21->mirrorMask) > 0);
 s32 VAR_25 = (VAR_21->vcur.AC50Hz > 0);
 s32 VAR_26 = VAR_21->vcur.whitebal;

 u8 VAR_27[] = {0x90, 0x00, 0x80};
 u8 VAR_28[] = {0x8c, 0xa7, 0x00};
 u8 VAR_29[] = {0x90, 0x00, 0x00};
 u8 VAR_30[] = {0x8c, 0xa7, 0x00};
 u8 VAR_31[] = {0x90, 0x00, 0x00};
 u8 VAR_32[] = {0x90, 0x04, 0x6c};
 u8 VAR_33[] = {0x90, 0x00, 0x24};
 u8 VAR_34[] = {0x90, 0x00, 0x00};
 u8 VAR_35;

 VAR_21->nbIm = -1;

 VAR_27[2] = VAR_25 ? 0xc0 : 0x80;
 VAR_28[2] = 0x9d;
 VAR_30[2] = VAR_28[2] + 1;
 if (VAR_26 == 0) {
  VAR_31[2] = VAR_29[2] = 0;
  VAR_34[2] = 0x17;
 } else if (VAR_26 == 1) {
  VAR_31[2] = VAR_29[2] = 0;
  VAR_34[2] = 0x35;
 } else if (VAR_26 == 2) {
  VAR_31[2] = VAR_29[2] = 0x20;
  VAR_34[2] = 0x17;
 }
 VAR_32[2] = 0x6c + 2 * (1 - VAR_24) + (1 - VAR_23);
 VAR_33[2] = 0x24 + 2 * (1 - VAR_24) + (1 - VAR_23);

 FUNC_6(200);
 FUNC_3(VAR_20, 0x40, 5, 0x0001, 0x0000, 0, ((void*)0));
 FUNC_6(2);

 FUNC_1(VAR_20);

 FUNC_6(142);
 FUNC_3(VAR_20, 0x40, 1, 0x0010, 0x0010, 0, ((void*)0));
 FUNC_3(VAR_20, 0x40, 1, 0x0003, 0x00c1, 0, ((void*)0));
 FUNC_3(VAR_20, 0x40, 1, 0x0042, 0x00c2, 0, ((void*)0));
 FUNC_3(VAR_20, 0x40, 1, 0x006a, 0x000d, 0, ((void*)0));

 switch (VAR_22) {
 case 129:
 case 128:
  if (VAR_22 != 128)
   FUNC_3(VAR_20, 0x40, 3, 0x0000, 0x0200,
    12, VAR_2);
  else
   FUNC_3(VAR_20, 0x40, 3, 0x0000, 0x0200,
    12, VAR_3);

  FUNC_4(VAR_20, VAR_15,
     FUNC_0(VAR_15));

  if (VAR_22 == 128)
   FUNC_4(VAR_20, VAR_16,
     FUNC_0(VAR_16));

  FUNC_4(VAR_20, VAR_17,
    FUNC_0(VAR_17));

  FUNC_3(VAR_20, 0x40, 1, 0x0010, 0x0010, 0, ((void*)0));
  FUNC_3(VAR_20, 0x40, 1, 0x0000, 0x00c1, 0, ((void*)0));
  FUNC_3(VAR_20, 0x40, 1, 0x0041, 0x00c2, 0, ((void*)0));
  FUNC_6(120);
  break;

 case 131:
 case 130:
  if (VAR_22 == 131) {
   FUNC_3(VAR_20, 0x40, 3, 0x0000, 0x0200,
     12, VAR_0);
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x8c\x27\x07");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x90\x05\x04");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x8c\x27\x09");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x90\x04\x02");
  } else {
   FUNC_3(VAR_20, 0x40, 3, 0x0000, 0x0200,
     12, VAR_1);
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x8c\x27\x07");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x90\x06\x40");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x8c\x27\x09");
   FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033,
     3, "\x90\x04\xb0");
  }

  FUNC_4(VAR_20, VAR_14,
    FUNC_0(VAR_14));

  FUNC_3(VAR_20, 0x40, 1, 0x0001, 0x0010, 0, ((void*)0));
  FUNC_3(VAR_20, 0x40, 1, 0x0000, 0x00c1, 0, ((void*)0));
  FUNC_3(VAR_20, 0x40, 1, 0x0041, 0x00c2, 0, ((void*)0));
  FUNC_6(1850);
 }

 FUNC_3(VAR_20, 0x40, 1, 0x0040, 0x0000, 0, ((void*)0));
 FUNC_6(40);


 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_4);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_27);
 FUNC_6(33);

 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_28);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_29);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_30);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_31);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_11);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_34);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_9);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_10);
 FUNC_6(7);
 FUNC_2(VAR_20, 0xc0, 2, 0x0000, 0x0000, 1, &VAR_35);

 FUNC_4(VAR_20, VAR_13,
   FUNC_0(VAR_13));


 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_5);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_32);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_6);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_33);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_7);
 FUNC_3(VAR_20, 0x40, 3, 0x7a00, 0x0033, 3, VAR_8);
 FUNC_6(250);

 if (VAR_22 == 129 || VAR_22 == 128)
  FUNC_4(VAR_20, VAR_19,
    FUNC_0(VAR_19));
 else
  FUNC_4(VAR_20, VAR_18,
    FUNC_0(VAR_18));

 FUNC_4(VAR_20, VAR_12,
   FUNC_0(VAR_12));

 VAR_21->nbIm = 0;

 VAR_21->vold.mirror = VAR_23;
 VAR_21->vold.flip = VAR_24;
 VAR_21->vold.AC50Hz = VAR_25;
 VAR_21->vold.whitebal = VAR_26;

 FUNC_5(VAR_20);

 return 0;
}
