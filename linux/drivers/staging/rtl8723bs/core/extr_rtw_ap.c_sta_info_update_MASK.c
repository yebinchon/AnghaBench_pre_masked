
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ht_option; } ;
struct sta_info {int flags; int qos_option; TYPE_3__ htpriv; } ;
struct TYPE_5__ {int ht_option; } ;
struct TYPE_4__ {scalar_t__ qos_option; } ;
struct mlme_priv {TYPE_2__ htpriv; TYPE_1__ qospriv; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct sta_info*) ;

void FUNC_1(struct adapter *VAR_2, struct sta_info *VAR_3)
{
 int VAR_4 = VAR_3->flags;
 struct mlme_priv *VAR_5 = &(VAR_2->mlmepriv);


 if (VAR_1 & VAR_4)
  VAR_3->qos_option = 1;
 else
  VAR_3->qos_option = 0;

 if (VAR_5->qospriv.qos_option == 0)
  VAR_3->qos_option = 0;


 if (VAR_0 & VAR_4) {
  VAR_3->htpriv.ht_option = 1;
  VAR_3->qos_option = 1;
 } else {
  VAR_3->htpriv.ht_option = 0;
 }

 if (!VAR_5->htpriv.ht_option)
  VAR_3->htpriv.ht_option = 0;

 FUNC_0(VAR_2, VAR_3);
}
