
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int flags; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,void*) ;
 struct sja1000_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct sja1000_priv *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 if (!(VAR_3->flags & VAR_1))
  FUNC_2(VAR_2->irq, (void *)VAR_2);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return 0;
}
