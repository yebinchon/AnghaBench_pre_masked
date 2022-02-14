
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vol_interest {scalar_t__ usage; TYPE_1__* server; int srv_link; struct afs_vol_interest* vol_interest; int cb_vlink; } ;
struct afs_net {int dummy; } ;
struct afs_cb_interest {scalar_t__ usage; TYPE_1__* server; int srv_link; struct afs_cb_interest* vol_interest; int cb_vlink; } ;
struct TYPE_2__ {int cb_break_lock; } ;


 int FUNC_0 (struct afs_net*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct afs_vol_interest*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct afs_net *VAR_2, struct afs_cb_interest *VAR_3)
{
 struct afs_vol_interest *VAR_4;

 if (VAR_3 && FUNC_5(&VAR_3->usage)) {
  if (!FUNC_3(&VAR_3->cb_vlink)) {
   FUNC_6(&VAR_3->server->cb_break_lock);

   FUNC_2(&VAR_3->cb_vlink);
   VAR_4 = VAR_3->vol_interest;
   VAR_3->vol_interest = ((void*)0);
   if (--VAR_4->usage == 0)
    FUNC_1(&VAR_4->srv_link);
   else
    VAR_4 = ((void*)0);

   FUNC_7(&VAR_3->server->cb_break_lock);
   if (VAR_4)
    FUNC_4(VAR_4, VAR_1);
   FUNC_0(VAR_2, VAR_3->server, VAR_0);
  }
  FUNC_4(VAR_3, VAR_1);
 }
}
