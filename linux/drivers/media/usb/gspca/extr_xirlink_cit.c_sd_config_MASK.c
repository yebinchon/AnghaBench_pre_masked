
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int model; int sof_len; int stop_on_control_change; } ;
struct cam {int nmodes; int input_flags; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;






 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;
 struct cam *VAR_9;

 VAR_8->model = VAR_7->driver_info;
 if (VAR_8->model == 129 && VAR_2)
  VAR_8->model = 133;

 VAR_9 = &VAR_6->cam;
 switch (VAR_8->model) {
 case 132:
  VAR_9->cam_mode = VAR_3;
  VAR_9->nmodes = FUNC_0(VAR_3);
  VAR_8->sof_len = 4;
  break;
 case 131:
  VAR_9->cam_mode = VAR_1;
  VAR_9->nmodes = FUNC_0(VAR_1);
  VAR_8->sof_len = 4;
  break;
 case 130:
  VAR_9->cam_mode = VAR_4 + 1;
  VAR_9->nmodes = 3;
  break;
 case 129:
  VAR_9->cam_mode = VAR_5;
  VAR_9->nmodes = FUNC_0(VAR_5);
  VAR_8->stop_on_control_change = 1;
  VAR_8->sof_len = 4;
  break;
 case 128:
  VAR_9->cam_mode = VAR_4;
  VAR_9->nmodes = FUNC_0(VAR_4);
  break;
 case 133:
  VAR_9->cam_mode = VAR_5;
  VAR_9->nmodes = 2;
  VAR_9->input_flags = VAR_0;
  VAR_8->stop_on_control_change = 1;
  VAR_8->sof_len = 4;
  break;
 }

 return 0;
}
