
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_bssdescriptor {scalar_t__ beacon_buf_size; scalar_t__ oper_mode_offset; scalar_t__ beacon_buf; void* oper_mode; scalar_t__ ext_cap_offset; scalar_t__ bcn_ext_cap; scalar_t__ bss_co_2040_offset; scalar_t__ bcn_bss_co_2040; scalar_t__ vht_info_offset; void* bcn_vht_oper; scalar_t__ vht_cap_offset; void* bcn_vht_cap; scalar_t__ ht_info_offset; struct ieee80211_ht_operation* bcn_ht_oper; scalar_t__ ht_cap_offset; struct ieee80211_ht_cap* bcn_ht_cap; scalar_t__ rsn_offset; struct ieee_types_generic* bcn_rsn_ie; scalar_t__ wpa_offset; struct ieee_types_vendor_specific* bcn_wpa_ie; } ;
struct TYPE_2__ {struct mwifiex_bssdescriptor bss_descriptor; } ;
struct mwifiex_private {scalar_t__ curr_bcn_size; scalar_t__ curr_bcn_buf; int adapter; TYPE_1__ curr_bss_params; } ;
struct ieee_types_vendor_specific {int dummy; } ;
struct ieee_types_generic {int dummy; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,char*,scalar_t__) ;

void
FUNC_4(struct mwifiex_private *VAR_2)
{
 struct mwifiex_bssdescriptor *VAR_3 =
  &VAR_2->curr_bss_params.bss_descriptor;

 if (!VAR_3->beacon_buf_size)
  return;


 if (!VAR_2->curr_bcn_buf ||
     VAR_2->curr_bcn_size != VAR_3->beacon_buf_size) {
  VAR_2->curr_bcn_size = VAR_3->beacon_buf_size;

  FUNC_0(VAR_2->curr_bcn_buf);
  VAR_2->curr_bcn_buf = FUNC_1(VAR_3->beacon_buf_size,
          VAR_0);
  if (!VAR_2->curr_bcn_buf)
   return;
 }

 FUNC_2(VAR_2->curr_bcn_buf, VAR_3->beacon_buf,
        VAR_3->beacon_buf_size);
 FUNC_3(VAR_2->adapter, VAR_1,
      "info: current beacon saved %d\n",
      VAR_2->curr_bcn_size);

 VAR_3->beacon_buf = VAR_2->curr_bcn_buf;


 if (VAR_3->bcn_wpa_ie)
  VAR_3->bcn_wpa_ie =
   (struct ieee_types_vendor_specific *)
   (VAR_3->beacon_buf +
    VAR_3->wpa_offset);

 if (VAR_3->bcn_rsn_ie)
  VAR_3->bcn_rsn_ie = (struct ieee_types_generic *)
   (VAR_3->beacon_buf +
    VAR_3->rsn_offset);

 if (VAR_3->bcn_ht_cap)
  VAR_3->bcn_ht_cap = (struct ieee80211_ht_cap *)
   (VAR_3->beacon_buf +
    VAR_3->ht_cap_offset);

 if (VAR_3->bcn_ht_oper)
  VAR_3->bcn_ht_oper = (struct ieee80211_ht_operation *)
   (VAR_3->beacon_buf +
    VAR_3->ht_info_offset);

 if (VAR_3->bcn_vht_cap)
  VAR_3->bcn_vht_cap = (void *)(VAR_3->beacon_buf +
       VAR_3->vht_cap_offset);

 if (VAR_3->bcn_vht_oper)
  VAR_3->bcn_vht_oper = (void *)(VAR_3->beacon_buf +
        VAR_3->vht_info_offset);

 if (VAR_3->bcn_bss_co_2040)
  VAR_3->bcn_bss_co_2040 =
   (VAR_3->beacon_buf + VAR_3->bss_co_2040_offset);

 if (VAR_3->bcn_ext_cap)
  VAR_3->bcn_ext_cap = VAR_3->beacon_buf +
   VAR_3->ext_cap_offset;

 if (VAR_3->oper_mode)
  VAR_3->oper_mode = (void *)(VAR_3->beacon_buf +
            VAR_3->oper_mode_offset);
}
