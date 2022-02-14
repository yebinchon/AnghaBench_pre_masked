
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vl600_state {struct sk_buff* current_rx_buf; } ;
struct vl600_pkt_hdr {int len; } ;
struct vl600_frame_hdr {int pkt_cnt; int len; int magic; } ;
struct usbnet {TYPE_2__* net; struct vl600_state* driver_priv; } ;
struct sk_buff {int* data; int len; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_3__ {int rx_errors; int rx_length_errors; } ;
struct TYPE_4__ {int* dev_addr; TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int*,int ) ;
 int FUNC_6 (struct usbnet*,int ,TYPE_2__*,char*) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ,int,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct usbnet *VAR_5, struct sk_buff *VAR_6)
{
 struct vl600_frame_hdr *VAR_7;
 struct vl600_pkt_hdr *VAR_8;
 struct ethhdr *VAR_9;
 int VAR_10, VAR_11;
 struct sk_buff *VAR_12 = VAR_6;
 struct sk_buff *VAR_13;
 struct vl600_state *VAR_14 = VAR_5->driver_priv;
 if (VAR_14->current_rx_buf) {
  VAR_7 = (struct vl600_frame_hdr *) VAR_14->current_rx_buf->data;
  if (VAR_6->len + VAR_14->current_rx_buf->len >
    FUNC_4(&VAR_7->len)) {
   FUNC_6(VAR_5, VAR_4, VAR_5->net, "Fragment too long\n");
   VAR_5->net->stats.rx_length_errors++;
   goto error;
  }

  VAR_12 = VAR_14->current_rx_buf;
  FUNC_11(VAR_12, VAR_6->data, VAR_6->len);
 } else if (VAR_6->len < 4) {
  FUNC_6(VAR_5, VAR_4, VAR_5->net, "Frame too short\n");
  VAR_5->net->stats.rx_length_errors++;
  goto error;
 }

 VAR_7 = (struct vl600_frame_hdr *) VAR_12->data;


 if (FUNC_7(VAR_7->magic) != 0x53544448 &&
   FUNC_7(VAR_7->magic) != 0x44544d48)
  goto error;

 if (VAR_12->len < sizeof(*VAR_7) ||
   VAR_12->len != FUNC_4(&VAR_7->len)) {

  if (VAR_14->current_rx_buf)
   return 0;

  VAR_14->current_rx_buf = FUNC_9(VAR_6, 0,
    FUNC_4(&VAR_7->len), VAR_3);
  if (!VAR_14->current_rx_buf)
   VAR_5->net->stats.rx_errors++;

  return 0;
 }

 VAR_11 = FUNC_4(&VAR_7->pkt_cnt);

 FUNC_10(VAR_12, sizeof(*VAR_7));

 while (VAR_11--) {
  if (VAR_12->len < sizeof(*VAR_8)) {
   FUNC_6(VAR_5, VAR_4, VAR_5->net, "Packet too short\n");
   goto error;
  }

  VAR_8 = (struct vl600_pkt_hdr *) VAR_12->data;
  VAR_10 = sizeof(*VAR_8) + FUNC_4(&VAR_8->len);
  if (VAR_10 > VAR_12->len) {
   FUNC_6(VAR_5, VAR_4, VAR_5->net,
     "Bad packet length stored in header\n");
   goto error;
  }






  VAR_9 = (struct ethhdr *) VAR_6->data;
  if (FUNC_0(&VAR_9->h_proto) == VAR_1 &&
    VAR_12->len > 0x26) {

   FUNC_5(VAR_9->h_source,
     &VAR_12->data[sizeof(*VAR_9) + 0x8],
     VAR_0);
   FUNC_5(VAR_9->h_dest,
     &VAR_12->data[sizeof(*VAR_9) + 0x12],
     VAR_0);
  } else {
   FUNC_2(VAR_9->h_source);
   FUNC_5(VAR_9->h_dest, VAR_5->net->dev_addr, VAR_0);






   if ((VAR_12->data[sizeof(*VAR_9)] & 0xf0) == 0x60)
    VAR_9->h_proto = FUNC_3(VAR_2);
  }

  if (VAR_11) {

   VAR_13 = FUNC_8(VAR_12, VAR_3);
   if (!VAR_13)
    goto error;

   FUNC_12(VAR_13, VAR_10);
   FUNC_13(VAR_5, VAR_13);

   FUNC_10(VAR_12, (VAR_10 + 3) & ~3);
  } else {
   FUNC_12(VAR_12, VAR_10);

   if (VAR_14->current_rx_buf) {
    FUNC_13(VAR_5, VAR_12);
    VAR_14->current_rx_buf = ((void*)0);
    return 0;
   }

   return 1;
  }
 }

error:
 if (VAR_14->current_rx_buf) {
  FUNC_1(VAR_14->current_rx_buf);
  VAR_14->current_rx_buf = ((void*)0);
 }
 VAR_5->net->stats.rx_errors++;
 return 0;
}
