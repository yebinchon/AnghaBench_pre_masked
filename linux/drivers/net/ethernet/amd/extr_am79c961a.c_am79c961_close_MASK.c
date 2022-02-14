
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int base_addr; } ;
struct dev_priv {int chip_lock; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_4)
{
 struct dev_priv *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;

 FUNC_0(&VAR_5->timer);

 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 FUNC_5(&VAR_5->chip_lock, VAR_6);
 FUNC_7 (VAR_4->base_addr, VAR_0, VAR_1);
 FUNC_7 (VAR_4->base_addr, VAR_2, VAR_3);
 FUNC_6(&VAR_5->chip_lock, VAR_6);

 FUNC_1 (VAR_4->irq, VAR_4);

 return 0;
}
