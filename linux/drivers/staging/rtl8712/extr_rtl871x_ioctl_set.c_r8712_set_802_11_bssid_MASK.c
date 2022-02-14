
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int MacAddress; } ;
struct TYPE_4__ {TYPE_1__ network; } ;
struct mlme_priv {int assoc_by_bssid; int lock; int assoc_bssid; TYPE_2__ cur_network; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (struct mlme_priv*,int) ;
 int FUNC_2 (struct _adapter*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int *,int*,int ) ;
 int FUNC_6 (int *,int*,int ) ;
 int FUNC_7 (struct _adapter*) ;
 int FUNC_8 (struct _adapter*) ;
 int FUNC_9 (struct _adapter*) ;
 int FUNC_10 (struct mlme_priv*,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

u8 FUNC_13(struct _adapter *VAR_7, u8 *VAR_8)
{
 unsigned long VAR_9;
 u8 VAR_10 = 1;
 struct mlme_priv *VAR_11 = &VAR_7->mlmepriv;

 if (FUNC_4(VAR_8) || FUNC_3(VAR_8)) {
  VAR_10 = 0;
  return VAR_10;
 }
 FUNC_11(&VAR_11->lock, VAR_9);
 if (FUNC_1(VAR_11, VAR_6 |
     VAR_5)) {
  VAR_10 = FUNC_1(VAR_11, VAR_5);
  goto _Abort_Set_BSSID;
 }
 if (FUNC_1(VAR_11,
     VAR_4 | VAR_1)) {
  if (!FUNC_5(&VAR_11->cur_network.network.MacAddress, VAR_8,
      VAR_0)) {
   if (!FUNC_1(VAR_11, VAR_3))



    goto _Abort_Set_BSSID;
  } else {
   FUNC_7(VAR_7);
   if (FUNC_1(VAR_11, VAR_4))
    FUNC_9(VAR_7);
   FUNC_8(VAR_7);
   if ((FUNC_1(VAR_11,
        VAR_1))) {
    FUNC_0(VAR_11,
           VAR_1);
    FUNC_10(VAR_11, VAR_2);
   }
  }
 }
 FUNC_6(&VAR_11->assoc_bssid, VAR_8, VAR_0);
 VAR_11->assoc_by_bssid = 1;
 VAR_10 = FUNC_2(VAR_7);
 goto done;
_Abort_Set_BSSID:
done:
 FUNC_12(&VAR_11->lock, VAR_9);
 return VAR_10;
}
