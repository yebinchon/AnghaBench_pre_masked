
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct dvb_usb_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 int FUNC_1 (struct dvb_usb_device*,scalar_t__*,int,scalar_t__*,int,int ) ;
 int FUNC_2 (struct dvb_usb_device*,scalar_t__*,int *,int*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;

int FUNC_5(struct dvb_usb_device *VAR_3, u32 *VAR_4, int *VAR_5)
{
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(5, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6[0] = VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_6, 1, VAR_6, 5, 0);
 if (VAR_7 < 0)
  goto ret;

 FUNC_2(VAR_3, VAR_6, VAR_4, VAR_5);

 if (VAR_6[0] != 0)
  FUNC_0("key: %*ph\n", 5, VAR_6);

ret:
 FUNC_3(VAR_6);

 return VAR_7;
}
