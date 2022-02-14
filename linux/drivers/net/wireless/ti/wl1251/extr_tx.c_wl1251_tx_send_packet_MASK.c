
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wl1251 {int data_in_count; TYPE_3__* data_path; struct sk_buff** tx_frames; } ;
struct tx_double_buffer_desc {size_t id; int xmit_queue; int rate; int length; } ;
struct sk_buff {unsigned char* data; int len; } ;
struct TYPE_5__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ tx_packet_ring_addr; scalar_t__ tx_packet_ring_chunk_size; } ;
struct TYPE_4__ {scalar_t__ cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ,int,int ) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (long) ;
 int FUNC_12 (int ,char*,size_t,...) ;
 int FUNC_13 (struct wl1251*,scalar_t__,unsigned char*,int) ;

__attribute__((used)) static int FUNC_14(struct wl1251 *VAR_5, struct sk_buff *VAR_6,
     struct ieee80211_tx_info *VAR_7)
{
 struct tx_double_buffer_desc *VAR_8;
 int VAR_9;
 u32 VAR_10;

 if (!VAR_6)
  return -VAR_1;

 VAR_8 = (struct tx_double_buffer_desc *) VAR_6->data;

 if (VAR_7->control.hw_key &&
     VAR_7->control.hw_key->cipher == VAR_4) {
  int VAR_11;
  __le16 VAR_12;
  u16 VAR_13;
  u8 *VAR_14;

  VAR_12 = *(__le16 *)(VAR_6->data + sizeof(*VAR_8));
  VAR_13 = FUNC_4(VAR_8->length) + VAR_3;
  VAR_8->length = FUNC_1(VAR_13);

  VAR_11 = FUNC_3(VAR_12);

  VAR_14 = FUNC_8(VAR_6, VAR_3);
  FUNC_5(VAR_14, VAR_14 + VAR_3,
   sizeof(*VAR_8) + VAR_11);
 }





 if (FUNC_11((long)VAR_6->data & 0x03)) {
  int VAR_15 = (4 - (long)VAR_6->data) & 0x03;
  FUNC_12(VAR_0, "skb offset %d", VAR_15);


  if (FUNC_6(VAR_6) || (FUNC_10(VAR_6) < VAR_15)) {
   struct sk_buff *VAR_16 = FUNC_7(VAR_6, 0, 3,
         VAR_2);

   if (FUNC_11(VAR_16 == ((void*)0)))
    return -VAR_1;

   VAR_8 = (struct tx_double_buffer_desc *) VAR_16->data;

   FUNC_2(VAR_6);
   VAR_5->tx_frames[VAR_8->id] = VAR_6 = VAR_16;

   VAR_15 = (4 - (long)VAR_6->data) & 0x03;
   FUNC_12(VAR_0, "new skb offset %d", VAR_15);
  }


  if (VAR_15) {
   unsigned char *VAR_17 = VAR_6->data;
   FUNC_9(VAR_6, VAR_15);
   FUNC_5(VAR_6->data, VAR_17, VAR_6->len);
   VAR_8 = (struct tx_double_buffer_desc *) VAR_6->data;
  }
 }


 VAR_9 = FUNC_0(VAR_6->len);

 if (VAR_5->data_in_count & 0x1)
  VAR_10 = VAR_5->data_path->tx_packet_ring_addr +
   VAR_5->data_path->tx_packet_ring_chunk_size;
 else
  VAR_10 = VAR_5->data_path->tx_packet_ring_addr;

 FUNC_13(VAR_5, VAR_10, VAR_6->data, VAR_9);

 FUNC_12(VAR_0, "tx id %u skb 0x%p payload %u rate 0x%x "
       "queue %d", VAR_8->id, VAR_6, VAR_8->length,
       VAR_8->rate, VAR_8->xmit_queue);

 return 0;
}
