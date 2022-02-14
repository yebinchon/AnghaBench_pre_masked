
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_6__ {int lock; } ;
struct macvlan_port {int bc_work; TYPE_2__ bc_queue; } ;
struct macvlan_dev {int dev; } ;
struct TYPE_7__ {struct macvlan_dev const* src; } ;
struct TYPE_5__ {int rx_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct macvlan_port *VAR_3,
          const struct macvlan_dev *VAR_4,
          struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_6(VAR_5, VAR_1);
 if (!VAR_6)
  goto err;

 FUNC_0(VAR_6)->src = VAR_4;

 FUNC_8(&VAR_3->bc_queue.lock);
 if (FUNC_7(&VAR_3->bc_queue) < VAR_2) {
  if (VAR_4)
   FUNC_3(VAR_4->dev);
  FUNC_1(&VAR_3->bc_queue, VAR_6);
  VAR_7 = 0;
 }
 FUNC_9(&VAR_3->bc_queue.lock);

 if (VAR_7)
  goto free_nskb;

 FUNC_5(&VAR_3->bc_work);
 return;

free_nskb:
 FUNC_4(VAR_6);
err:
 FUNC_2(&VAR_5->dev->rx_dropped);
}
