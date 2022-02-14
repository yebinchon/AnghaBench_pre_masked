
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tcp_socket; } ;
struct TYPE_5__ {int dev; } ;
struct vudc {TYPE_4__ ud; TYPE_1__ gadget; } ;
struct TYPE_6__ {int seqnum; } ;
struct usbip_iso_packet_descriptor {int iov_len; struct usbip_iso_packet_descriptor* iov_base; TYPE_2__ base; } ;
struct usbip_header {int iov_len; struct usbip_header* iov_base; TYPE_2__ base; } ;
struct urbp {scalar_t__ type; struct urb* urb; } ;
struct urb {int actual_length; int number_of_packets; TYPE_3__* iso_frame_desc; struct usbip_iso_packet_descriptor* transfer_buffer; int pipe; } ;
struct msghdr {int iov_len; struct msghdr* iov_base; TYPE_2__ base; } ;
struct kvec {int iov_len; struct kvec* iov_base; TYPE_2__ base; } ;
typedef int ssize_t ;
typedef int pdu_header ;
typedef int msg ;
struct TYPE_7__ {int offset; int actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct urbp*) ;
 struct usbip_iso_packet_descriptor* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,struct usbip_iso_packet_descriptor*,struct usbip_iso_packet_descriptor*,int,size_t) ;
 int FUNC_4 (struct usbip_iso_packet_descriptor*) ;
 int FUNC_5 (struct usbip_iso_packet_descriptor*,int ,int) ;
 int FUNC_6 (struct usbip_iso_packet_descriptor*,struct urbp*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct usbip_iso_packet_descriptor* FUNC_8 (struct urb*,int*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (struct usbip_iso_packet_descriptor*,int) ;

__attribute__((used)) static int FUNC_12(struct vudc *VAR_6, struct urbp *VAR_7)
{
 struct urb *VAR_8 = VAR_7->urb;
 struct usbip_header VAR_9;
 struct usbip_iso_packet_descriptor *VAR_10 = ((void*)0);
 struct kvec *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 int VAR_13 = 0;
 size_t VAR_14;
 struct msghdr VAR_15;

 VAR_14 = 0;
 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 FUNC_5(&VAR_15, 0, sizeof(VAR_15));

 if (VAR_8->actual_length > 0 && !VAR_8->transfer_buffer) {
  FUNC_0(&VAR_6->gadget.dev,
   "urb: actual_length %d transfer_buffer null\n",
   VAR_8->actual_length);
  return -1;
 }

 if (VAR_7->type == VAR_3)
  VAR_12 = 2 + VAR_8->number_of_packets;
 else
  VAR_12 = 2;

 VAR_11 = FUNC_2(VAR_12, sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  FUNC_10(&VAR_6->ud, VAR_4);
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_12 = 0;


 FUNC_6(&VAR_9, VAR_7);
 FUNC_9("setup txdata seqnum: %d\n",
     VAR_9.base.seqnum);
 FUNC_11(&VAR_9, 1);

 VAR_11[VAR_12].iov_base = &VAR_9;
 VAR_11[VAR_12].iov_len = sizeof(VAR_9);
 VAR_12++;
 VAR_14 += sizeof(VAR_9);


 if (VAR_7->type != VAR_3 &&
     FUNC_7(VAR_8->pipe) && VAR_8->actual_length > 0) {
  VAR_11[VAR_12].iov_base = VAR_8->transfer_buffer;
  VAR_11[VAR_12].iov_len = VAR_8->actual_length;
  VAR_12++;
  VAR_14 += VAR_8->actual_length;
 } else if (VAR_7->type == VAR_3 &&
  FUNC_7(VAR_8->pipe)) {

  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_8->number_of_packets; VAR_16++) {
   VAR_11[VAR_12].iov_base = VAR_8->transfer_buffer +
    VAR_8->iso_frame_desc[VAR_16].offset;
   VAR_11[VAR_12].iov_len =
    VAR_8->iso_frame_desc[VAR_16].actual_length;
   VAR_12++;
   VAR_14 += VAR_8->iso_frame_desc[VAR_16].actual_length;
  }

  if (VAR_14 != sizeof(VAR_9) + VAR_8->actual_length) {
   FUNC_10(&VAR_6->ud, VAR_5);
   VAR_13 = -VAR_1;
   goto out;
  }
 }



 if (VAR_7->type == VAR_3) {
  ssize_t VAR_17 = 0;

  VAR_10 = FUNC_8(VAR_8, &VAR_17);
  if (!VAR_10) {
   FUNC_10(&VAR_6->ud,
     VAR_4);
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_11[VAR_12].iov_base = VAR_10;
  VAR_11[VAR_12].iov_len = VAR_17;
  VAR_14 += VAR_17;
  VAR_12++;
 }

 VAR_13 = FUNC_3(VAR_6->ud.tcp_socket, &VAR_15,
      VAR_11, VAR_12, VAR_14);
 if (VAR_13 != VAR_14) {
  FUNC_10(&VAR_6->ud, VAR_5);
  if (VAR_13 >= 0)
   VAR_13 = -VAR_1;
  goto out;
 }

out:
 FUNC_4(VAR_11);
 FUNC_4(VAR_10);
 FUNC_1(VAR_7);
 if (VAR_13 < 0)
  return VAR_13;
 return VAR_14;
}
