
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int driver_info; } ;
struct sd {int work; int reg08; int sensor; int bridge; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4,
   const struct usb_device_id *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;

 if (VAR_5->idProduct == 0x301b)
  VAR_6->bridge = VAR_0;
 else
  VAR_6->bridge = VAR_1;


 VAR_6->sensor = VAR_5->driver_info;

 VAR_6->reg08 = VAR_2;

 FUNC_0(&VAR_6->work, VAR_3);

 return 0;
}
