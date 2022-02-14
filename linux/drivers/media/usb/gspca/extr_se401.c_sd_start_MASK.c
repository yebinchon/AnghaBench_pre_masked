
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sd {int resetlevel; int expo_change_state; scalar_t__ resetlevel_adjust_dir; scalar_t__ resetlevel_frame_count; scalar_t__ restart_stream; scalar_t__ pixels_read; scalar_t__ packet_read; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int usb_err; TYPE_3__ pixfmt; int dev; TYPE_2__ cam; } ;
struct TYPE_4__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gspca_dev*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_10)
{
 struct sd *VAR_11 = (struct sd *)VAR_10;
 int VAR_12 = VAR_10->cam.cam_mode[VAR_10->curr_mode].priv;
 int VAR_13 = 0;

 FUNC_1(VAR_10, VAR_5, 1, 1);
 if (VAR_10->usb_err) {


  FUNC_2(VAR_10->dev);
  VAR_10->usb_err = 0;
  FUNC_1(VAR_10, VAR_5, 1, 0);
 }
 FUNC_1(VAR_10, VAR_6, 1, 0);

 FUNC_0(VAR_10, VAR_2, 0x05);


 FUNC_1(VAR_10, VAR_8,
   VAR_10->pixfmt.width * VAR_12, 0);
 FUNC_1(VAR_10, VAR_7,
   VAR_10->pixfmt.height * VAR_12, 0);






 switch (VAR_12) {
 case 1:
  VAR_13 = 0x03; break;
 case 2:
  VAR_13 = VAR_4 << 4; break;
 case 4:
  VAR_13 = (VAR_4 << 4) | 0x02; break;
 }
 FUNC_0(VAR_10, VAR_3, VAR_13);

 FUNC_0(VAR_10, VAR_1, VAR_11->resetlevel);

 VAR_11->packet_read = 0;
 VAR_11->pixels_read = 0;
 VAR_11->restart_stream = 0;
 VAR_11->resetlevel_frame_count = 0;
 VAR_11->resetlevel_adjust_dir = 0;
 VAR_11->expo_change_state = VAR_0;

 FUNC_1(VAR_10, VAR_9, 0, 0);

 return VAR_10->usb_err;
}
