
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct ksz_port {int dummy; } ;
struct ksz_hw {int features; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct dev_priv {int monitor_timer_info; struct ksz_port port; struct dev_info* adapter; TYPE_1__ mii_if; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_4__ {int timer; } ;


 int VAR_0 ;
 struct dev_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct ksz_port*) ;
 struct dev_priv* VAR_2 ;
 int FUNC_3 (struct net_device*,struct dev_priv*,struct ksz_port*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1.timer);
 struct net_device *VAR_5 = VAR_4->mii_if.dev;
 struct dev_info *VAR_6 = VAR_4->adapter;
 struct ksz_hw *VAR_7 = &VAR_6->hw;
 struct ksz_port *VAR_8 = &VAR_4->port;

 if (!(VAR_7->features & VAR_0))
  FUNC_2(VAR_8);
 FUNC_3(VAR_5, VAR_4, VAR_8);

 FUNC_1(&VAR_4->monitor_timer_info);
}
