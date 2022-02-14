
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tx_servq {int dummy; } ;
struct sta_priv {int dummy; } ;
struct TYPE_4__ {struct tx_servq be_q; } ;
struct sta_info {int mac_id; TYPE_1__ sta_xmitpriv; } ;
struct adapter {struct sta_priv stapriv; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
typedef TYPE_2__ NDIS_802_11_MAC_ADDRESS ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sta_info* FUNC_1 (struct sta_priv*,TYPE_2__) ;

u32 FUNC_2(struct adapter *VAR_4)
{

 struct sta_info *VAR_5;
 struct tx_servq *VAR_6;
 u32 VAR_7 = VAR_1;
 NDIS_802_11_MAC_ADDRESS VAR_8 = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

 struct sta_priv *VAR_9 = &VAR_4->stapriv;


 VAR_5 = FUNC_1(VAR_9, VAR_8);

 if (!VAR_5) {
  VAR_7 = VAR_0;
  FUNC_0(VAR_3, VAR_2, ("rtw_alloc_stainfo fail"));
  goto exit;
 }


 VAR_5->mac_id = 1;

 VAR_6 = &(VAR_5->sta_xmitpriv.be_q);
exit:
 return VAR_1;
}
