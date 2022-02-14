
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvbsky_state {int * ibuf; int * obuf; } ;
struct dvb_usb_device {int usb_mutex; } ;


 struct dvbsky_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_0,
  u8 *VAR_1, u16 VAR_2, u8 *VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct dvbsky_state *VAR_6 = FUNC_0(VAR_0);

 FUNC_3(&VAR_0->usb_mutex);
 if (VAR_2 != 0)
  FUNC_2(VAR_6->obuf, VAR_1, VAR_2);

 VAR_5 = FUNC_1(VAR_0, VAR_6->obuf, VAR_2,
   VAR_6->ibuf, VAR_4);

 if (!VAR_5 && (VAR_4 != 0))
  FUNC_2(VAR_3, VAR_6->ibuf, VAR_4);

 FUNC_4(&VAR_0->usb_mutex);
 return VAR_5;
}
