
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int invert_led; int frame_rate; } ;
struct cam {int bulk; void* nmodes; void* cam_mode; int bulk_nurbs; int bulk_size; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_8,
   const struct usb_device_id *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_8;
 struct cam *VAR_11 = &VAR_8->cam;

 VAR_10->bridge = VAR_9->driver_info & VAR_1;
 VAR_10->invert_led = (VAR_9->driver_info & VAR_0) != 0;

 switch (VAR_10->bridge) {
 case 134:
 case 133:
  VAR_11->cam_mode = VAR_4;
  VAR_11->nmodes = FUNC_0(VAR_4);
  break;
 case 132:
 case 131:
  VAR_11->cam_mode = VAR_5;
  VAR_11->nmodes = FUNC_0(VAR_5);
  break;
 case 130:
  VAR_11->cam_mode = VAR_6;
  VAR_11->nmodes = FUNC_0(VAR_6);
  break;
 case 129:
  VAR_11->cam_mode = VAR_6;
  VAR_11->nmodes = FUNC_0(VAR_6);
  VAR_11->bulk_size = VAR_3;
  VAR_11->bulk_nurbs = VAR_2;
  VAR_11->bulk = 1;
  break;
 case 128:
  VAR_11->cam_mode = VAR_7;
  VAR_11->nmodes = FUNC_0(VAR_7);
  break;
 }

 VAR_10->frame_rate = 15;

 return 0;
}
