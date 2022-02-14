
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct usb_device {int dev; } ;
struct urb {int transfer_buffer_length; int status; int pipe; struct usb_device* dev; int transfer_flags; struct completion* context; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char const*,int,int,int) ;
 int FUNC_1 (struct completion*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct usbtest_dev*,struct urb*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct completion*,unsigned long) ;

__attribute__((used)) static int FUNC_10(
 struct usbtest_dev *VAR_5,
 struct urb *VAR_6,
 int VAR_7,
 int VAR_8,
 int VAR_9,
 const char *VAR_10
)
{
 struct usb_device *VAR_11 = VAR_6->dev;
 int VAR_12 = VAR_6->transfer_buffer_length;
 struct completion VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;

 VAR_6->context = &VAR_13;
 while (VAR_14 == 0 && VAR_7-- > 0) {
  FUNC_1(&VAR_13);
  if (FUNC_7(VAR_6->pipe)) {
   FUNC_4(VAR_6);
   VAR_6->transfer_flags |= VAR_4;
  }
  VAR_14 = FUNC_8(VAR_6, VAR_2);
  if (VAR_14 != 0)
   break;

  VAR_15 = FUNC_2(VAR_3);
  if (!FUNC_9(&VAR_13, VAR_15)) {
   FUNC_5(VAR_6);
   VAR_14 = (VAR_6->status == -VAR_0 ?
      -VAR_1 : VAR_6->status);
  } else {
   VAR_14 = VAR_6->status;
  }

  VAR_6->dev = VAR_11;
  if (VAR_14 == 0 && FUNC_6(VAR_6->pipe))
   VAR_14 = FUNC_3(VAR_5, VAR_6);

  if (VAR_8) {
   int VAR_16 = VAR_6->transfer_buffer_length;

   VAR_16 += VAR_8;
   VAR_16 %= VAR_12;
   if (VAR_16 == 0)
    VAR_16 = (VAR_8 < VAR_12) ? VAR_8 : VAR_12;
   VAR_6->transfer_buffer_length = VAR_16;
  }


 }
 VAR_6->transfer_buffer_length = VAR_12;

 if (VAR_9 != VAR_14)
  FUNC_0(&VAR_11->dev,
   "%s failed, iterations left %d, status %d (not %d)\n",
    VAR_10, VAR_7, VAR_14, VAR_9);
 return VAR_14;
}
