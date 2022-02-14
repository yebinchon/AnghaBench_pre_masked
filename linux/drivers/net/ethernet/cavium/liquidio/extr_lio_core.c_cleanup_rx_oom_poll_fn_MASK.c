
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {int num_oqs; } ;
struct net_device {int dummy; } ;
struct lio {struct cavium_wq* rxq_status_wq; struct octeon_device* oct_dev; } ;
struct TYPE_2__ {int work; } ;
struct cavium_wq {int * wq; TYPE_1__ wk; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct lio *VAR_1 = FUNC_0(VAR_0);
 struct octeon_device *VAR_2 = VAR_1->oct_dev;
 struct cavium_wq *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_oqs; VAR_4++) {
  VAR_3 = &VAR_1->rxq_status_wq[VAR_4];
  if (VAR_3->wq) {
   FUNC_1(&VAR_3->wk.work);
   FUNC_3(VAR_3->wq);
   FUNC_2(VAR_3->wq);
   VAR_3->wq = ((void*)0);
  }
 }
}
