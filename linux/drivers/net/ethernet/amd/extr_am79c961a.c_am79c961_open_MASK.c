
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_2__ {int expires; } ;
struct dev_priv {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2)
{
 struct dev_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2->irq, VAR_0, 0, VAR_2->name, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2);

 FUNC_3(VAR_2);

 VAR_3->timer.expires = VAR_1;
 FUNC_0(&VAR_3->timer);

 FUNC_4(VAR_2);

 return 0;
}
