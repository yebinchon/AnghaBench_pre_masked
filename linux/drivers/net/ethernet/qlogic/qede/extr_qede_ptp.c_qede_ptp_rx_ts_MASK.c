
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct qede_ptp {int lock; int tc; TYPE_1__* ops; } ;
struct qede_dev {int cdev; struct qede_ptp* ptp; } ;
struct TYPE_4__ {int hwtstamp; } ;
struct TYPE_3__ {int (* read_rx_ts ) (int ,int *) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct qede_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct qede_ptp *VAR_3;
 u64 VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_1->ptp;
 if (!VAR_3)
  return;

 FUNC_4(&VAR_3->lock);
 VAR_6 = VAR_3->ops->read_rx_ts(VAR_1->cdev, &VAR_4);
 if (VAR_6) {
  FUNC_5(&VAR_3->lock);
  FUNC_0(VAR_1, "Invalid Rx timestamp\n");
  return;
 }

 VAR_5 = FUNC_7(&VAR_3->tc, VAR_4);
 FUNC_5(&VAR_3->lock);
 FUNC_3(VAR_2)->hwtstamp = FUNC_2(VAR_5);
 FUNC_1(VAR_1, VAR_0,
     "Rx timestamp, timestamp cycles = %llu, ns = %llu\n",
     VAR_4, VAR_5);
}
