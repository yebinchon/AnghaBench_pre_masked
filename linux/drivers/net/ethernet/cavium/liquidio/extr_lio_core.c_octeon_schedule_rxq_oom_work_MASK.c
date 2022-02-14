
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_droq {size_t q_no; } ;
struct octeon_device {TYPE_1__* props; } ;
struct net_device {int dummy; } ;
struct lio {struct cavium_wq* rxq_status_wq; } ;
struct TYPE_4__ {int work; } ;
struct cavium_wq {TYPE_2__ wk; int wq; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct octeon_device *VAR_1,
      struct octeon_droq *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->props[0].netdev;
 struct lio *VAR_4 = FUNC_0(VAR_3);
 struct cavium_wq *VAR_5 = &VAR_4->rxq_status_wq[VAR_2->q_no];

 FUNC_2(VAR_5->wq, &VAR_5->wk.work,
      FUNC_1(VAR_0));
}
