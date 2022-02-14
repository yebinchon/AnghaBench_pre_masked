
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct anysee_state {int hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int *) ;
 struct anysee_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1)
{
 struct anysee_state *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 u8 VAR_4[3];





 VAR_3 = FUNC_0(VAR_1, VAR_4);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_0(VAR_1, VAR_4);
 if (VAR_3)
  goto error;




 FUNC_2(&VAR_1->udev->dev, "%s: firmware version %d.%d hardware id %d\n",
   VAR_0, VAR_4[1], VAR_4[2], VAR_4[0]);

 VAR_2->hw = VAR_4[0];
error:
 return VAR_3;
}
