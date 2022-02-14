
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int real_num_tx_queues; } ;
struct TYPE_4__ {scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {TYPE_3__ linfo; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 struct lio *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 if (VAR_1->linfo.link.s.link_up) {
  for (VAR_2 = 0; VAR_2 < VAR_0->real_num_tx_queues; VAR_2++)
   FUNC_1(VAR_0, VAR_2);
 }
}
