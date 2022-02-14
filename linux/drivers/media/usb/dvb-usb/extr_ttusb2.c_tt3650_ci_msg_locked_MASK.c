
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb2_state {int ca_mutex; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dvb_ca_en50221 *VAR_0, u8 VAR_1, u8 *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_0->data;
 struct ttusb2_state *VAR_6 = VAR_5->priv;
 int VAR_7;

 FUNC_0(&VAR_6->ca_mutex);
 VAR_7 = FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_6->ca_mutex);

 return VAR_7;
}
