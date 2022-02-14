
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_2__* net; } ;
struct sk_buff {scalar_t__ len; unsigned char* data; int truesize; } ;
struct TYPE_4__ {int rx_frame_errors; int rx_crc_errors; int rx_dropped; int rx_errors; } ;
struct TYPE_5__ {scalar_t__ hard_header_len; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct usbnet*,int ,TYPE_2__*,char*,int) ;
 int VAR_9 ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct usbnet*,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct usbnet *VAR_10, struct sk_buff *VAR_11)
{

 if (VAR_11->len < VAR_10->net->hard_header_len)
  return 0;

 while (VAR_11->len > 0) {
  u32 VAR_12, VAR_13, VAR_14, VAR_15;
  struct sk_buff *VAR_16;
  unsigned char *VAR_17;

  VAR_12 = FUNC_0(VAR_11->data);
  FUNC_4(VAR_11, 4);

  VAR_13 = FUNC_0(VAR_11->data);
  FUNC_4(VAR_11, 4 + VAR_3);

  VAR_17 = VAR_11->data;


  VAR_15 = (VAR_12 & VAR_5) - VAR_3;
  VAR_14 = (4 - ((VAR_15 + VAR_3) % 4)) % 4;

  if (FUNC_8(VAR_12 & VAR_7)) {
   FUNC_2(VAR_10, VAR_9, VAR_10->net,
      "Error rx_cmd_a=0x%08x\n", VAR_12);
   VAR_10->net->stats.rx_errors++;
   VAR_10->net->stats.rx_dropped++;

   if (VAR_12 & VAR_4)
    VAR_10->net->stats.rx_crc_errors++;
   else if (VAR_12 & (VAR_6 | VAR_8))
    VAR_10->net->stats.rx_frame_errors++;
  } else {

   if (FUNC_8(VAR_15 > (VAR_2 + VAR_0 + 12))) {
    FUNC_2(VAR_10, VAR_9, VAR_10->net,
       "size err rx_cmd_a=0x%08x\n",
       VAR_12);
    return 0;
   }


   if (VAR_11->len == VAR_15) {
    FUNC_7(VAR_10, VAR_11, VAR_12,
     VAR_13);

    FUNC_6(VAR_11, VAR_11->len - 4);
    VAR_11->truesize = VAR_15 + sizeof(struct sk_buff);

    return 1;
   }

   VAR_16 = FUNC_3(VAR_11, VAR_1);
   if (FUNC_8(!VAR_16)) {
    FUNC_1(VAR_10->net, "Error allocating skb\n");
    return 0;
   }

   VAR_16->len = VAR_15;
   VAR_16->data = VAR_17;
   FUNC_5(VAR_16, VAR_15);

   FUNC_7(VAR_10, VAR_16, VAR_12,
    VAR_13);

   FUNC_6(VAR_16, VAR_16->len - 4);
   VAR_16->truesize = VAR_15 + sizeof(struct sk_buff);

   FUNC_9(VAR_10, VAR_16);
  }

  FUNC_4(VAR_11, VAR_15);


  if (VAR_11->len)
   FUNC_4(VAR_11, VAR_14);
 }

 return 1;
}
