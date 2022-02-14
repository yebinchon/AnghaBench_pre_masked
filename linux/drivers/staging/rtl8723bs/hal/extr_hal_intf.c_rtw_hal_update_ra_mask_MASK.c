
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int mac_id; struct adapter* padapter; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_2__ {int (* UpdateRAMaskHandler ) (struct adapter*,int ,int ) ;} ;
struct adapter {TYPE_1__ HalFunc; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,struct sta_info*,int ) ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

void FUNC_3(struct sta_info *VAR_1, u8 VAR_2)
{
 struct adapter *VAR_3;
 struct mlme_priv *VAR_4;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->padapter;

 VAR_4 = &(VAR_3->mlmepriv);

 if (FUNC_1(VAR_4, VAR_0) == 1)
  FUNC_0(VAR_3, VAR_1, VAR_2);
 else {
  if (VAR_3->HalFunc.UpdateRAMaskHandler)
   VAR_3->HalFunc.UpdateRAMaskHandler(VAR_3, VAR_1->mac_id, VAR_2);
 }
}
