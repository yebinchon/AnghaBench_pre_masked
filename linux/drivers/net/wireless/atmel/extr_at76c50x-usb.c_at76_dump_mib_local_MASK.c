
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_local {int preamble_type; int promiscuous_mode; int ssid_size; int txautorate_fallback; int beacon_enable; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,struct mib_local*,int) ;
 int FUNC_2 (struct mib_local*) ;
 struct mib_local* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct at76_priv *VAR_3)
{
 int VAR_4;
 struct mib_local *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return;

 VAR_4 = FUNC_1(VAR_3->udev, VAR_2, VAR_5, sizeof(*VAR_5));
 if (VAR_4 < 0) {
  FUNC_4(VAR_3->hw->wiphy,
     "at76_get_mib (LOCAL) failed: %d\n", VAR_4);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB LOCAL: beacon_enable %d "
   "txautorate_fallback %d ssid_size %d promiscuous_mode %d "
   "preamble_type %d", FUNC_5(VAR_3->hw->wiphy),
   VAR_5->beacon_enable,
   VAR_5->txautorate_fallback, VAR_5->ssid_size, VAR_5->promiscuous_mode,
   VAR_5->preamble_type);
exit:
 FUNC_2(VAR_5);
}
