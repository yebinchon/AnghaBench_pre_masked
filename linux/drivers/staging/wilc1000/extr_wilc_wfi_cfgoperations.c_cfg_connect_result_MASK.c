
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct wilc_vif {int connecting; scalar_t__ iftype; struct wilc* wilc; } ;
struct TYPE_2__ {int local_random; int recv_random; int is_wilc_ie; } ;
struct wilc_priv {struct net_device* dev; int associated_bss; TYPE_1__ p2p; struct host_if_drv* hif_drv; } ;
struct wilc_conn_info {scalar_t__ status; int resp_ies_len; int resp_ies; int req_ies_len; int req_ies; int bssid; } ;
struct wilc {void* sta_ch; } ;
struct net_device {int dummy; } ;
struct host_if_drv {scalar_t__ ifc_up; struct wilc_conn_info conn_info; } ;
typedef enum conn_event { ____Placeholder_conn_event } conn_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct net_device*,int ,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct net_device*,scalar_t__,int *,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int *,int ) ;

__attribute__((used)) static void FUNC_7(enum conn_event VAR_10, u8 VAR_11,
          void *VAR_12)
{
 struct wilc_priv *VAR_13 = VAR_12;
 struct net_device *VAR_14 = VAR_13->dev;
 struct wilc_vif *VAR_15 = FUNC_5(VAR_14);
 struct wilc *VAR_16 = VAR_15->wilc;
 struct host_if_drv *VAR_17 = VAR_13->hif_drv;
 struct wilc_conn_info *VAR_18 = &VAR_17->conn_info;

 VAR_15->connecting = 0;

 if (VAR_10 == VAR_0) {
  u16 VAR_19 = VAR_18->status;

  if (VAR_11 == VAR_6 &&
      VAR_19 == VAR_8) {
   VAR_19 = VAR_9;
   FUNC_6(VAR_13->dev, ((void*)0), VAR_7);

   if (VAR_15->iftype != VAR_4)
    VAR_16->sta_ch = VAR_5;

   FUNC_4(VAR_14, "Unspecified failure\n");
  }

  if (VAR_19 == VAR_8)
   FUNC_3(VAR_13->associated_bss, VAR_18->bssid,
          VAR_2);

  FUNC_0(VAR_14, VAR_18->bssid,
     VAR_18->req_ies,
     VAR_18->req_ies_len,
     VAR_18->resp_ies,
     VAR_18->resp_ies_len, VAR_19,
     VAR_3);
 } else if (VAR_10 == VAR_1) {
  u16 VAR_20 = 0;

  VAR_13->p2p.local_random = 0x01;
  VAR_13->p2p.recv_random = 0x00;
  VAR_13->p2p.is_wilc_ie = 0;
  FUNC_2(VAR_13->associated_bss);
  FUNC_6(VAR_13->dev, ((void*)0), VAR_7);

  if (VAR_15->iftype != VAR_4) {
   VAR_16->sta_ch = VAR_5;
  } else {
   if (VAR_17->ifc_up)
    VAR_20 = 3;
   else
    VAR_20 = 1;
  }

  FUNC_1(VAR_14, VAR_20, ((void*)0), 0, 0, VAR_3);
 }
}
