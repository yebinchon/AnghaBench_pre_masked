
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct stassoc_event {int cam_id; int macaddr; } ;
struct sta_info {int ieee8021x_blocked; int XPrivacy; int mac_id; scalar_t__ qos_option; } ;
struct mlme_priv {int lock; } ;
struct TYPE_5__ {int asoc_sta_count; } ;
struct TYPE_4__ {int AuthAlgrthm; int PrivacyAlgrthm; } ;
struct _adapter {TYPE_2__ stapriv; TYPE_1__ securitypriv; int acl_list; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 struct sta_info* FUNC_3 (TYPE_2__*,int ) ;
 struct sta_info* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct _adapter *VAR_2, u8 *VAR_3)
{
 unsigned long VAR_4;
 struct sta_info *VAR_5;
 struct mlme_priv *VAR_6 = &(VAR_2->mlmepriv);
 struct stassoc_event *VAR_7 = (struct stassoc_event *)VAR_3;


 if (!FUNC_2(&VAR_2->acl_list, VAR_7->macaddr))
  return;
 VAR_5 = FUNC_4(&VAR_2->stapriv, VAR_7->macaddr);
 if (VAR_5 != ((void*)0)) {




  return;
 }

 VAR_5 = FUNC_3(&VAR_2->stapriv, VAR_7->macaddr);
 if (VAR_5 == ((void*)0))
  return;

 VAR_5->qos_option = 0;
 VAR_5->mac_id = FUNC_1(VAR_7->cam_id);


 if (VAR_2->securitypriv.AuthAlgrthm == 2)
  VAR_5->XPrivacy = VAR_2->securitypriv.PrivacyAlgrthm;
 VAR_5->ieee8021x_blocked = 0;
 FUNC_6(&VAR_6->lock, VAR_4);
 if (FUNC_0(VAR_6, VAR_0) ||
     FUNC_0(VAR_6, VAR_1)) {
  if (VAR_2->stapriv.asoc_sta_count == 2) {

   FUNC_5(VAR_2);
  }
 }
 FUNC_7(&VAR_6->lock, VAR_4);
}
