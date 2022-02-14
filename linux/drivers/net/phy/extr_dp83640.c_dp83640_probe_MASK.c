
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; int dev; int bus; } ;
struct phy_device {TYPE_2__ mdio; struct dp83640_private* priv; } ;
struct dp83640_private {int list; struct dp83640_clock* clock; int tx_queue; int rx_queue; int rx_lock; int rxpool; TYPE_1__* rx_pool_data; int rxts; int ts_work; struct phy_device* phydev; } ;
struct dp83640_clock {struct dp83640_private* chosen; int phylist; int ptp_clock; int caps; } ;
struct TYPE_3__ {int list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct dp83640_clock*,struct phy_device*) ;
 struct dp83640_clock* FUNC_5 (int ) ;
 int FUNC_6 (struct dp83640_clock*) ;
 int FUNC_7 (struct dp83640_private*) ;
 struct dp83640_private* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct phy_device *VAR_5)
{
 struct dp83640_clock *VAR_6;
 struct dp83640_private *VAR_7;
 int VAR_8 = -VAR_1, VAR_9;

 if (VAR_5->mdio.addr == VAR_0)
  return 0;

 VAR_6 = FUNC_5(VAR_5->mdio.bus);
 if (!VAR_6)
  goto no_clock;

 VAR_7 = FUNC_8(sizeof(struct dp83640_private), VAR_2);
 if (!VAR_7)
  goto no_memory;

 VAR_7->phydev = VAR_5;
 FUNC_0(&VAR_7->ts_work, VAR_4);

 FUNC_1(&VAR_7->rxts);
 FUNC_1(&VAR_7->rxpool);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_9(&VAR_7->rx_pool_data[VAR_9].list, &VAR_7->rxpool);

 VAR_5->priv = VAR_7;

 FUNC_13(&VAR_7->rx_lock);
 FUNC_12(&VAR_7->rx_queue);
 FUNC_12(&VAR_7->tx_queue);

 VAR_7->clock = VAR_6;

 if (FUNC_4(VAR_6, VAR_5)) {
  VAR_6->chosen = VAR_7;
  VAR_6->ptp_clock = FUNC_11(&VAR_6->caps,
            &VAR_5->mdio.dev);
  if (FUNC_2(VAR_6->ptp_clock)) {
   VAR_8 = FUNC_3(VAR_6->ptp_clock);
   goto no_register;
  }
 } else
  FUNC_10(&VAR_7->list, &VAR_6->phylist);

 FUNC_6(VAR_6);
 return 0;

no_register:
 VAR_6->chosen = ((void*)0);
 FUNC_7(VAR_7);
no_memory:
 FUNC_6(VAR_6);
no_clock:
 return VAR_8;
}
