
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ type; int freq; int jpegqual; scalar_t__ blocks_left; } ;
struct TYPE_2__ {int member_0; int member_1; } ;
struct jlj_command {int member_1; int delay; scalar_t__ ack_wanted; int instruction; int member_2; TYPE_1__ member_0; } ;
struct gspca_dev {scalar_t__ usb_err; int curr_mode; } ;


 int FUNC_0 (struct jlj_command*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (struct gspca_dev*,int*) ;
 int FUNC_3 (struct gspca_dev*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct gspca_dev*,int ) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u8 VAR_6 = 0xff;
 struct sd *VAR_7 = (struct sd *) VAR_3;
 struct jlj_command VAR_8[] = {
  {{0x71, 0x81}, 0, 0},
  {{0x70, 0x05}, 0, VAR_0},
  {{0x95, 0x70}, 1, 0},
  {{0x71, 0x81 - VAR_3->curr_mode}, 0, 0},
  {{0x70, 0x04}, 0, VAR_0},
  {{0x95, 0x70}, 1, 0},
  {{0x71, 0x00}, 0, 0},
  {{0x70, 0x08}, 0, VAR_0},
  {{0x95, 0x70}, 1, 0},

  {{0x94, 0x02}, 0, 0},
  {{0xde, 0x24}, 0, 0},
  {{0x94, 0x02}, 0, 0},
  {{0xdd, 0xf0}, 0, 0},
  {{0x94, 0x02}, 0, 0},
  {{0xe3, 0x2c}, 0, 0},
  {{0x94, 0x02}, 0, 0},
  {{0xe4, 0x00}, 0, 0},
  {{0x94, 0x02}, 0, 0},
  {{0xe5, 0x00}, 0, 0},
  {{0x94, 0x02}, 0, 0},
  {{0xe6, 0x2c}, 0, 0},
  {{0x94, 0x03}, 0, 0},
  {{0xaa, 0x00}, 0, 0}
 };

 VAR_7->blocks_left = 0;



 if (VAR_7->type == VAR_1)
  VAR_5 = 9;
 else
  VAR_5 = FUNC_0(VAR_8);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_3(VAR_3, VAR_8[VAR_4].instruction);
  if (VAR_8[VAR_4].delay)
   FUNC_4(VAR_8[VAR_4].delay);
  if (VAR_8[VAR_4].ack_wanted)
   FUNC_2(VAR_3, &VAR_6);
 }
 FUNC_5(VAR_3, FUNC_7(VAR_7->jpegqual));
 FUNC_4(2);
 FUNC_6(VAR_3, FUNC_7(VAR_7->freq));
 if (VAR_3->usb_err < 0)
  FUNC_1(VAR_3, "Start streaming command failed\n");
 return VAR_3->usb_err;
}
