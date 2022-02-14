
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int ,int ,int *,int) ;

int FUNC_3(struct dvb_usb_device *VAR_0, u8 VAR_1, u16 VAR_2,
       u16 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_0->usb_mutex);
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_0->usb_mutex);

 return VAR_6;
}
