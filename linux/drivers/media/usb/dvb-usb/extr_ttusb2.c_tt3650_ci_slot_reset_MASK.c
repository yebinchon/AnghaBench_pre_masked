
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb2_state {int ca_mutex; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dvb_usb_device*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_3, int VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_3->data;
 struct ttusb2_state *VAR_6 = VAR_5->priv;
 u8 VAR_7[1];
 int VAR_8;

 FUNC_0("%d", VAR_4);

 if (VAR_4)
  return -VAR_0;

 VAR_7[0] = 0;

 FUNC_2(&VAR_6->ca_mutex);

 VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_7, 1, 1);
 if (VAR_8)
  goto failed;

 FUNC_1(500);

 VAR_7[0] = 1;

 VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_7, 1, 1);
 if (VAR_8)
  goto failed;

 FUNC_1(500);

 VAR_7[0] = 0;

 VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_7, 1, 1);

 FUNC_1(1100);

 failed:
 FUNC_3(&VAR_6->ca_mutex);

 return VAR_8;
}
