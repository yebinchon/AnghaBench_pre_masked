
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int* ext_capab; } ;
struct ieee80211_mcs_info {int* rx_mask; } ;
struct TYPE_6__ {int cap_info; struct ieee80211_mcs_info mcs; } ;
struct TYPE_9__ {TYPE_3__ extcap; TYPE_1__ ht_capb; } ;
struct mwifiex_sta_node {scalar_t__ tdls_status; int is_11n_enabled; int rx_seq; TYPE_4__ tdls_cap; int * ampdu_sta; int max_amsdu; } ;
struct TYPE_10__ {int ra_list_spinlock; } ;
struct mwifiex_private {TYPE_5__ wmm; int adapter; TYPE_2__* aggr_prio_tbl; } ;
struct TYPE_7__ {int ampdu_user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct mwifiex_private*) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*,int const*,scalar_t__) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (struct mwifiex_private*) ;
 int FUNC_7 (int ,int ,char*,int const*) ;
 int FUNC_8 (struct mwifiex_private*,int const*) ;
 struct mwifiex_sta_node* FUNC_9 (struct mwifiex_private*,int const*) ;
 int FUNC_10 (struct mwifiex_private*,int const*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct mwifiex_private *VAR_12, const u8 *VAR_13)
{
 struct mwifiex_sta_node *VAR_14;
 struct ieee80211_mcs_info VAR_15;
 int VAR_16;

 VAR_14 = FUNC_9(VAR_12, VAR_13);

 if (VAR_14 && (VAR_14->tdls_status != VAR_10)) {
  FUNC_7(VAR_12->adapter, VAR_4,
       "tdls: enable link %pM success\n", VAR_13);

  VAR_14->tdls_status = VAR_9;

  VAR_15 = VAR_14->tdls_cap.ht_capb.mcs;
  if (VAR_15.rx_mask[0] != 0xff)
   VAR_14->is_11n_enabled = 1;
  if (VAR_14->is_11n_enabled) {
   if (FUNC_0(VAR_14->tdls_cap.ht_capb.cap_info) &
       VAR_2)
    VAR_14->max_amsdu =
     VAR_6;
   else
    VAR_14->max_amsdu =
     VAR_5;

   for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
    VAR_14->ampdu_sta[VAR_16] =
           VAR_12->aggr_prio_tbl[VAR_16].ampdu_user;
  } else {
   for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
    VAR_14->ampdu_sta[VAR_16] = VAR_0;
  }
  if (VAR_14->tdls_cap.extcap.ext_capab[3] &
      VAR_11) {
   FUNC_6(VAR_12);
   FUNC_5(VAR_12);
  }

  FUNC_1(VAR_14->rx_seq, 0xff, sizeof(VAR_14->rx_seq));
  FUNC_10(VAR_12, VAR_13, VAR_9);
  FUNC_4(VAR_12, VAR_13,
           VAR_9);
 } else {
  FUNC_7(VAR_12->adapter, VAR_1,
       "tdls: enable link %pM failed\n", VAR_13);
  if (VAR_14) {
   FUNC_2(VAR_12);
   FUNC_11(&VAR_12->wmm.ra_list_spinlock);
   FUNC_3(VAR_12);
   FUNC_12(&VAR_12->wmm.ra_list_spinlock);
   FUNC_8(VAR_12, VAR_13);
  }
  FUNC_10(VAR_12, VAR_13, VAR_7);
  FUNC_4(VAR_12, VAR_13,
           VAR_8);

  return -1;
 }

 return 0;
}
