
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtest_param_32 {int sglen; int iterations; int length; } ;
struct usbtest_dev {TYPE_1__* intf; } ;
struct usb_endpoint_descriptor {int bInterval; } ;
struct usb_device {scalar_t__ speed; } ;
struct urb {struct transfer_context* context; scalar_t__ number_of_packets; } ;
struct transfer_context {int count; int is_iso; int submit_error; int errors; int packet_count; int done; int lock; int pending; struct usbtest_dev* dev; } ;
typedef int context ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbtest_dev*,char*,unsigned int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct urb* FUNC_1 (struct usb_device*,int,int ,int ) ;
 int FUNC_2 (int *,char*,unsigned long,...) ;
 int FUNC_3 (int *) ;
 struct urb* FUNC_4 (struct usb_device*,int,struct usb_endpoint_descriptor*,int ,unsigned int) ;
 int FUNC_5 (struct transfer_context*,int ,int) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct usb_device*,int) ;
 struct usb_device* FUNC_11 (struct usbtest_dev*) ;
 int FUNC_12 (struct usb_endpoint_descriptor*) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (struct urb*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(struct usbtest_dev *VAR_9, struct usbtest_param_32 *VAR_10,
  int VAR_11, struct usb_endpoint_descriptor *VAR_12, unsigned VAR_13)
{
 struct transfer_context VAR_14;
 struct usb_device *VAR_15;
 unsigned VAR_16;
 unsigned long VAR_17 = 0;
 int VAR_18 = 0;
 struct urb *VAR_19[VAR_5];

 if (!VAR_10->sglen || VAR_10->iterations > VAR_6 / VAR_10->sglen)
  return -VAR_1;

 if (VAR_10->sglen > VAR_5)
  return -VAR_1;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.count = VAR_10->iterations * VAR_10->sglen;
 VAR_14.dev = VAR_9;
 VAR_14.is_iso = !!VAR_12;
 FUNC_3(&VAR_14.done);
 FUNC_7(&VAR_14.lock);

 VAR_15 = FUNC_11(VAR_9);

 for (VAR_16 = 0; VAR_16 < VAR_10->sglen; VAR_16++) {
  if (VAR_14.is_iso)
   VAR_19[VAR_16] = FUNC_4(VAR_15, VAR_11, VAR_12,
     VAR_10->length, VAR_13);
  else
   VAR_19[VAR_16] = FUNC_1(VAR_15, VAR_11,
     VAR_10->length, 0);

  if (!VAR_19[VAR_16]) {
   VAR_18 = -VAR_3;
   goto fail;
  }
  VAR_17 += VAR_19[VAR_16]->number_of_packets;
  VAR_19[VAR_16]->context = &VAR_14;
 }
 VAR_17 *= VAR_10->iterations;

 if (VAR_14.is_iso) {
  int VAR_20;

  if (VAR_15->speed >= VAR_8)
   VAR_20 = FUNC_10(VAR_15, VAR_11);
  else
   VAR_20 = FUNC_13(VAR_12);

  FUNC_2(&VAR_9->intf->dev,
   "iso period %d %sframes, wMaxPacket %d, transactions: %d\n",
   1 << (VAR_12->bInterval - 1),
   (VAR_15->speed >= VAR_7) ? "micro" : "",
   FUNC_12(VAR_12),
   VAR_20);

  FUNC_2(&VAR_9->intf->dev,
   "total %lu msec (%lu packets)\n",
   (VAR_17 * (1 << (VAR_12->bInterval - 1)))
    / ((VAR_15->speed >= VAR_7) ? 8 : 1),
   VAR_17);
 }

 FUNC_8(&VAR_14.lock);
 for (VAR_16 = 0; VAR_16 < VAR_10->sglen; VAR_16++) {
  ++VAR_14.pending;
  VAR_18 = FUNC_14(VAR_19[VAR_16], VAR_4);
  if (VAR_18 < 0) {
   FUNC_0(VAR_9, "submit iso[%d], error %d\n", VAR_16, VAR_18);
   if (VAR_16 == 0) {
    FUNC_9(&VAR_14.lock);
    goto fail;
   }

   FUNC_6(VAR_19[VAR_16]);
   VAR_19[VAR_16] = ((void*)0);
   VAR_14.pending--;
   VAR_14.submit_error = 1;
   break;
  }
 }
 FUNC_9(&VAR_14.lock);

 FUNC_15(&VAR_14.done);

 for (VAR_16 = 0; VAR_16 < VAR_10->sglen; VAR_16++) {
  if (VAR_19[VAR_16])
   FUNC_6(VAR_19[VAR_16]);
 }





 if (VAR_18 != 0)
  ;
 else if (VAR_14.submit_error)
  VAR_18 = -VAR_0;
 else if (VAR_14.errors >
   (VAR_14.is_iso ? VAR_14.packet_count / 10 : 0))
  VAR_18 = -VAR_2;
 return VAR_18;

fail:
 for (VAR_16 = 0; VAR_16 < VAR_10->sglen; VAR_16++) {
  if (VAR_19[VAR_16])
   FUNC_6(VAR_19[VAR_16]);
 }
 return VAR_18;
}
