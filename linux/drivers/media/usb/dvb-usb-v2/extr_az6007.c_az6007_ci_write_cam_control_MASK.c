
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct az6007_device_state {int ca_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int,int,int,int *,int) ;
 struct az6007_device_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_1,
           int VAR_2,
           u8 VAR_3,
           u8 VAR_4)
{
 struct dvb_usb_device *VAR_5 = (struct dvb_usb_device *)VAR_1->data;
 struct az6007_device_state *VAR_6 = FUNC_1(VAR_5);

 int VAR_7;
 u8 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 int VAR_11;

 if (VAR_2 != 0)
  return -VAR_0;

 FUNC_2(&VAR_6->ca_mutex);
 VAR_8 = 0xC4;
 VAR_9 = VAR_3;
 VAR_10 = VAR_4;
 VAR_11 = 0;

 VAR_7 = FUNC_0(VAR_5, VAR_8, VAR_9, VAR_10, ((void*)0), VAR_11);
 if (VAR_7 != 0) {
  FUNC_4("usb out operation failed. (%d)\n", VAR_7);
  goto failed;
 }

failed:
 FUNC_3(&VAR_6->ca_mutex);
 return VAR_7;
}
