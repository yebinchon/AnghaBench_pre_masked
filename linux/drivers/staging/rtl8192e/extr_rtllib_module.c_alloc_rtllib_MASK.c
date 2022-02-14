
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_cam_table {int dummy; } ;
struct rtllib_device {int open_wep; int host_encrypt; int host_decrypt; int ieee802_1x; int* last_rxseq_num; int* last_rxfrag_num; scalar_t__* last_packet_time; int * ibss_mac_hash; int pHTInfo; int swcamtable; scalar_t__ hwsec_active; scalar_t__ raw_tx; scalar_t__ privacy_invoked; scalar_t__ drop_unencrypted; scalar_t__ tkip_countermeasures; scalar_t__ wpa_enabled; int lock; int crypt_info; int atm_swbw; int reorder_spinlock; int wpax_suitlist_lock; int rtllib_ap_sec_type; int scan_age; int fts; struct net_device* dev; } ;
struct rt_hi_throughput {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct rtllib_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtllib_device*) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int VAR_4 ;
 int FUNC_13 (struct rtllib_device*) ;
 int FUNC_14 (struct rtllib_device*) ;
 int FUNC_15 (struct rtllib_device*) ;
 int FUNC_16 (int *) ;

struct net_device *FUNC_17(int VAR_5)
{
 struct rtllib_device *VAR_6 = ((void*)0);
 struct net_device *VAR_7;
 int VAR_8, VAR_9;

 FUNC_11("rtllib: Initializing...\n");

 VAR_7 = FUNC_4(sizeof(struct rtllib_device) + VAR_5);
 if (!VAR_7) {
  FUNC_12("Unable to allocate net_device.\n");
  return ((void*)0);
 }
 VAR_6 = (struct rtllib_device *)FUNC_10(VAR_7);
 VAR_6->dev = VAR_7;

 VAR_9 = FUNC_13(VAR_6);
 if (VAR_9) {
  FUNC_12("Unable to allocate beacon storage: %d\n", VAR_9);
  goto failed;
 }
 FUNC_14(VAR_6);


 VAR_6->fts = VAR_0;
 VAR_6->scan_age = VAR_1;
 VAR_6->open_wep = 1;


 VAR_6->host_encrypt = 1;
 VAR_6->host_decrypt = 1;
 VAR_6->ieee802_1x = 1;

 VAR_6->rtllib_ap_sec_type = VAR_4;

 FUNC_16(&VAR_6->lock);
 FUNC_16(&VAR_6->wpax_suitlist_lock);
 FUNC_16(&VAR_6->reorder_spinlock);
 FUNC_5(&(VAR_6->atm_swbw), 0);


 FUNC_8(&VAR_6->crypt_info, "RTLLIB", &VAR_6->lock);

 VAR_6->wpa_enabled = 0;
 VAR_6->tkip_countermeasures = 0;
 VAR_6->drop_unencrypted = 0;
 VAR_6->privacy_invoked = 0;
 VAR_6->ieee802_1x = 1;
 VAR_6->raw_tx = 0;
 VAR_6->hwsec_active = 0;

 FUNC_9(VAR_6->swcamtable, 0, sizeof(struct sw_cam_table) * 32);
 FUNC_15(VAR_6);

 VAR_6->pHTInfo = FUNC_7(sizeof(struct rt_hi_throughput), VAR_2);
 if (!VAR_6->pHTInfo)
  return ((void*)0);

 FUNC_1(VAR_6);
 FUNC_0(VAR_6);
 FUNC_3(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_2(&VAR_6->ibss_mac_hash[VAR_8]);

 for (VAR_8 = 0; VAR_8 < 17; VAR_8++) {
  VAR_6->last_rxseq_num[VAR_8] = -1;
  VAR_6->last_rxfrag_num[VAR_8] = -1;
  VAR_6->last_packet_time[VAR_8] = 0;
 }

 return VAR_7;

 failed:
 FUNC_6(VAR_7);
 return ((void*)0);
}
