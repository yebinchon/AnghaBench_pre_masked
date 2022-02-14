
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wil6210_vif {scalar_t__ mid; int enable_tx_key_worker; int probe_client_worker; int disconnect_worker; int connect_timer; } ;
struct wil6210_priv {int wmi_event_worker; int vif_mutex; int napi_tx; int napi_rx; int status; struct wil6210_vif** vifs; int mutex; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 size_t FUNC_1 (struct wil6210_priv*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*) ;
 struct net_device* FUNC_10 (struct wil6210_vif*) ;
 int FUNC_11 (struct wil6210_vif*,int *,int ) ;
 int FUNC_12 (struct wil6210_priv*,char*,size_t) ;
 int FUNC_13 (struct wil6210_priv*,int,int) ;
 int FUNC_14 (struct wil6210_vif*) ;
 int VAR_1 ;
 int FUNC_15 () ;
 int FUNC_16 (struct wil6210_priv*,scalar_t__) ;

void FUNC_17(struct wil6210_priv *VAR_2, u8 VAR_3)
{
 struct wil6210_vif *VAR_4;
 struct net_device *VAR_5;
 bool VAR_6 = FUNC_13(VAR_2, 1, 0);

 FUNC_0();
 if (VAR_3 >= FUNC_1(VAR_2)) {
  FUNC_12(VAR_2, "invalid MID: %d\n", VAR_3);
  return;
 }

 VAR_4 = VAR_2->vifs[VAR_3];
 if (!VAR_4) {
  FUNC_12(VAR_2, "MID %d not registered\n", VAR_3);
  return;
 }

 FUNC_5(&VAR_2->mutex);
 FUNC_11(VAR_4, ((void*)0), VAR_0);
 FUNC_6(&VAR_2->mutex);

 VAR_5 = FUNC_10(VAR_4);



 FUNC_9(VAR_5);

 if (VAR_6 && VAR_4->mid != 0)
  FUNC_16(VAR_2, VAR_4->mid);


 FUNC_5(&VAR_2->vif_mutex);
 VAR_2->vifs[VAR_3] = ((void*)0);

 FUNC_15();
 if (FUNC_8(VAR_1, VAR_2->status)) {
  FUNC_7(&VAR_2->napi_rx);
  FUNC_7(&VAR_2->napi_tx);
 }
 FUNC_6(&VAR_2->vif_mutex);

 FUNC_4(&VAR_2->wmi_event_worker);
 FUNC_3(&VAR_4->connect_timer);
 FUNC_2(&VAR_4->disconnect_worker);
 FUNC_14(VAR_4);
 FUNC_2(&VAR_4->probe_client_worker);
 FUNC_2(&VAR_4->enable_tx_key_worker);




}
