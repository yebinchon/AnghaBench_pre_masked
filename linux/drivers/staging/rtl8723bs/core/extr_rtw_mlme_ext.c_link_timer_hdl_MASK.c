
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct mlme_ext_info {int state; scalar_t__ reauth_count; int auth_seq; scalar_t__ reassoc_count; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {int link_timer; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 struct adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int *,int ) ;
 TYPE_1__ VAR_8 ;
 struct adapter* VAR_9 ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct mlme_ext_priv*,int ) ;

void FUNC_6(struct timer_list *VAR_10)
{
 struct adapter *VAR_11 =
  FUNC_1(VAR_11, VAR_10, VAR_8.link_timer);



 struct mlme_ext_priv *VAR_12 = &VAR_11->mlmeextpriv;
 struct mlme_ext_info *VAR_13 = &(VAR_12->mlmext_info);



 if (VAR_13->state & VAR_5) {
  FUNC_0("link_timer_hdl:no beacon while connecting\n");
  VAR_13->state = VAR_7;
  FUNC_4(VAR_11, -3);
 } else if (VAR_13->state & VAR_6) {

  if (++VAR_13->reauth_count > VAR_2) {


    VAR_13->state = 0;
    FUNC_4(VAR_11, -1);
    return;






  }

  FUNC_0("link_timer_hdl: auth timeout and try again\n");
  VAR_13->auth_seq = 1;
  FUNC_3(VAR_11, ((void*)0), 0);
  FUNC_5(VAR_12, VAR_3);
 } else if (VAR_13->state & VAR_4) {

  if (++VAR_13->reassoc_count > VAR_0) {
   VAR_13->state = VAR_7;
   FUNC_4(VAR_11, -2);
   return;
  }

  FUNC_0("link_timer_hdl: assoc timeout and try again\n");
  FUNC_2(VAR_11);
  FUNC_5(VAR_12, VAR_1);
 }

 return;
}
