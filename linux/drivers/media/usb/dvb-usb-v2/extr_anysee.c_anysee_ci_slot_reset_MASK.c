
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;
struct anysee_state {scalar_t__ ci_cam_ready; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int,int) ;
 struct anysee_state* FUNC_1 (struct dvb_usb_device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_2->data;
 int VAR_5;
 struct anysee_state *VAR_6 = FUNC_1(VAR_4);

 VAR_6->ci_cam_ready = VAR_1 + FUNC_2(1000);

 VAR_5 = FUNC_0(VAR_4, VAR_0, (0 << 7), 0x80);
 if (VAR_5)
  return VAR_5;

 FUNC_3(300);

 VAR_5 = FUNC_0(VAR_4, VAR_0, (1 << 7), 0x80);
 if (VAR_5)
  return VAR_5;

 return 0;
}
