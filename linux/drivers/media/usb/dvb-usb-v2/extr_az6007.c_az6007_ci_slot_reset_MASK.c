
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct az6007_device_state {int ca_mutex; } ;


 scalar_t__ FUNC_0 (struct dvb_ca_en50221*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int,int,int,int *,int) ;
 struct az6007_device_state* FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_ca_en50221 *VAR_0, int VAR_1)
{
 struct dvb_usb_device *VAR_2 = (struct dvb_usb_device *)VAR_0->data;
 struct az6007_device_state *VAR_3 = FUNC_2(VAR_2);

 int VAR_4, VAR_5;
 u8 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 int VAR_9;

 FUNC_4(&VAR_3->ca_mutex);

 VAR_6 = 0xC6;
 VAR_7 = 1;
 VAR_8 = 0;
 VAR_9 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_7, VAR_8, ((void*)0), VAR_9);
 if (VAR_4 != 0) {
  FUNC_7("usb out operation failed. (%d)\n", VAR_4);
  goto failed;
 }

 FUNC_3(500);
 VAR_6 = 0xC6;
 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_7, VAR_8, ((void*)0), VAR_9);
 if (VAR_4 != 0) {
  FUNC_7("usb out operation failed. (%d)\n", VAR_4);
  goto failed;
 }

 for (VAR_5 = 0; VAR_5 < 15; VAR_5++) {
  FUNC_3(100);

  if (FUNC_0(VAR_0, VAR_1)) {
   FUNC_6("CAM Ready\n");
   break;
  }
 }
 FUNC_3(5000);

failed:
 FUNC_5(&VAR_3->ca_mutex);
 return VAR_4;
}
