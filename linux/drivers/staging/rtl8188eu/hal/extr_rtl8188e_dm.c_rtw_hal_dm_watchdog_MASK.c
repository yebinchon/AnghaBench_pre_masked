
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct TYPE_4__ {int asoc_sta_count; } ;
struct adapter {int hw_init_completed; TYPE_2__* HalData; TYPE_1__ stapriv; struct mlme_priv mlmepriv; } ;
struct TYPE_6__ {int bLinked; } ;
struct TYPE_5__ {TYPE_3__ odmpriv; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int) ;

void FUNC_2(struct adapter *VAR_4)
{
 u8 VAR_5 = 0;
 struct mlme_priv *VAR_6 = ((void*)0);
 u8 VAR_7 = 0;

 VAR_5 = VAR_4->hw_init_completed;

 if (!VAR_5)
  goto skip_dm;


 VAR_6 = &VAR_4->mlmepriv;

 if ((FUNC_1(VAR_6, VAR_2)) ||
     (FUNC_1(VAR_6, VAR_1 |
      VAR_0))) {
  if (VAR_4->stapriv.asoc_sta_count > 2)
   VAR_7 = 1;
 } else {
  if (FUNC_1(VAR_6, VAR_3))
   VAR_7 = 1;
 }

 VAR_4->HalData->odmpriv.bLinked = VAR_7;
 FUNC_0(&VAR_4->HalData->odmpriv);
skip_dm:


 return;
}
