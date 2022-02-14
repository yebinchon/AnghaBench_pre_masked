
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbtest_param_32 {scalar_t__ iterations; scalar_t__ sglen; int test_num; int length; int vary; } ;
struct usbtest_dev {int out_pipe; int in_pipe; TYPE_3__* int_in; int in_int_pipe; TYPE_2__* int_out; int out_int_pipe; int * iso_in; int in_iso_pipe; int * iso_out; int out_iso_pipe; TYPE_1__* info; } ;
struct usb_sg_request {int dummy; } ;
struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {int bInterval; } ;
struct TYPE_5__ {int bInterval; } ;
struct TYPE_4__ {int ctrl_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbtest_dev*,char*,unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct scatterlist* FUNC_1 (scalar_t__,int,int ,struct usbtest_dev*,int ) ;
 int FUNC_2 (struct usbtest_dev*) ;
 int FUNC_3 (struct usbtest_dev*,unsigned int,int,int ,int) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (struct scatterlist*,scalar_t__) ;
 int FUNC_7 (struct usbtest_dev*) ;
 int VAR_5 ;
 int FUNC_8 (struct usbtest_dev*,scalar_t__,int ,struct usb_sg_request*,struct scatterlist*,scalar_t__) ;
 int VAR_6 ;
 struct urb* FUNC_9 (struct usb_device*,int ,int,int ) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (struct usbtest_dev*,struct urb*,scalar_t__,int ,int ,char*) ;
 int FUNC_12 (struct usbtest_dev*,struct usbtest_param_32*) ;
 int FUNC_13 (struct usbtest_dev*,struct usbtest_param_32*,int ,int *,int) ;
 int FUNC_14 (struct usbtest_dev*,int ,int,unsigned int,int ,char*) ;
 struct usb_device* FUNC_15 (struct usbtest_dev*) ;
 int FUNC_16 (struct usbtest_dev*) ;
 int FUNC_17 (struct usbtest_dev*,int ,int,int) ;
 int FUNC_18 (struct usbtest_dev*,int ,int) ;
 struct usbtest_dev* FUNC_19 (struct usb_interface*) ;

__attribute__((used)) static int
FUNC_20(struct usb_interface *VAR_7, struct usbtest_param_32 *VAR_8)
{
 struct usbtest_dev *VAR_9 = FUNC_19(VAR_7);
 struct usb_device *VAR_10 = FUNC_15(VAR_9);
 struct urb *VAR_11;
 struct scatterlist *VAR_12;
 struct usb_sg_request VAR_13;
 unsigned VAR_14;
 int VAR_15 = -VAR_2;

 if (VAR_8->iterations <= 0)
  return -VAR_0;
 if (VAR_8->sglen > VAR_3)
  return -VAR_0;
 switch (VAR_8->test_num) {

 case 0:
  FUNC_5(&VAR_7->dev, "TEST 0:  NOP\n");
  VAR_15 = 0;
  break;


 case 1:
  if (VAR_9->out_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 1:  write %d bytes %u times\n",
    VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->out_pipe, VAR_8->length, 0);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, 0, 0, "test1");
  FUNC_10(VAR_11);
  break;
 case 2:
  if (VAR_9->in_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 2:  read %d bytes %u times\n",
    VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->in_pipe, VAR_8->length, 0);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, 0, 0, "test2");
  FUNC_10(VAR_11);
  break;
 case 3:
  if (VAR_9->out_pipe == 0 || VAR_8->vary == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 3:  write/%d 0..%d bytes %u times\n",
    VAR_8->vary, VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->out_pipe, VAR_8->length, 0);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, VAR_8->vary,
     0, "test3");
  FUNC_10(VAR_11);
  break;
 case 4:
  if (VAR_9->in_pipe == 0 || VAR_8->vary == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 4:  read/%d 0..%d bytes %u times\n",
    VAR_8->vary, VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->in_pipe, VAR_8->length, 0);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, VAR_8->vary,
     0, "test4");
  FUNC_10(VAR_11);
  break;


 case 5:
  if (VAR_9->out_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 5:  write %d sglists %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_12 = FUNC_1(VAR_8->sglen, VAR_8->length,
    0, VAR_9, VAR_9->out_pipe);
  if (!VAR_12) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_8(VAR_9, VAR_8->iterations, VAR_9->out_pipe,
    &VAR_13, VAR_12, VAR_8->sglen);
  FUNC_6(VAR_12, VAR_8->sglen);
  break;

 case 6:
  if (VAR_9->in_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 6:  read %d sglists %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_12 = FUNC_1(VAR_8->sglen, VAR_8->length,
    0, VAR_9, VAR_9->in_pipe);
  if (!VAR_12) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_8(VAR_9, VAR_8->iterations, VAR_9->in_pipe,
    &VAR_13, VAR_12, VAR_8->sglen);
  FUNC_6(VAR_12, VAR_8->sglen);
  break;
 case 7:
  if (VAR_9->out_pipe == 0 || VAR_8->sglen == 0 || VAR_8->vary == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 7:  write/%d %d sglists %d entries 0..%d bytes\n",
    VAR_8->vary, VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_12 = FUNC_1(VAR_8->sglen, VAR_8->length,
    VAR_8->vary, VAR_9, VAR_9->out_pipe);
  if (!VAR_12) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_8(VAR_9, VAR_8->iterations, VAR_9->out_pipe,
    &VAR_13, VAR_12, VAR_8->sglen);
  FUNC_6(VAR_12, VAR_8->sglen);
  break;
 case 8:
  if (VAR_9->in_pipe == 0 || VAR_8->sglen == 0 || VAR_8->vary == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 8:  read/%d %d sglists %d entries 0..%d bytes\n",
    VAR_8->vary, VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_12 = FUNC_1(VAR_8->sglen, VAR_8->length,
    VAR_8->vary, VAR_9, VAR_9->in_pipe);
  if (!VAR_12) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_8(VAR_9, VAR_8->iterations, VAR_9->in_pipe,
    &VAR_13, VAR_12, VAR_8->sglen);
  FUNC_6(VAR_12, VAR_8->sglen);
  break;


 case 9:
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev,
   "TEST 9:  ch9 (subset) control tests, %d times\n",
    VAR_8->iterations);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14--; )
   VAR_15 = FUNC_2(VAR_9);
  if (VAR_15)
   FUNC_4(&VAR_7->dev, "ch9 subset failed, "
     "iterations left %d\n", VAR_14);
  break;


 case 10:
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev,
    "TEST 10:  queue %d control calls, %d times\n",
    VAR_8->sglen,
    VAR_8->iterations);
  VAR_15 = FUNC_12(VAR_9, VAR_8);
  break;


 case 11:
  if (VAR_9->in_pipe == 0 || !VAR_8->length)
   break;
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev, "TEST 11:  unlink %d reads of %d\n",
    VAR_8->iterations, VAR_8->length);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14--; )
   VAR_15 = FUNC_18(VAR_9, VAR_9->in_pipe,
      VAR_8->length);
  if (VAR_15)
   FUNC_4(&VAR_7->dev, "unlink reads failed %d, "
    "iterations left %d\n", VAR_15, VAR_14);
  break;
 case 12:
  if (VAR_9->out_pipe == 0 || !VAR_8->length)
   break;
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev, "TEST 12:  unlink %d writes of %d\n",
    VAR_8->iterations, VAR_8->length);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14--; )
   VAR_15 = FUNC_18(VAR_9, VAR_9->out_pipe,
      VAR_8->length);
  if (VAR_15)
   FUNC_4(&VAR_7->dev, "unlink writes failed %d, "
    "iterations left %d\n", VAR_15, VAR_14);
  break;


 case 13:
  if (VAR_9->out_pipe == 0 && VAR_9->in_pipe == 0)
   break;
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev, "TEST 13:  set/clear %d halts\n",
    VAR_8->iterations);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14--; )
   VAR_15 = FUNC_7(VAR_9);

  if (VAR_15)
   FUNC_0(VAR_9, "halts failed, iterations left %d\n", VAR_14);
  break;


 case 14:
  if (!VAR_9->info->ctrl_out)
   break;
  FUNC_5(&VAR_7->dev, "TEST 14:  %d ep0out, %d..%d vary %d\n",
    VAR_8->iterations,
    VAR_6 ? 1 : 0, VAR_8->length,
    VAR_8->vary);
  VAR_15 = FUNC_3(VAR_9, VAR_8->iterations,
    VAR_8->length, VAR_8->vary, 0);
  break;


 case 15:
  if (VAR_9->out_iso_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 15:  write %d iso, %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);

  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->out_iso_pipe, VAR_9->iso_out, 0);
  break;


 case 16:
  if (VAR_9->in_iso_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 16:  read %d iso, %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);

  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->in_iso_pipe, VAR_9->iso_in, 0);
  break;




 case 17:
  if (VAR_9->out_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 17:  write odd addr %d bytes %u times core map\n",
   VAR_8->length, VAR_8->iterations);

  VAR_15 = FUNC_14(
    VAR_9, VAR_9->out_pipe,
    VAR_8->length, VAR_8->iterations,
    0, "test17");
  break;

 case 18:
  if (VAR_9->in_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 18:  read odd addr %d bytes %u times core map\n",
   VAR_8->length, VAR_8->iterations);

  VAR_15 = FUNC_14(
    VAR_9, VAR_9->in_pipe,
    VAR_8->length, VAR_8->iterations,
    0, "test18");
  break;


 case 19:
  if (VAR_9->out_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 19:  write odd addr %d bytes %u times premapped\n",
   VAR_8->length, VAR_8->iterations);

  VAR_15 = FUNC_14(
    VAR_9, VAR_9->out_pipe,
    VAR_8->length, VAR_8->iterations,
    VAR_4, "test19");
  break;

 case 20:
  if (VAR_9->in_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 20:  read odd addr %d bytes %u times premapped\n",
   VAR_8->length, VAR_8->iterations);

  VAR_15 = FUNC_14(
    VAR_9, VAR_9->in_pipe,
    VAR_8->length, VAR_8->iterations,
    VAR_4, "test20");
  break;


 case 21:
  if (!VAR_9->info->ctrl_out)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 21:  %d ep0out odd addr, %d..%d vary %d\n",
    VAR_8->iterations,
    VAR_6 ? 1 : 0, VAR_8->length,
    VAR_8->vary);
  VAR_15 = FUNC_3(VAR_9, VAR_8->iterations,
    VAR_8->length, VAR_8->vary, 1);
  break;


 case 22:
  if (VAR_9->out_iso_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 22:  write %d iso odd, %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->out_iso_pipe, VAR_9->iso_out, 1);
  break;

 case 23:
  if (VAR_9->in_iso_pipe == 0 || VAR_8->sglen == 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 23:  read %d iso odd, %d entries of %d bytes\n",
    VAR_8->iterations,
    VAR_8->sglen, VAR_8->length);
  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->in_iso_pipe, VAR_9->iso_in, 1);
  break;


 case 24:
  if (VAR_9->out_pipe == 0 || !VAR_8->length || VAR_8->sglen < 4)
   break;
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev, "TEST 24:  unlink from %d queues of "
    "%d %d-byte writes\n",
    VAR_8->iterations, VAR_8->sglen, VAR_8->length);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14 > 0; --VAR_14) {
   VAR_15 = FUNC_17(VAR_9, VAR_9->out_pipe,
      VAR_8->sglen, VAR_8->length);
   if (VAR_15) {
    FUNC_4(&VAR_7->dev,
     "unlink queued writes failed %d, "
     "iterations left %d\n", VAR_15, VAR_14);
    break;
   }
  }
  break;


 case 25:
  if (VAR_9->out_int_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 25: write %d bytes %u times\n",
    VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->out_int_pipe, VAR_8->length,
    VAR_9->int_out->bInterval);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, 0, 0, "test25");
  FUNC_10(VAR_11);
  break;
 case 26:
  if (VAR_9->in_int_pipe == 0)
   break;
  FUNC_5(&VAR_7->dev,
    "TEST 26: read %d bytes %u times\n",
    VAR_8->length, VAR_8->iterations);
  VAR_11 = FUNC_9(VAR_10, VAR_9->in_int_pipe, VAR_8->length,
    VAR_9->int_in->bInterval);
  if (!VAR_11) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_8->iterations, 0, 0, "test26");
  FUNC_10(VAR_11);
  break;
 case 27:

  if (VAR_9->out_pipe == 0 || VAR_8->sglen == 0 || VAR_5 != 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 27: bulk write %dMbytes\n", (VAR_8->iterations *
   VAR_8->sglen * VAR_8->length) / (1024 * 1024));
  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->out_pipe, ((void*)0), 0);
  break;
 case 28:
  if (VAR_9->in_pipe == 0 || VAR_8->sglen == 0 || VAR_5 != 0)
   break;
  FUNC_5(&VAR_7->dev,
   "TEST 28: bulk read %dMbytes\n", (VAR_8->iterations *
   VAR_8->sglen * VAR_8->length) / (1024 * 1024));
  VAR_15 = FUNC_13(VAR_9, VAR_8,
    VAR_9->in_pipe, ((void*)0), 0);
  break;

 case 29:
  if (VAR_9->out_pipe == 0)
   break;
  VAR_15 = 0;
  FUNC_5(&VAR_7->dev, "TEST 29: Clear toggle between bulk writes %d times\n",
    VAR_8->iterations);
  for (VAR_14 = VAR_8->iterations; VAR_15 == 0 && VAR_14 > 0; --VAR_14)
   VAR_15 = FUNC_16(VAR_9);

  if (VAR_15)
   FUNC_0(VAR_9, "toggle sync failed, iterations left %d\n",
         VAR_14);
  break;
 }
 return VAR_15;
}
