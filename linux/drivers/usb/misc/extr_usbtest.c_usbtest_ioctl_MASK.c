
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbtest_param_64 {int duration_usec; int duration_sec; int vary; int sglen; int length; int iterations; int test_num; } ;
struct usbtest_param_32 {int duration_usec; int duration_sec; int vary; int sglen; int length; int iterations; int test_num; } ;
struct usbtest_dev {int lock; TYPE_3__* info; } ;
struct usb_interface {int dev; TYPE_2__* altsetting; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {scalar_t__ alt; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (struct timespec64*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (struct usbtest_dev*,scalar_t__) ;
 struct timespec64 FUNC_5 (struct timespec64,struct timespec64) ;
 struct usbtest_dev* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,struct usbtest_param_32*) ;

__attribute__((used)) static int
FUNC_8(struct usb_interface *VAR_6, unsigned int VAR_7, void *VAR_8)
{

 struct usbtest_dev *VAR_9 = FUNC_6(VAR_6);
 struct usbtest_param_64 *VAR_10 = VAR_8;
 struct usbtest_param_32 VAR_11;
 struct usbtest_param_32 *VAR_12 = VAR_8;
 struct timespec64 VAR_13;
 struct timespec64 VAR_14;
 struct timespec64 VAR_15;
 int VAR_16 = -VAR_1;



 VAR_5 = VAR_4;

 if (FUNC_2(&VAR_9->lock))
  return -VAR_2;







 if (VAR_9->info->alt >= 0) {
  if (VAR_6->altsetting->desc.bInterfaceNumber) {
   VAR_16 = -VAR_0;
   goto free_mutex;
  }
  VAR_16 = FUNC_4(VAR_9, VAR_9->info->alt);
  if (VAR_16) {
   FUNC_0(&VAR_6->dev,
     "set altsetting to %d failed, %d\n",
     VAR_9->info->alt, VAR_16);
   goto free_mutex;
  }
 }

 switch (VAR_7) {
 case 128:
  VAR_11.test_num = VAR_10->test_num;
  VAR_11.iterations = VAR_10->iterations;
  VAR_11.length = VAR_10->length;
  VAR_11.sglen = VAR_10->sglen;
  VAR_11.vary = VAR_10->vary;
  VAR_12 = &VAR_11;
  break;

 case 129:
  break;

 default:
  VAR_16 = -VAR_1;
  goto free_mutex;
 }

 FUNC_1(&VAR_13);

 VAR_16 = FUNC_7(VAR_6, VAR_12);
 if (VAR_16 < 0)
  goto free_mutex;

 FUNC_1(&VAR_14);

 VAR_15 = FUNC_5(VAR_14, VAR_13);

 VAR_11.duration_sec = VAR_15.tv_sec;
 VAR_11.duration_usec = VAR_15.tv_nsec/VAR_3;

 switch (VAR_7) {
 case 129:
  VAR_12->duration_sec = VAR_11.duration_sec;
  VAR_12->duration_usec = VAR_11.duration_usec;
  break;

 case 128:
  VAR_10->duration_sec = VAR_11.duration_sec;
  VAR_10->duration_usec = VAR_11.duration_usec;
  break;
 }

free_mutex:
 FUNC_3(&VAR_9->lock);
 return VAR_16;
}
