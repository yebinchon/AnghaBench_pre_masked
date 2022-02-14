
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int rc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int *,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_2)
{
 u8 VAR_3;
 FUNC_3(VAR_2,VAR_1,((void*)0),0,&VAR_3,1,20);

 FUNC_1("remote query key: %x %d\n",VAR_3,VAR_3);

 if (VAR_3 != 0x44) {





  FUNC_2(VAR_2->rc_dev, VAR_0, FUNC_0(0, VAR_3), 0);
 }

 return 0;
}
