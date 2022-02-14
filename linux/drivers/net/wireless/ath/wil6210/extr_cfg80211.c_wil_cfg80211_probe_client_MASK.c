
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wiphy {int dummy; } ;
struct wil_probe_client_req {int cid; int cookie; int list; } ;
struct wil6210_vif {int probe_client_worker; int probe_client_mutex; int probe_client_pending; int mid; } ;
struct wil6210_priv {int wq_service; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wil_probe_client_req* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wil6210_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct wil6210_priv*,char*,int const*,int,int ) ;
 int FUNC_7 (struct wil6210_priv*,int ,int const*) ;
 struct wil6210_priv* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_3,
         struct net_device *VAR_4,
         const u8 *VAR_5, u64 *VAR_6)
{
 struct wil6210_priv *VAR_7 = FUNC_8(VAR_3);
 struct wil6210_vif *VAR_8 = FUNC_4(VAR_4);
 struct wil_probe_client_req *VAR_9;
 int VAR_10 = FUNC_7(VAR_7, VAR_8->mid, VAR_5);

 FUNC_6(VAR_7, "probe_client: %pM => CID %d MID %d\n",
       VAR_5, VAR_10, VAR_8->mid);

 if (VAR_10 < 0)
  return -VAR_0;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->cid = VAR_10;
 VAR_9->cookie = VAR_10;

 FUNC_2(&VAR_8->probe_client_mutex);
 FUNC_1(&VAR_9->list, &VAR_8->probe_client_pending);
 FUNC_3(&VAR_8->probe_client_mutex);

 *VAR_6 = VAR_9->cookie;
 FUNC_5(VAR_7->wq_service, &VAR_8->probe_client_worker);
 return 0;
}
