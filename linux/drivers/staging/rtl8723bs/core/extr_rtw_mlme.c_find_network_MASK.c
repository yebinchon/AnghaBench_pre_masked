
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int MacAddress; } ;
struct wlan_network {int fixed; TYPE_2__ network; } ;
struct mlme_priv {int scanned_queue; struct wlan_network cur_network; } ;
struct TYPE_3__ {int asoc_sta_count; } ;
struct adapter {TYPE_1__ stapriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 struct wlan_network* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct adapter*,struct wlan_network*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_3)
{
 struct wlan_network *VAR_4 = ((void*)0);
 struct mlme_priv *VAR_5 = &VAR_3->mlmepriv;
 struct wlan_network *VAR_6 = &VAR_5->cur_network;

 VAR_4 = FUNC_2(&VAR_5->scanned_queue, VAR_6->network.MacAddress);
 if (VAR_4)
  VAR_4->fixed = 0;
 else
  FUNC_0(VAR_2, VAR_1, ("rtw_free_assoc_resources : pwlan == NULL\n\n"));


 if (FUNC_1(VAR_5, VAR_0) &&
     (VAR_3->stapriv.asoc_sta_count == 1))
  FUNC_3(VAR_3, VAR_4);
}
