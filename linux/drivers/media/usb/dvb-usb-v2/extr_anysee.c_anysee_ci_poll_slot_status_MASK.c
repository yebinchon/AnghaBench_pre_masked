
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;
struct anysee_state {int ci_cam_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int ,scalar_t__*,int) ;
 struct anysee_state* FUNC_1 (struct dvb_usb_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_ca_en50221 *VAR_4, int VAR_5,
 int VAR_6)
{
 struct dvb_usb_device *VAR_7 = VAR_4->data;
 struct anysee_state *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 u8 VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_7, VAR_2, &VAR_10, 0x40);
 if (VAR_9)
  return VAR_9;

 if (VAR_10 == 0) {
  VAR_9 = VAR_0;
  if (FUNC_2(VAR_3, VAR_8->ci_cam_ready))
   VAR_9 |= VAR_1;
 }

 return VAR_9;
}
