
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct asix_rx_fixup_info {int remaining; int header; int split_head; int * ax_skb; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int,...) ;
 int FUNC_5 (struct asix_rx_fixup_info*) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (struct usbnet*,int *) ;

int FUNC_8(struct usbnet *VAR_2, struct sk_buff *VAR_3,
      struct asix_rx_fixup_info *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6;
 if (VAR_4->remaining && (VAR_4->remaining + sizeof(u32) <= VAR_3->len)) {
  VAR_5 = ((VAR_4->remaining + 1) & 0xfffe);
  VAR_4->header = FUNC_1(VAR_3->data + VAR_5);
  VAR_5 = 0;

  VAR_6 = (u16)(VAR_4->header & 0x7ff);
  if (VAR_6 != ((~VAR_4->header >> 16) & 0x7ff)) {
   FUNC_4(VAR_2->net, "asix_rx_fixup() Data Header synchronisation was lost, remaining %d\n",
       VAR_4->remaining);
   FUNC_5(VAR_4);
  }
 }

 while (VAR_5 + sizeof(u16) <= VAR_3->len) {
  u16 VAR_7;

  if (!VAR_4->remaining) {
   if (VAR_3->len - VAR_5 == sizeof(u16)) {
    VAR_4->header = FUNC_0(
      VAR_3->data + VAR_5);
    VAR_4->split_head = 1;
    VAR_5 += sizeof(u16);
    break;
   }

   if (VAR_4->split_head == 1) {
    VAR_4->header |= (FUNC_0(
      VAR_3->data + VAR_5) << 16);
    VAR_4->split_head = 0;
    VAR_5 += sizeof(u16);
   } else {
    VAR_4->header = FUNC_1(VAR_3->data +
        VAR_5);
    VAR_5 += sizeof(u32);
   }


   VAR_6 = (u16)(VAR_4->header & 0x7ff);
   if (VAR_6 != ((~VAR_4->header >> 16) & 0x7ff)) {
    FUNC_4(VAR_2->net, "asix_rx_fixup() Bad Header Length 0x%x, offset %d\n",
        VAR_4->header, VAR_5);
    FUNC_5(VAR_4);
    return 0;
   }
   if (VAR_6 > VAR_2->net->mtu + VAR_0 + VAR_1) {
    FUNC_3(VAR_2->net, "asix_rx_fixup() Bad RX Length %d\n",
        VAR_6);
    FUNC_5(VAR_4);
    return 0;
   }






   VAR_4->ax_skb = FUNC_2(VAR_2->net, VAR_6);

   VAR_4->remaining = VAR_6;
  }

  if (VAR_4->remaining > VAR_3->len - VAR_5) {
   VAR_7 = VAR_3->len - VAR_5;
   VAR_4->remaining -= VAR_7;
  } else {
   VAR_7 = VAR_4->remaining;
   VAR_4->remaining = 0;
  }

  if (VAR_4->ax_skb) {
   FUNC_6(VAR_4->ax_skb, VAR_3->data + VAR_5,
         VAR_7);
   if (!VAR_4->remaining) {
    FUNC_7(VAR_2, VAR_4->ax_skb);
    VAR_4->ax_skb = ((void*)0);
   }
  }

  VAR_5 += (VAR_7 + 1) & 0xfffe;
 }

 if (VAR_3->len != VAR_5) {
  FUNC_4(VAR_2->net, "asix_rx_fixup() Bad SKB Length %d, %d\n",
      VAR_3->len, VAR_5);
  FUNC_5(VAR_4);
  return 0;
 }

 return 1;
}
