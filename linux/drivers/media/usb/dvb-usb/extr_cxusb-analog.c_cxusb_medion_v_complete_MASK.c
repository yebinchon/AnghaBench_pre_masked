
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {struct dvb_usb_device* context; } ;
struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int urbwork; int urbcomplete; struct urb** streamurbs; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,unsigned int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct dvb_usb_device *VAR_3 = VAR_2->context;
 struct cxusb_medion_dev *VAR_4 = VAR_3->priv;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4->streamurbs[VAR_5] == VAR_2)
   break;

 if (VAR_5 >= VAR_0) {
  FUNC_1(&VAR_3->udev->dev,
   "complete on unknown URB\n");
  return;
 }

 FUNC_0(VAR_3, VAR_1, "URB %u complete\n", VAR_5);

 FUNC_3(VAR_5, &VAR_4->urbcomplete);
 FUNC_2(&VAR_4->urbwork);
}
