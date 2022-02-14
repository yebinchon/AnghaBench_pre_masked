
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {scalar_t__ dev_id; } ;
struct gemini_ethernet_port {int rxq_order; struct net_device* netdev; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {unsigned int freeq_order; int irq_lock; scalar_t__ base; scalar_t__ freeq_ring; int dev; TYPE_2__* port0; TYPE_1__* port1; } ;
struct TYPE_4__ {struct net_device* netdev; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct gemini_ethernet*) ;
 int FUNC_2 (struct gemini_ethernet*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__,int,int) ;
 struct gemini_ethernet_port* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct gemini_ethernet_port *VAR_3)
{
 struct gemini_ethernet *VAR_4 = VAR_3->geth;
 struct net_device *VAR_5 = VAR_3->netdev;
 struct gemini_ethernet_port *VAR_6;
 struct net_device *VAR_7;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (VAR_5->dev_id == 0)
  VAR_7 = VAR_4->port1->netdev;
 else
  VAR_7 = VAR_4->port0->netdev;

 if (VAR_7 && FUNC_7(VAR_7))
  return -VAR_0;

 VAR_8 = 1 << (VAR_3->rxq_order + 1);
 FUNC_5(VAR_5, "port %d size: %d order %d\n",
     VAR_5->dev_id,
     VAR_8,
     VAR_3->rxq_order);
 if (VAR_7) {
  VAR_6 = FUNC_6(VAR_7);
  VAR_8 += 1 << (VAR_6->rxq_order + 1);
  FUNC_5(VAR_7, "port %d size: %d order %d\n",
      VAR_7->dev_id,
      (1 << (VAR_6->rxq_order + 1)),
      VAR_6->rxq_order);
 }

 VAR_9 = FUNC_4(15, FUNC_3(VAR_8 - 1) + 1);
 FUNC_0(VAR_4->dev, "set shared queue to size %d order %d\n",
  VAR_8, VAR_9);
 if (VAR_4->freeq_order == VAR_9)
  return 0;

 FUNC_9(&VAR_4->irq_lock, VAR_10);


 VAR_11 = FUNC_8(VAR_4->base + VAR_1);
 VAR_11 &= ~VAR_2;
 FUNC_11(VAR_11, VAR_4->base + VAR_1);
 FUNC_10(&VAR_4->irq_lock, VAR_10);


 if (VAR_4->freeq_ring)
  FUNC_1(VAR_4);


 VAR_4->freeq_order = VAR_9;
 VAR_12 = FUNC_2(VAR_4);





 FUNC_9(&VAR_4->irq_lock, VAR_10);
 VAR_11 |= VAR_2;
 FUNC_11(VAR_11, VAR_4->base + VAR_1);
 FUNC_10(&VAR_4->irq_lock, VAR_10);

 return VAR_12;
}
