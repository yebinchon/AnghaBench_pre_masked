
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* flowctrl ) (int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct cfspi {int flow_off_sent; scalar_t__ qd_high_mark; int ndev; TYPE_1__ cfdev; TYPE_2__ qhead; int lock; int wait; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfspi* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct cfspi *VAR_4 = ((void*)0);
 unsigned long VAR_5;
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3);

 FUNC_1(&VAR_4->qhead, VAR_2);

 FUNC_2(&VAR_4->lock, VAR_5);
 if (!FUNC_5(VAR_1, &VAR_4->state)) {

  FUNC_6(&VAR_4->wait);
 }
 FUNC_3(&VAR_4->lock, VAR_5);


 if (!VAR_4->flow_off_sent &&
  VAR_4->qhead.qlen > VAR_4->qd_high_mark &&
  VAR_4->cfdev.flowctrl) {
  VAR_4->flow_off_sent = 1;
  VAR_4->cfdev.flowctrl(VAR_4->ndev, 0);
 }

 return 0;
}
