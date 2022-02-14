
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; int status; } ;
struct dvb_usb_device {TYPE_2__* udev; } ;
struct cxusb_medion_dev {unsigned int nexturb; int urbcomplete; int auxbuf; struct urb** streamurbs; struct dvb_usb_device* dvbdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ actual_length; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct dvb_usb_device*,int *,struct urb*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,char*,...) ;
 int FUNC_3 (int *,char*,unsigned int,int) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static bool FUNC_6(struct cxusb_medion_dev *VAR_4,
            bool *VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_4->dvbdev;
 unsigned int VAR_7;
 struct urb *VAR_8;
 int VAR_9;

 *VAR_5 = 0;

 VAR_7 = VAR_4->nexturb;
 if (!FUNC_4(VAR_7, &VAR_4->urbcomplete))
  return 0;

 FUNC_0(VAR_7, &VAR_4->urbcomplete);

 do {
  VAR_4->nexturb++;
  VAR_4->nexturb %= VAR_0;
  VAR_8 = VAR_4->streamurbs[VAR_4->nexturb];
 } while (!VAR_8);

 VAR_8 = VAR_4->streamurbs[VAR_7];
 FUNC_2(VAR_6, VAR_3, "URB %u status = %d\n", VAR_7, VAR_8->status);

 if (VAR_8->status == 0 || VAR_8->status == -VAR_1) {
  int VAR_10;
  unsigned long VAR_11;

  for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_8->number_of_packets; VAR_10++)
   VAR_11 += VAR_8->iso_frame_desc[VAR_10].actual_length;

  FUNC_2(VAR_6, VAR_3, "URB %u data len = %lu\n", VAR_7,
         VAR_11);

  if (VAR_11 > 0) {
   FUNC_2(VAR_6, VAR_3, "appending URB\n");
   *VAR_5 =
    !FUNC_1(VAR_6,
        &VAR_4->auxbuf,
        VAR_8);
  }
 }

 FUNC_2(VAR_6, VAR_3, "URB %u resubmit\n", VAR_7);

 VAR_9 = FUNC_5(VAR_8, VAR_2);
 if (VAR_9 != 0)
  FUNC_3(&VAR_6->udev->dev,
   "unable to resubmit URB %u (%d), you'll have to restart streaming\n",
   VAR_7, VAR_9);


 return FUNC_4(VAR_4->nexturb, &VAR_4->urbcomplete);
}
