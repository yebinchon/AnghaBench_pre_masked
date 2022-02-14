
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct usb_sg_request {int status; } ;
struct usb_device {scalar_t__ speed; } ;
struct sg_timeout {int timer; struct usb_sg_request* req; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct usbtest_dev*,char*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 struct usb_device* FUNC_5 (struct usbtest_dev*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct usb_sg_request*,struct usb_device*,int,int,struct scatterlist*,int,int ,int ) ;
 int FUNC_8 (struct usb_sg_request*) ;

__attribute__((used)) static int FUNC_9(
 struct usbtest_dev *VAR_7,
 unsigned VAR_8,
 int VAR_9,
 struct usb_sg_request *VAR_10,
 struct scatterlist *VAR_11,
 int VAR_12
)
{
 struct usb_device *VAR_13 = FUNC_5(VAR_7);
 int VAR_14 = 0;
 struct sg_timeout VAR_15 = {
  .req = VAR_10,
 };

 FUNC_6(&VAR_15.timer, VAR_6, 0);

 while (VAR_14 == 0 && VAR_8-- > 0) {
  VAR_14 = FUNC_7(VAR_10, VAR_13, VAR_9,
    (VAR_13->speed == VAR_4)
     ? (VAR_2 << 3)
     : VAR_2,
    VAR_11, VAR_12, 0, VAR_1);

  if (VAR_14)
   break;
  FUNC_3(&VAR_15.timer, VAR_5 +
    FUNC_4(VAR_3));
  FUNC_8(VAR_10);
  if (!FUNC_1(&VAR_15.timer))
   VAR_14 = -VAR_0;
  else
   VAR_14 = VAR_10->status;
  FUNC_2(&VAR_15.timer);




 }




 if (VAR_14)
  FUNC_0(VAR_7, "perform_sglist failed, "
    "iterations left %d, status %d\n",
    VAR_8, VAR_14);
 return VAR_14;
}
