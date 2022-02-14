
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int name; int base_addr; } ;
struct dev_priv {int timer; int chip_lock; struct net_device* dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct dev_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ) ;
 struct dev_priv* VAR_3 ;
 unsigned int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_5)
{
 struct dev_priv *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 struct net_device *VAR_7 = VAR_6->dev;
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_8(&VAR_6->chip_lock, VAR_10);
 VAR_8 = FUNC_7(VAR_7->base_addr, VAR_0) & VAR_1;
 FUNC_9(&VAR_6->chip_lock, VAR_10);
 VAR_9 = FUNC_4(VAR_7);

 if (VAR_8 && !VAR_9) {
  FUNC_5(VAR_7);
  FUNC_6("%s: link up\n", VAR_7->name);
 } else if (!VAR_8 && VAR_9) {
  FUNC_3(VAR_7);
  FUNC_6("%s: link down\n", VAR_7->name);
 }

 FUNC_1(&VAR_6->timer, VAR_2 + FUNC_2(500));
}
