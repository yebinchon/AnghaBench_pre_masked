
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_bssid_ex {int dummy; } ;
struct __queue {int lock; } ;
struct mlme_priv {struct __queue scanned_queue; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct _adapter*,struct wlan_bssid_ex*) ;
 int FUNC_3 (struct _adapter*,struct wlan_bssid_ex*) ;

__attribute__((used)) static void FUNC_4(struct _adapter *VAR_0,
    struct wlan_bssid_ex *VAR_1)
{
 unsigned long VAR_2;
 struct mlme_priv *VAR_3 = &(((struct _adapter *)VAR_0)->mlmepriv);
 struct __queue *VAR_4 = &VAR_3->scanned_queue;

 FUNC_0(&VAR_4->lock, VAR_2);
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(&VAR_4->lock, VAR_2);
}
