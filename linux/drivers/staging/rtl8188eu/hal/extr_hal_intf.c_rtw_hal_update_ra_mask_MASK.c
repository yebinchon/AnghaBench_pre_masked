
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sta_priv {struct sta_info** sta_aid; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct adapter {struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct adapter*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,struct sta_info*,int ) ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;

void FUNC_3(struct adapter *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_1->mlmepriv;

 if (FUNC_2(VAR_4, VAR_0)) {
 } else {
  FUNC_0(VAR_1, VAR_2, VAR_3);
 }
}
