
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct TYPE_6__ {int buf; } ;
struct cxusb_medion_dev {int stop_streaming; TYPE_3__ auxbuf; TYPE_2__* videodev; int urbwork; scalar_t__* streamurbs; int cx25840; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int *,int ,int *,int ) ;
 int FUNC_2 (struct cxusb_medion_dev*,int) ;
 int FUNC_3 (struct cxusb_medion_dev*) ;
 int FUNC_4 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 struct dvb_usb_device* FUNC_11 (struct vb2_queue*) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_13(struct vb2_queue *VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_11(VAR_5);
 struct cxusb_medion_dev *VAR_7 = VAR_6->priv;
 int VAR_8;
 unsigned int VAR_9;

 FUNC_4(VAR_6, VAR_2, "should stop streaming\n");

 if (FUNC_0(VAR_7->stop_streaming))
  return;

 VAR_7->stop_streaming = 1;

 FUNC_1(VAR_6, VAR_0, ((void*)0), 0, ((void*)0), 0);

 VAR_8 = FUNC_10(VAR_7->cx25840, VAR_4, VAR_3, 0);
 if (VAR_8 != 0)
  FUNC_5(&VAR_6->udev->dev, "unable to stop stream (%d)\n",
   VAR_8);


 FUNC_8(VAR_7->videodev->lock);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  if (VAR_7->streamurbs[VAR_9])
   FUNC_9(VAR_7->streamurbs[VAR_9]);

 FUNC_6(&VAR_7->urbwork);

 FUNC_7(VAR_7->videodev->lock);


 FUNC_12(VAR_7->auxbuf.buf);

 FUNC_3(VAR_7);

 FUNC_2(VAR_7, 0);

 VAR_7->stop_streaming = 0;
}
