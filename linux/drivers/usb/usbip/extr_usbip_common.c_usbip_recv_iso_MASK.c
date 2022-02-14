
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbip_iso_packet_descriptor {int dummy; } ;
struct usbip_device {scalar_t__ side; int tcp_socket; } ;
struct urb {int number_of_packets; int actual_length; TYPE_1__* dev; TYPE_2__* iso_frame_desc; int pipe; } ;
struct TYPE_4__ {scalar_t__ actual_length; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usbip_device*,int ) ;
 int FUNC_5 (struct usbip_iso_packet_descriptor*,int ) ;
 int FUNC_6 (struct usbip_iso_packet_descriptor*,TYPE_2__*,int ) ;
 int FUNC_7 (int ,void*,int) ;

int FUNC_8(struct usbip_device *VAR_7, struct urb *VAR_8)
{
 void *VAR_9;
 struct usbip_iso_packet_descriptor *VAR_10;
 int VAR_11 = VAR_8->number_of_packets;
 int VAR_12 = VAR_11 * sizeof(*VAR_10);
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 if (!FUNC_3(VAR_8->pipe))
  return 0;


 if (VAR_11 == 0)
  return 0;

 VAR_9 = FUNC_2(VAR_12, VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_7->tcp_socket, VAR_9, VAR_12);
 if (VAR_14 != VAR_12) {
  FUNC_0(&VAR_8->dev->dev, "recv iso_frame_descriptor, %d\n",
   VAR_14);
  FUNC_1(VAR_9);

  if (VAR_7->side == VAR_4 || VAR_7->side == VAR_5)
   FUNC_4(VAR_7, VAR_3);
  else
   FUNC_4(VAR_7, VAR_6);

  return -VAR_1;
 }

 VAR_10 = (struct usbip_iso_packet_descriptor *) VAR_9;
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  FUNC_5(&VAR_10[VAR_13], 0);
  FUNC_6(&VAR_10[VAR_13], &VAR_8->iso_frame_desc[VAR_13], 0);
  VAR_15 += VAR_8->iso_frame_desc[VAR_13].actual_length;
 }

 FUNC_1(VAR_9);

 if (VAR_15 != VAR_8->actual_length) {
  FUNC_0(&VAR_8->dev->dev,
   "total length of iso packets %d not equal to actual length of buffer %d\n",
   VAR_15, VAR_8->actual_length);

  if (VAR_7->side == VAR_4 || VAR_7->side == VAR_5)
   FUNC_4(VAR_7, VAR_3);
  else
   FUNC_4(VAR_7, VAR_6);

  return -VAR_1;
 }

 return VAR_14;
}
