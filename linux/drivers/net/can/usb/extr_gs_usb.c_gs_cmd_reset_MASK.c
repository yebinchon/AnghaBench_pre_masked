
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct gs_device_mode {int mode; } ;
struct gs_can {int channel; struct usb_interface* iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct gs_device_mode*) ;
 struct gs_device_mode* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,struct gs_device_mode*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gs_can *VAR_7)
{
 struct gs_device_mode *VAR_8;
 struct usb_interface *VAR_9 = VAR_7->iface;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->mode = VAR_2;

 VAR_10 = FUNC_3(FUNC_0(VAR_9),
        FUNC_4(FUNC_0(VAR_9), 0),
        VAR_3,
        VAR_4 | VAR_6 | VAR_5,
        VAR_7->channel,
        0,
        VAR_8,
        sizeof(*VAR_8),
        1000);

 FUNC_1(VAR_8);

 return VAR_10;
}
