
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int* gpio; size_t sensor; } ;
struct gspca_dev {scalar_t__ usb_err; int* usb_buf; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sd*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct sd*,int) ;
 int FUNC_3 (struct gspca_dev*,int ,char*,int,...) ;
 int FUNC_4 (struct gspca_dev*,int ,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;

 VAR_6->gpio[0] = VAR_6->gpio[1] = 0xff;






 FUNC_4(VAR_5, VAR_3, 8);
 if (VAR_5->usb_err < 0)
  return VAR_5->usb_err;
 FUNC_3(VAR_5, VAR_0, "info: %*ph\n", 8, VAR_5->usb_buf);

 FUNC_0(VAR_6);

 if (VAR_6->sensor == VAR_2) {


  if (VAR_5->usb_buf[5] == 0xf6)
   VAR_6->sensor = VAR_1;
  else
   FUNC_1(VAR_5);
 }
 if (VAR_5->usb_err >= 0) {
  FUNC_3(VAR_5, VAR_0, "Sensor %s\n",
     VAR_4[VAR_6->sensor].name);
  FUNC_2(VAR_6, 1);
 }
 return VAR_5->usb_err;
}
