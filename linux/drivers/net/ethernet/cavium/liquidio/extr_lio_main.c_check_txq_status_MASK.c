
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_4__* oct_dev; TYPE_5__* netdev; TYPE_3__ linfo; } ;
struct TYPE_12__ {int real_num_tx_queues; } ;
struct TYPE_11__ {int num_iqs; } ;
struct TYPE_8__ {int q_no; } ;
struct TYPE_9__ {TYPE_1__ s; } ;


 int FUNC_0 (TYPE_4__*,int,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_4(struct lio *VAR_1)
{
 int VAR_2 = VAR_1->netdev->real_num_tx_queues;
 int VAR_3 = 0;
 int VAR_4, VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_1->linfo.txpciq[VAR_4 %
   VAR_1->oct_dev->num_iqs].s.q_no;
  if (FUNC_3(VAR_1->oct_dev, VAR_5))
   continue;
  if (FUNC_1(VAR_1->netdev, VAR_4)) {
   FUNC_2(VAR_1->netdev, VAR_4);
   FUNC_0(VAR_1->oct_dev, VAR_5,
        VAR_0, 1);
   VAR_3++;
  }
 }

 return VAR_3;
}
