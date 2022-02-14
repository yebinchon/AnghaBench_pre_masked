
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_txe_notify_event {int pkts; int rate; } ;
struct wmi {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; scalar_t__ sme_state; int txe_intvl; int bssid; int ndev; TYPE_1__* ar; } ;
struct TYPE_2__ {int fw_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wmi *VAR_8, u8 *VAR_9, int VAR_10,
       struct ath6kl_vif *VAR_11)
{
 struct wmi_txe_notify_event *VAR_12;
 u32 VAR_13, VAR_14;

 if (VAR_10 < sizeof(*VAR_12))
  return -VAR_2;

 if (VAR_11->nw_type != VAR_6 ||
     !FUNC_3(VAR_1,
        VAR_11->ar->fw_capabilities))
  return -VAR_4;

 if (VAR_11->sme_state != VAR_7)
  return -VAR_3;

 VAR_12 = (struct wmi_txe_notify_event *) VAR_9;
 VAR_13 = FUNC_2(VAR_12->rate);
 VAR_14 = FUNC_2(VAR_12->pkts);

 FUNC_0(VAR_0, "TXE notify event: peer %pM rate %d%% pkts %d intvl %ds\n",
     VAR_11->bssid, VAR_13, VAR_14, VAR_11->txe_intvl);

 FUNC_1(VAR_11->ndev, VAR_11->bssid, VAR_14,
    VAR_13, VAR_11->txe_intvl, VAR_5);

 return 0;
}
