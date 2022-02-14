
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_6__ {int length; } ;
union iwreq_data {TYPE_3__ data; } ;
typedef int u8 ;
typedef int u16 ;
struct wpa_key {int rx_mic_key; scalar_t__ key_len; } ;
struct mic_failure {unsigned long last_failure_time; int failure; int counter; } ;
struct TYPE_5__ {scalar_t__ pairwise_suite; scalar_t__ group_suite; struct mic_failure mic_failure; struct wpa_key* key; } ;
struct TYPE_4__ {int rx_errors; } ;
struct ks_wlan_private {int rxp; int rx_size; int net_dev; TYPE_2__ wpa; TYPE_1__ nstats; } ;
struct ether_hdr {scalar_t__ h_dest_snap; scalar_t__ h_source_snap; int* h_dest; int h_source; int h_proto; } ;
typedef int recv_mic ;
typedef int mic ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (int ,int,int,int ,int *) ;
 int FUNC_4 (int ,char*,unsigned short,int) ;
 int FUNC_5 (int ,char*) ;
 unsigned short FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,unsigned int,char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,union iwreq_data*,char*) ;

__attribute__((used)) static
int FUNC_10(struct ks_wlan_private *VAR_9,
          unsigned short VAR_10)
{
 struct ether_hdr *VAR_11;
 unsigned short VAR_12;
 unsigned char VAR_13[VAR_4];
 char VAR_14[128];
 unsigned long VAR_15;
 struct mic_failure *VAR_16;
 u8 VAR_17[VAR_4];
 union iwreq_data VAR_18;
 unsigned int VAR_19 = VAR_10 - 1;
 struct wpa_key *VAR_20 = &VAR_9->wpa.key[VAR_19];

 VAR_11 = (struct ether_hdr *)(VAR_9->rxp);
 VAR_12 = FUNC_6(VAR_11->h_proto);

 if (VAR_11->h_dest_snap != VAR_11->h_source_snap) {
  FUNC_5(VAR_9->net_dev, "invalid data format\n");
  VAR_9->nstats.rx_errors++;
  return -VAR_0;
 }
 if (((VAR_10 == VAR_7 &&
       VAR_9->wpa.pairwise_suite == VAR_3) ||
      (VAR_10 == VAR_5 &&
       VAR_9->wpa.group_suite == VAR_3) ||
      (VAR_10 == VAR_6 &&
       VAR_9->wpa.group_suite == VAR_3)) &&
     VAR_20->key_len) {
  int VAR_21;

  FUNC_4(VAR_9->net_dev, "TKIP: protocol=%04X: size=%u\n",
      VAR_12, VAR_9->rx_size);

  FUNC_1(&VAR_13[0],
         (VAR_9->rxp) + ((VAR_9->rx_size) - sizeof(VAR_13)),
         sizeof(VAR_13));
  VAR_9->rx_size = VAR_9->rx_size - sizeof(VAR_13);

  VAR_21 = FUNC_3(VAR_20->rx_mic_key, VAR_9->rxp, VAR_9->rx_size,
      0, VAR_17);
  if (VAR_21 < 0)
   return VAR_21;
  if (FUNC_0(VAR_17, VAR_13, sizeof(VAR_17)) != 0) {
   VAR_15 = VAR_8;
   VAR_16 = &VAR_9->wpa.mic_failure;

   if (VAR_16->last_failure_time &&
       (VAR_15 - VAR_16->last_failure_time) / VAR_1 >= 60) {
    VAR_16->failure = 0;
   }
   FUNC_5(VAR_9->net_dev, "MIC FAILURE\n");
   if (VAR_16->failure == 0) {
    VAR_16->failure = 1;
    VAR_16->counter = 0;
   } else if (VAR_16->failure == 1) {
    VAR_16->failure = 2;
    VAR_16->counter =
     (u16)((VAR_15 - VAR_16->last_failure_time) / VAR_1);

    if (!VAR_16->counter)
     VAR_16->counter = 1;
   }
   VAR_9->wpa.mic_failure.last_failure_time = VAR_15;


   FUNC_7(VAR_14,
    "MLME-MICHAELMICFAILURE.indication(keyid=%d %scast addr=%pM)",
    VAR_19,
    VAR_11->h_dest[0] & 0x01 ? "broad" : "uni",
    VAR_11->h_source);
   FUNC_2(&VAR_18, 0, sizeof(VAR_18));
   VAR_18.data.length = FUNC_8(VAR_14);
   FUNC_9(VAR_9->net_dev, VAR_2, &VAR_18,
         VAR_14);
   return -VAR_0;
  }
 }
 return 0;
}
