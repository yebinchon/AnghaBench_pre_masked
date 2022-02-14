
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct wil_ring_tx_data {int dot1x_open; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int** ring2cid_tid; struct wil_ring_tx_data* ring_tx_data; } ;
struct station_parameters {int sta_flags_mask; int sta_flags_set; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wil6210_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;
 int FUNC_5 (struct wil6210_priv*,int ,int const*) ;
 struct wil6210_priv* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_4,
           struct net_device *VAR_5,
           const u8 *VAR_6,
           struct station_parameters *VAR_7)
{
 struct wil6210_vif *VAR_8 = FUNC_2(VAR_5);
 struct wil6210_priv *VAR_9 = FUNC_6(VAR_4);
 int VAR_10;
 int VAR_11, VAR_12;
 struct wil_ring_tx_data *VAR_13 = ((void*)0);

 FUNC_3(VAR_9, "change station %pM mask 0x%x set 0x%x mid %d\n",
       VAR_6, VAR_7->sta_flags_mask, VAR_7->sta_flags_set,
       VAR_8->mid);

 if (!VAR_3) {
  FUNC_3(VAR_9, "not supported with AP SME enabled\n");
  return -VAR_1;
 }

 if (!(VAR_7->sta_flags_mask & FUNC_1(VAR_2)))
  return 0;

 VAR_11 = FUNC_5(VAR_9, VAR_8->mid, VAR_6);
 if (VAR_11 < 0) {
  FUNC_4(VAR_9, "station not found\n");
  return -VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9->ring2cid_tid); VAR_12++)
  if (VAR_9->ring2cid_tid[VAR_12][0] == VAR_11) {
   VAR_13 = &VAR_9->ring_tx_data[VAR_12];
   break;
  }

 if (!VAR_13) {
  FUNC_4(VAR_9, "ring data not found\n");
  return -VAR_0;
 }

 VAR_10 = VAR_7->sta_flags_set & FUNC_1(VAR_2);
 VAR_13->dot1x_open = VAR_10 ? 1 : 0;
 FUNC_3(VAR_9, "cid %d ring %d authorize %d\n", VAR_11, VAR_12,
       VAR_13->dot1x_open);

 return 0;
}
