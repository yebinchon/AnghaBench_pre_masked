
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_priv {int max_num_sta; scalar_t__* sta_aid; } ;
struct mlme_priv {int dummy; } ;
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct adapter *VAR_3)
{
 u8 VAR_4;





 struct mlme_ext_priv *VAR_5 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &VAR_5->mlmext_info;
 {
  for (VAR_4 = VAR_1-1; VAR_4 >= VAR_0; VAR_4--) {
   if (VAR_6->FW_sta_info[VAR_4].status == 1)
    break;
  }
 }
 return VAR_4;
}
