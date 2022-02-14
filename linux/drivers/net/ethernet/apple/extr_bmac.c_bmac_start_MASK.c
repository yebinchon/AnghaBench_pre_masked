
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bmac_data {int tx_fill; int tx_empty; int lock; int queue; scalar_t__ sleeping; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct bmac_data* FUNC_1 (struct net_device*) ;
 struct sk_buff* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_1)
{
 struct bmac_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 struct sk_buff *VAR_4;
 unsigned long VAR_5;

 if (VAR_2->sleeping)
  return;

 FUNC_3(&VAR_2->lock, VAR_5);
 while (1) {
  VAR_3 = VAR_2->tx_fill + 1;
  if (VAR_3 >= VAR_0)
   VAR_3 = 0;
  if (VAR_3 == VAR_2->tx_empty)
   break;
  VAR_4 = FUNC_2(VAR_2->queue);
  if (VAR_4 == ((void*)0))
   break;
  FUNC_0(VAR_4, VAR_1);
 }
 FUNC_4(&VAR_2->lock, VAR_5);
}
