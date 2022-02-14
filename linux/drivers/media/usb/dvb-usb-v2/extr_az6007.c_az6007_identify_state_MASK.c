
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ,int *,int) ;
 int FUNC_1 (int ,int,int,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_5, const char **VAR_6)
{
 int VAR_7;
 u8 *VAR_8;

 FUNC_4("Identifying az6007 state\n");

 VAR_8 = FUNC_3(6, VAR_3);
 if (!VAR_8)
  return -VAR_2;


 VAR_7 = FUNC_0(VAR_5->udev, VAR_0, 6, 0, VAR_8, 6);
 if (VAR_7 == 6)
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_1;

 FUNC_2(VAR_8);

 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_5->udev, 0x09, 1, 0, ((void*)0), 0);
  FUNC_1(VAR_5->udev, 0x00, 0, 0, ((void*)0), 0);
  FUNC_1(VAR_5->udev, 0x00, 0, 0, ((void*)0), 0);
 }

 FUNC_4("Device is on %s state\n",
   VAR_7 == VAR_4 ? "warm" : "cold");
 return VAR_7;
}
