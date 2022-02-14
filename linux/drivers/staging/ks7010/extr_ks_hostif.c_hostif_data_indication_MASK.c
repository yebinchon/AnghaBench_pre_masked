
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dev; int protocol; } ;
struct TYPE_8__ {unsigned int rx_bytes; int rx_packets; int rx_errors; int rx_dropped; } ;
struct TYPE_7__ {int snooze_guard; } ;
struct TYPE_5__ {int failure; } ;
struct TYPE_6__ {scalar_t__ rsn_enabled; TYPE_1__ mic_failure; } ;
struct ks_wlan_private {scalar_t__ rx_size; int* rxp; int connect_status; TYPE_4__ nstats; int net_dev; TYPE_3__ psstatus; TYPE_2__ wpa; int * eth_addr; } ;
struct ieee802_1x_hdr {scalar_t__ type; } ;
struct ether_hdr {unsigned char h_proto; int * h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int) ;
 struct sk_buff* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct ks_wlan_private*) ;
 int FUNC_5 (struct ks_wlan_private*,scalar_t__) ;
 int FUNC_6 (int ,char*,unsigned int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,unsigned char*,unsigned int) ;

__attribute__((used)) static
void FUNC_10(struct ks_wlan_private *VAR_6)
{
 unsigned int VAR_7;
 struct sk_buff *VAR_8;
 u16 VAR_9;
 unsigned char VAR_10[256];
 struct ether_hdr *VAR_11;
 struct ieee802_1x_hdr *VAR_12;
 size_t VAR_13;
 int VAR_14;


 if (VAR_6->rx_size <= VAR_2) {
  VAR_6->nstats.rx_errors++;
  return;
 }

 VAR_9 = FUNC_4(VAR_6);
 FUNC_4(VAR_6);

 VAR_11 = (struct ether_hdr *)(VAR_6->rxp);


 if (FUNC_3(&VAR_6->eth_addr[0], VAR_11->h_source)) {
  FUNC_7(VAR_6->net_dev, "invalid : source is own mac address !!\n");
  FUNC_7(VAR_6->net_dev,
      "eth_hdrernet->h_dest=%02X:%02X:%02X:%02X:%02X:%02X\n",
      VAR_11->h_source[0], VAR_11->h_source[1],
      VAR_11->h_source[2], VAR_11->h_source[3],
      VAR_11->h_source[4], VAR_11->h_source[5]);
  VAR_6->nstats.rx_errors++;
  return;
 }


 if (VAR_9 != VAR_5 && VAR_6->wpa.rsn_enabled) {
  VAR_14 = FUNC_5(VAR_6, VAR_9);
  if (VAR_14)
   return;
 }

 if ((VAR_6->connect_status & VAR_3) ||
     VAR_6->wpa.mic_failure.failure == 2) {
  return;
 }


 switch (*(VAR_6->rxp + 12)) {
 case 128:
  VAR_7 = VAR_6->rx_size - 6;
  VAR_8 = FUNC_1(VAR_7);
  if (!VAR_8) {
   VAR_6->nstats.rx_dropped++;
   return;
  }
  FUNC_6(VAR_6->net_dev, "SNAP, rx_ind_size = %d\n",
      VAR_7);

  VAR_13 = VAR_1 * 2;
  FUNC_9(VAR_8, VAR_6->rxp, VAR_13);



  VAR_13 = VAR_7 - (VAR_1 * 2);
  FUNC_9(VAR_8, &VAR_11->h_proto, VAR_13);

  VAR_12 = (struct ieee802_1x_hdr *)(VAR_6->rxp + VAR_0);
  break;
 case 129:
  VAR_7 = (VAR_6->rx_size + 2);
  VAR_8 = FUNC_1(VAR_7);
  if (!VAR_8) {
   VAR_6->nstats.rx_dropped++;
   return;
  }
  FUNC_6(VAR_6->net_dev, "NETBEUI/NetBIOS rx_ind_size=%d\n",
      VAR_7);


  FUNC_9(VAR_8, VAR_6->rxp, 12);


  VAR_10[0] = (((VAR_7 - 12) >> 8) & 0xff);
  VAR_10[1] = ((VAR_7 - 12) & 0xff);
  FUNC_9(VAR_8, VAR_10, 2);


  FUNC_9(VAR_8, VAR_6->rxp + 12, VAR_7 - 14);

  VAR_12 = (struct ieee802_1x_hdr *)(VAR_6->rxp + 14);
  break;
 default:
  FUNC_7(VAR_6->net_dev, "invalid data format\n");
  VAR_6->nstats.rx_errors++;
  return;
 }

 if (VAR_12->type == VAR_4 &&
     VAR_6->wpa.rsn_enabled)
  FUNC_0(&VAR_6->psstatus.snooze_guard, 1);


 VAR_8->dev = VAR_6->net_dev;
 VAR_8->protocol = FUNC_2(VAR_8, VAR_8->dev);
 VAR_6->nstats.rx_packets++;
 VAR_6->nstats.rx_bytes += VAR_7;
 FUNC_8(VAR_8);
}
