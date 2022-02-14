
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee80211_device {int open_wep; int host_encrypt; int host_decrypt; int ieee802_1x; int* last_rxseq_num; int* last_rxfrag_num; scalar_t__* last_packet_time; int * ibss_mac_hash; int pHTInfo; scalar_t__ hwsec_active; scalar_t__ raw_tx; scalar_t__ privacy_invoked; scalar_t__ drop_unencrypted; scalar_t__ tkip_countermeasures; scalar_t__ wpa_enabled; scalar_t__ wpax_type_set; int atm_swbw; int atm_chnlop; int reorder_spinlock; int bw_spinlock; int wpax_suitlist_lock; int lock; int crypt_deinit_timer; int crypt_deinit_list; int scan_age; int fts; struct net_device* dev; } ;
typedef int RT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_device*) ;
 struct net_device* FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_10 (struct ieee80211_device*) ;
 int FUNC_11 (struct ieee80211_device*) ;
 int FUNC_12 (struct ieee80211_device*) ;
 int FUNC_13 (struct ieee80211_device*) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int ) ;
 struct ieee80211_device* FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;

struct net_device *FUNC_19(int VAR_6)
{
 struct ieee80211_device *VAR_7;
 struct net_device *VAR_8;
 int VAR_9, VAR_10;

 FUNC_3("Initializing...\n");

 VAR_8 = FUNC_7(sizeof(struct ieee80211_device) + VAR_6);
 if (!VAR_8) {
  FUNC_4("Unable to network device.\n");
  goto failed;
 }

 VAR_7 = FUNC_16(VAR_8);
 VAR_7->dev = VAR_8;

 VAR_10 = FUNC_10(VAR_7);
 if (VAR_10) {
  FUNC_4("Unable to allocate beacon storage: %d\n",
    VAR_10);
  goto failed;
 }
 FUNC_12(VAR_7);


 VAR_7->fts = VAR_0;
 VAR_7->scan_age = VAR_1;
 VAR_7->open_wep = 1;


 VAR_7->host_encrypt = 1;
 VAR_7->host_decrypt = 1;
 VAR_7->ieee802_1x = 1;

 FUNC_5(&VAR_7->crypt_deinit_list);
 FUNC_18(&VAR_7->crypt_deinit_timer, VAR_5,
      0);

 FUNC_17(&VAR_7->lock);
 FUNC_17(&VAR_7->wpax_suitlist_lock);
 FUNC_17(&VAR_7->bw_spinlock);
 FUNC_17(&VAR_7->reorder_spinlock);

 FUNC_8(&VAR_7->atm_chnlop, 0);
 FUNC_8(&VAR_7->atm_swbw, 0);

 VAR_7->wpax_type_set = 0;
 VAR_7->wpa_enabled = 0;
 VAR_7->tkip_countermeasures = 0;
 VAR_7->drop_unencrypted = 0;
 VAR_7->privacy_invoked = 0;
 VAR_7->ieee802_1x = 1;
 VAR_7->raw_tx = 0;

 VAR_7->hwsec_active = 0;

 FUNC_13(VAR_7);

 VAR_7->pHTInfo = FUNC_15(sizeof(RT_HIGH_THROUGHPUT), VAR_2);
 if (!VAR_7->pHTInfo) {
  FUNC_2(VAR_3, "can't alloc memory for HTInfo\n");




  FUNC_11(VAR_7);
  goto failed;
 }
 FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 FUNC_6(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_5(&VAR_7->ibss_mac_hash[VAR_9]);

 for (VAR_9 = 0; VAR_9 < 17; VAR_9++) {
  VAR_7->last_rxseq_num[VAR_9] = -1;
  VAR_7->last_rxfrag_num[VAR_9] = -1;
  VAR_7->last_packet_time[VAR_9] = 0;
 }


 FUNC_14();

 return VAR_8;

 failed:
 if (VAR_8)
  FUNC_9(VAR_8);

 return ((void*)0);
}
