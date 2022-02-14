
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_usb_adapter*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

int FUNC_4(struct dvb_usb_adapter *VAR_6, int VAR_7)
{
 int VAR_8;
 u8 *VAR_9;

 VAR_9 = FUNC_3(3, VAR_5);
 if (!VAR_9)
  return -VAR_4;

 if ((VAR_8 = FUNC_0(VAR_6,VAR_7)) < 0)
  goto ret;

 if (VAR_7) {
  VAR_9[0] = VAR_3;
  VAR_9[1] = 0x00;
  VAR_8 = FUNC_1(VAR_6->dev, VAR_9, 2);
  if (VAR_8 < 0)
   goto ret;
 }

 VAR_9[0] = VAR_2;
 VAR_9[1] = VAR_7 ? VAR_1 : VAR_0;
 VAR_8 = FUNC_1(VAR_6->dev, VAR_9, 3);

ret:
 FUNC_2(VAR_9);
 return VAR_8;
}
