
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct sd {int * sensor; void* sensor_priv; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (void*) ;
 struct gspca_dev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_1)
{
 struct gspca_dev *VAR_2 = FUNC_3(VAR_1);
 struct sd *VAR_3 = (struct sd *) VAR_2;
 void *VAR_4 = VAR_3->sensor_priv;
 FUNC_0(VAR_2, VAR_0, "Disconnecting the stv06xx device\n");

 VAR_3->sensor = ((void*)0);
 FUNC_1(VAR_1);
 FUNC_2(VAR_4);
}
