
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; TYPE_1__* ieee80211_ptr; } ;
struct TYPE_4__ {TYPE_2__* wiphy; int iftype; } ;
struct libipw_device {int open_wep; int host_encrypt; int host_decrypt; int host_mc_decrypt; int host_open_frag; int ieee802_1x; TYPE_1__ wdev; scalar_t__ privacy_invoked; scalar_t__ drop_unencrypted; scalar_t__ wpa_enabled; int lock; int crypt_info; int scan_age; void* rts; void* fts; struct net_device* dev; } ;
struct TYPE_5__ {int max_scan_ssids; int interface_modes; scalar_t__ max_scan_ie_len; int privid; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct libipw_device*) ;
 int FUNC_7 (struct libipw_device*) ;
 int VAR_5 ;
 struct libipw_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (int *,int ) ;

struct net_device *FUNC_12(int VAR_6, int VAR_7)
{
 struct libipw_device *VAR_8;
 struct net_device *VAR_9;
 int VAR_10;

 FUNC_1("Initializing...\n");

 VAR_9 = FUNC_3(sizeof(struct libipw_device) + VAR_6);
 if (!VAR_9)
  goto failed;

 VAR_8 = FUNC_8(VAR_9);

 VAR_8->dev = VAR_9;

 if (!VAR_7) {
  VAR_8->wdev.wiphy = FUNC_11(&VAR_4, 0);
  if (!VAR_8->wdev.wiphy) {
   FUNC_2("Unable to allocate wiphy.\n");
   goto failed_free_netdev;
  }

  VAR_8->dev->ieee80211_ptr = &VAR_8->wdev;
  VAR_8->wdev.iftype = VAR_3;




  VAR_8->wdev.wiphy->privid = VAR_5;

  VAR_8->wdev.wiphy->max_scan_ssids = 1;
  VAR_8->wdev.wiphy->max_scan_ie_len = 0;
  VAR_8->wdev.wiphy->interface_modes = FUNC_0(VAR_3)
      | FUNC_0(VAR_2);
 }

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10) {
  FUNC_2("Unable to allocate beacon storage: %d\n", VAR_10);
  goto failed_free_wiphy;
 }
 FUNC_7(VAR_8);


 VAR_8->fts = VAR_0;
 VAR_8->rts = VAR_0;
 VAR_8->scan_age = VAR_1;
 VAR_8->open_wep = 1;


 VAR_8->host_encrypt = 1;
 VAR_8->host_decrypt = 1;
 VAR_8->host_mc_decrypt = 1;






 VAR_8->host_open_frag = 1;
 VAR_8->ieee802_1x = 1;

 FUNC_9(&VAR_8->lock);

 FUNC_5(&VAR_8->crypt_info, VAR_9->name, &VAR_8->lock);

 VAR_8->wpa_enabled = 0;
 VAR_8->drop_unencrypted = 0;
 VAR_8->privacy_invoked = 0;

 return VAR_9;

failed_free_wiphy:
 if (!VAR_7)
  FUNC_10(VAR_8->wdev.wiphy);
failed_free_netdev:
 FUNC_4(VAR_9);
failed:
 return ((void*)0);
}
