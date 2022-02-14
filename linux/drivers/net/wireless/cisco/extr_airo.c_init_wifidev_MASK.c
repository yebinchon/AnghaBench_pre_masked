
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; int wireless_data; int base_addr; int irq; int ml_priv; } ;
struct airo_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct net_device*,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static struct net_device *FUNC_5(struct airo_info *VAR_2,
     struct net_device *VAR_3)
{
 int VAR_4;
 struct net_device *VAR_5 = FUNC_1(0, "wifi%d", VAR_0,
           VAR_1);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->ml_priv = VAR_3->ml_priv;
 VAR_5->irq = VAR_3->irq;
 VAR_5->base_addr = VAR_3->base_addr;
 VAR_5->wireless_data = VAR_3->wireless_data;
 FUNC_0(VAR_5, VAR_3->dev.parent);
 FUNC_2(VAR_5, VAR_3);
 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4<0) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
