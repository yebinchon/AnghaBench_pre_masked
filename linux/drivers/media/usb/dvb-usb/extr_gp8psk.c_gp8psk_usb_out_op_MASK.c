
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gp8psk_state {int data; } ;
struct dvb_usb_device {int usb_mutex; int udev; struct gp8psk_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,int,int (*) (char*,int ,int ,int )) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,int ,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_3, u8 VAR_4, u16 VAR_5,
        u16 VAR_6, u8 *VAR_7, int VAR_8)
{
 struct gp8psk_state *VAR_9 = VAR_3->priv;
 int VAR_10;

 FUNC_0("out: req. %x, val: %x, ind: %x, buffer: ",VAR_4,VAR_5,VAR_6);
 FUNC_1(VAR_7,VAR_8,FUNC_0);

 if (VAR_8 > sizeof(VAR_9->data))
  return -VAR_0;

 if ((VAR_10 = FUNC_3(&VAR_3->usb_mutex)))
  return VAR_10;

 FUNC_2(VAR_9->data, VAR_7, VAR_8);
 if (FUNC_5(VAR_3->udev,
   FUNC_6(VAR_3->udev,0),
   VAR_4,
   VAR_2 | VAR_1,
   VAR_5, VAR_6, VAR_9->data, VAR_8,
   2000) != VAR_8) {
  FUNC_7("usb out operation failed.");
  VAR_10 = -VAR_0;
 } else
  VAR_10 = 0;
 FUNC_4(&VAR_3->usb_mutex);

 return VAR_10;
}
