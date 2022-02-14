
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lme2510_state {int * usb_buffer; } ;
struct dvb_usb_device {int usb_mutex; struct lme2510_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int *,int,int *,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_2,
       u8 *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6)
{
 struct lme2510_state *VAR_7 = VAR_2->priv;
 int VAR_8 = 0;

 if (FUNC_1(VAR_4, VAR_6) > sizeof(VAR_7->usb_buffer))
  return -VAR_1;

 VAR_8 = FUNC_3(&VAR_2->usb_mutex);
 if (VAR_8 < 0)
  return -VAR_0;

 FUNC_2(VAR_7->usb_buffer, VAR_3, VAR_4);

 VAR_8 = FUNC_0(VAR_2, VAR_7->usb_buffer, VAR_4,
       VAR_7->usb_buffer, VAR_6);

 if (VAR_6)
  FUNC_2(VAR_5, VAR_7->usb_buffer, VAR_6);

 FUNC_4(&VAR_2->usb_mutex);

 return VAR_8;
}
