
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int,int (*) (char*,int,int)) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;

 FUNC_0(">>> ");
 FUNC_1(VAR_4, VAR_5, FUNC_0);

 VAR_6 = FUNC_2(VAR_3->udev, FUNC_3(VAR_3->udev,0),
  VAR_4[0], VAR_2 | VAR_1, 0, 0, VAR_4, VAR_5,
  VAR_0);

 if (VAR_6 != VAR_5)
  FUNC_0("ep 0 write error (status = %d, len: %d)\n",VAR_6,VAR_5);

 return VAR_6 < 0 ? VAR_6 : 0;
}
