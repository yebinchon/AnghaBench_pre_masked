
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {size_t offload_handle; int dev; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct nsim_sa {int dummy; } ;
struct nsim_ipsec {int count; TYPE_2__* sa; } ;
struct netdevsim {int netdev; struct nsim_ipsec ipsec; } ;
struct TYPE_4__ {int used; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 struct netdevsim* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xfrm_state *VAR_1)
{
 struct netdevsim *VAR_2 = FUNC_2(VAR_1->xso.dev);
 struct nsim_ipsec *VAR_3 = &VAR_2->ipsec;
 u16 VAR_4;

 VAR_4 = VAR_1->xso.offload_handle & ~VAR_0;
 if (!VAR_3->sa[VAR_4].used) {
  FUNC_1(VAR_2->netdev, "Invalid SA for delete sa_idx=%d\n",
      VAR_4);
  return;
 }

 FUNC_0(&VAR_3->sa[VAR_4], 0, sizeof(struct nsim_sa));
 VAR_3->count--;
}
