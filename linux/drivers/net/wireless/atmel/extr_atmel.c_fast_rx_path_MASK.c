
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; } ;
struct ieee80211_hdr {int addr2; int addr3; int frame_control; int addr1; } ;
struct atmel_private {TYPE_2__* dev; scalar_t__ do_rx_crc; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; int rx_crc_errors; int rx_dropped; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,void*,int,int) ;
 int FUNC_1 (int,unsigned char*,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,int ,size_t) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct atmel_private *VAR_3,
    struct ieee80211_hdr *VAR_4,
    u16 VAR_5, u16 VAR_6, u32 VAR_7)
{

 u8 VAR_8[6];
 struct sk_buff *VAR_9;
 unsigned char *VAR_10;


 FUNC_0(VAR_3->dev, VAR_8, VAR_6 + 24, 6);
 VAR_5 -= 6;

 if (VAR_3->do_rx_crc) {
  VAR_7 = FUNC_1(VAR_7, VAR_8, 6);
  VAR_5 -= 4;
 }

 if (!(VAR_9 = FUNC_2(VAR_5 + 14))) {
  VAR_3->dev->stats.rx_dropped++;
  return;
 }

 FUNC_9(VAR_9, 2);
 VAR_10 = FUNC_8(VAR_9, VAR_5 + 12);
 FUNC_0(VAR_3->dev, VAR_10 + 12, VAR_6 + 30, VAR_5);

 if (VAR_3->do_rx_crc) {
  u32 VAR_11;
  VAR_7 = FUNC_1(VAR_7, VAR_10 + 12, VAR_5);
  FUNC_0(VAR_3->dev, (void *)&VAR_11, VAR_6 + 30 + VAR_5, 4);
  if ((VAR_7 ^ 0xffffffff) != VAR_11) {
   VAR_3->dev->stats.rx_crc_errors++;
   FUNC_3(VAR_9);
   return;
  }
 }

 FUNC_6(VAR_10, VAR_4->addr1, VAR_1);
 if (FUNC_5(VAR_4->frame_control) & VAR_2)
  FUNC_6(&VAR_10[VAR_1], VAR_4->addr3, VAR_1);
 else
  FUNC_6(&VAR_10[VAR_1], VAR_4->addr2, VAR_1);

 VAR_9->protocol = FUNC_4(VAR_9, VAR_3->dev);
 VAR_9->ip_summed = VAR_0;
 FUNC_7(VAR_9);
 VAR_3->dev->stats.rx_bytes += 12 + VAR_5;
 VAR_3->dev->stats.rx_packets++;
}
