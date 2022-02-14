
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_port; int ml_priv; } ;


 struct net_device* FUNC_0 (int ) ;

struct net_device *FUNC_1(struct net_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0->ml_priv);

 if (!VAR_1)
  return ((void*)0);

 VAR_1->dev_port = VAR_0->dev_port;
 return VAR_1;
}
