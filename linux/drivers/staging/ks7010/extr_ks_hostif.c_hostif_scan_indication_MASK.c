
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int size; TYPE_2__* ap; } ;
struct ks_wlan_private {int scan_ind_count; int net_dev; TYPE_1__ aplist; scalar_t__ rxp; } ;
struct ap_info {scalar_t__ frame_type; int bssid; } ;
struct TYPE_4__ {int * bssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ks_wlan_private*,struct ap_info*,TYPE_2__*) ;
 int FUNC_2 (int ,char*,int,...) ;

__attribute__((used)) static
void FUNC_3(struct ks_wlan_private *VAR_2)
{
 int VAR_3;
 struct ap_info *VAR_4;

 FUNC_2(VAR_2->net_dev,
     "scan_ind_count = %d\n", VAR_2->scan_ind_count);
 VAR_4 = (struct ap_info *)(VAR_2->rxp);

 if (VAR_2->scan_ind_count) {

  for (VAR_3 = 0; VAR_3 < VAR_2->aplist.size; VAR_3++) {
   u8 *VAR_5 = VAR_2->aplist.ap[VAR_3].bssid;

   if (FUNC_0(VAR_4->bssid, VAR_5))
    continue;

   if (VAR_4->frame_type == VAR_0)
    FUNC_1(VAR_2, VAR_4,
         &VAR_2->aplist.ap[VAR_3]);
   return;
  }
 }
 VAR_2->scan_ind_count++;
 if (VAR_2->scan_ind_count < VAR_1 + 1) {
  FUNC_2(VAR_2->net_dev, " scan_ind_count=%d :: aplist.size=%d\n",
      VAR_2->scan_ind_count, VAR_2->aplist.size);
  FUNC_1(VAR_2, (struct ap_info *)(VAR_2->rxp),
       &VAR_2->aplist.ap[VAR_2->scan_ind_count - 1]);
  VAR_2->aplist.size = VAR_2->scan_ind_count;
 } else {
  FUNC_2(VAR_2->net_dev, " count over :: scan_ind_count=%d\n",
      VAR_2->scan_ind_count);
 }
}
