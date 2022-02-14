
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct cavium_wq {scalar_t__ wq; TYPE_1__ wk; } ;
struct lio {struct cavium_wq sync_octeon_time_wq; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_0)
{
 struct lio *VAR_1 = FUNC_0(VAR_0);
 struct cavium_wq *VAR_2 = &VAR_1->sync_octeon_time_wq;

 if (VAR_2->wq) {
  FUNC_1(&VAR_2->wk.work);
  FUNC_2(VAR_2->wq);
 }
}
