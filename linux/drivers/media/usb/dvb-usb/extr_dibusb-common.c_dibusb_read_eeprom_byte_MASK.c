
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int,int *,int,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;

int FUNC_3(struct dvb_usb_device *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5[0] = VAR_3;

 VAR_6 = FUNC_0(VAR_2, 0x50, &VAR_5[0], 1, &VAR_5[1], 1);
 *VAR_4 = VAR_5[1];
 FUNC_1(VAR_5);

 return VAR_6;
}
