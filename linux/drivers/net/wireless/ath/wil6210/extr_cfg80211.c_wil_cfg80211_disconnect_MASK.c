
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int locally_generated_disc; int mid; int status; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,int ,int ) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 struct wil6210_priv* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wil6210_priv*,int ,int ,int *,int ,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_5,
       struct net_device *VAR_6,
       u16 VAR_7)
{
 int VAR_8;
 struct wil6210_priv *VAR_9 = FUNC_4(VAR_5);
 struct wil6210_vif *VAR_10 = FUNC_0(VAR_6);

 FUNC_2(VAR_9, "disconnect: reason=%d, mid=%d\n",
       VAR_7, VAR_10->mid);

 if (!(FUNC_1(VAR_4, VAR_10->status) ||
       FUNC_1(VAR_3, VAR_10->status))) {
  FUNC_3(VAR_9, "Disconnect was called while disconnected\n");
  return 0;
 }

 VAR_10->locally_generated_disc = 1;
 VAR_8 = FUNC_5(VAR_9, VAR_1, VAR_10->mid, ((void*)0), 0,
        VAR_2, ((void*)0), 0,
        VAR_0);
 if (VAR_8)
  FUNC_3(VAR_9, "disconnect error %d\n", VAR_8);

 return VAR_8;
}
