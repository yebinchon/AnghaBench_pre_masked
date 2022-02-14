
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_link_state {int up; } ;
struct efx_nic {int mac_lock; TYPE_1__* type; struct efx_link_state link_state; } ;
struct TYPE_2__ {int (* check_mac_fault ) (struct efx_nic*) ;int (* monitor ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_2)
{
 struct efx_link_state *VAR_3 = &VAR_2->link_state;
 int VAR_4, VAR_5 = 0;
 bool VAR_6;

 for (VAR_4 = 0; VAR_4 < 40; VAR_4++) {
  FUNC_2(VAR_1 / 10);

  if (VAR_2->type->monitor != ((void*)0)) {
   FUNC_0(&VAR_2->mac_lock);
   VAR_2->type->monitor(VAR_2);
   FUNC_1(&VAR_2->mac_lock);
  }

  FUNC_0(&VAR_2->mac_lock);
  VAR_6 = VAR_3->up;
  if (VAR_6)
   VAR_6 = !VAR_2->type->check_mac_fault(VAR_2);
  FUNC_1(&VAR_2->mac_lock);

  if (VAR_6) {
   if (++VAR_5 == 2)
    return 0;
  } else {
   VAR_5 = 0;
  }
 }

 return -VAR_0;
}
