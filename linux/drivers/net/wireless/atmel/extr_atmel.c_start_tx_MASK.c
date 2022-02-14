
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; unsigned char* data; } ;
struct TYPE_2__ {int tx_bytes; int tx_dropped; int tx_errors; } ;
struct net_device {int const* dev_addr; TYPE_1__ stats; } ;
struct ieee80211_hdr {int frame_control; int addr4; int addr3; int addr2; int addr1; scalar_t__ seq_ctrl; scalar_t__ duration_id; } ;
struct atmel_private {scalar_t__ station_state; scalar_t__ operating_mode; int const* BSSID; int const* CurrentBSSID; int timerlock; int irqlock; int tx_buff_tail; scalar_t__ use_wpa; scalar_t__ wep_is_on; scalar_t__ card; int (* present_callback ) (scalar_t__) ;} ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct atmel_private*,int) ;
 int FUNC_4 (int *,int const*,int ) ;
 struct atmel_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct atmel_private*,int,int,int,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 static const u8 VAR_13[6] = { 0xaa, 0xaa, 0x03, 0x00, 0x00, 0x00 };
 struct atmel_private *VAR_14 = FUNC_5(VAR_12);
 struct ieee80211_hdr VAR_15;
 unsigned long VAR_16;
 u16 VAR_17, VAR_18, VAR_19 = (VAR_2 < VAR_11->len) ? VAR_11->len : VAR_2;

 if (VAR_14->card && VAR_14->present_callback &&
     !(*VAR_14->present_callback)(VAR_14->card)) {
  VAR_12->stats.tx_errors++;
  FUNC_2(VAR_11);
  return VAR_8;
 }

 if (VAR_14->station_state != VAR_9) {
  VAR_12->stats.tx_errors++;
  FUNC_2(VAR_11);
  return VAR_8;
 }


 FUNC_8(&VAR_14->timerlock);

 FUNC_9(&VAR_14->irqlock, VAR_16);







 if (!(VAR_17 = FUNC_3(VAR_14, VAR_19 + 18))) {
  VAR_12->stats.tx_dropped++;
  FUNC_11(&VAR_14->irqlock, VAR_16);
  FUNC_10(&VAR_14->timerlock);
  FUNC_6(VAR_12);
  return VAR_7;
 }

 VAR_18 = VAR_5;
 VAR_15.duration_id = 0;
 VAR_15.seq_ctrl = 0;
 if (VAR_14->wep_is_on)
  VAR_18 |= VAR_3;
 if (VAR_14->operating_mode == VAR_6) {
  FUNC_7(VAR_11, &VAR_15.addr1, VAR_1);
  FUNC_4(&VAR_15.addr2, VAR_12->dev_addr, VAR_1);
  FUNC_4(&VAR_15.addr3, VAR_14->BSSID, VAR_1);
 } else {
  VAR_18 |= VAR_4;
  FUNC_4(&VAR_15.addr1, VAR_14->CurrentBSSID, VAR_1);
  FUNC_4(&VAR_15.addr2, VAR_12->dev_addr, VAR_1);
  FUNC_7(VAR_11, &VAR_15.addr3, VAR_1);
 }

 if (VAR_14->use_wpa)
  FUNC_4(&VAR_15.addr4, VAR_13, VAR_1);

 VAR_15.frame_control = FUNC_1(VAR_18);

 FUNC_0(VAR_12, VAR_17, (unsigned char *)&VAR_15, VAR_0);

 FUNC_0(VAR_12, VAR_17 + VAR_0, VAR_11->data + 12, VAR_19 - 12);
 VAR_14->tx_buff_tail += VAR_19 - 12 + VAR_0;


 FUNC_13(VAR_14, *(VAR_11->data) & 0x01, VAR_19 + 18, VAR_17, VAR_10);
 VAR_12->stats.tx_bytes += VAR_19;

 FUNC_11(&VAR_14->irqlock, VAR_16);
 FUNC_10(&VAR_14->timerlock);
 FUNC_2(VAR_11);

 return VAR_8;
}
