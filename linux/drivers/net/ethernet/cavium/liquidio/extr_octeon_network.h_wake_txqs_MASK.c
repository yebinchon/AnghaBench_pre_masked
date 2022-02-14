
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int real_num_tx_queues; } ;
struct TYPE_7__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_4__* oct_dev; TYPE_3__ linfo; } ;
struct TYPE_8__ {int num_iqs; } ;
struct TYPE_5__ {int q_no; } ;
struct TYPE_6__ {TYPE_1__ s; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_4__*,int,int ,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_1)
{
 struct lio *VAR_2 = FUNC_0(VAR_1);
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->real_num_tx_queues; VAR_3++) {
  VAR_4 = VAR_2->linfo.txpciq[VAR_3 % VAR_2->oct_dev->num_iqs].s.q_no;

  if (FUNC_2(VAR_1, VAR_3)) {
   FUNC_1(VAR_2->oct_dev, VAR_4,
        VAR_0, 1);
   FUNC_3(VAR_1, VAR_3);
  }
 }
}
