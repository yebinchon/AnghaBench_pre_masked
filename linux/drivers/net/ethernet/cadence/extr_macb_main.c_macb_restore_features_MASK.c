
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct macb {struct net_device* dev; } ;
typedef int netdev_features_t ;


 int FUNC_0 (struct macb*,int ) ;
 int FUNC_1 (struct macb*,int ) ;
 int FUNC_2 (struct macb*,int ) ;

__attribute__((used)) static void FUNC_3(struct macb *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 netdev_features_t VAR_2 = VAR_1->features;


 FUNC_2(VAR_0, VAR_2);


 FUNC_0(VAR_0, VAR_2);


 FUNC_1(VAR_0, VAR_2);
}
