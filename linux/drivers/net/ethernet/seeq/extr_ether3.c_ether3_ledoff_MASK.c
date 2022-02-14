
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct dev_priv {struct net_device* dev; } ;
struct TYPE_3__ {int config2; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct dev_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 struct dev_priv* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct dev_priv *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct net_device *VAR_6 = VAR_5->dev;

 FUNC_0(FUNC_2(VAR_6)->regs.config2 |= VAR_0, VAR_1);
}
