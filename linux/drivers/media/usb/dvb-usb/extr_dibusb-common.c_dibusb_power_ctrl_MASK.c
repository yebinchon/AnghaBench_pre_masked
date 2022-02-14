
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_usb_device*,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct dvb_usb_device *VAR_6, int VAR_7)
{
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(3, VAR_5);
 if (!VAR_8)
  return -VAR_4;

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_0;
 VAR_8[2] = VAR_7 ? VAR_2 : VAR_1;

 VAR_9 = FUNC_0(VAR_6, VAR_8, 3);

 FUNC_1(VAR_8);

 FUNC_3(10);

 return VAR_9;
}
