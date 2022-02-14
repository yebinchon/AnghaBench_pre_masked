
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int usb_err; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_0)
{
 u8 VAR_1;

 FUNC_0(VAR_0, 0x00, 0x2520, 1);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0, 0xc5, 0x0003, 0x0000);
 FUNC_4(VAR_0);

 FUNC_3(VAR_0);
 VAR_1 = VAR_0->cam.cam_mode[VAR_0->curr_mode].priv;
 FUNC_2(VAR_0, 0x25, 0x0000, 0x0004, VAR_1);
 FUNC_0(VAR_0, 0x25, 0x0004, 1);
 FUNC_2(VAR_0, 0x27, 0x0000, 0x0000, 0x06);
 FUNC_0(VAR_0, 0x27, 0x0000, 1);




 return VAR_0->usb_err;
}
