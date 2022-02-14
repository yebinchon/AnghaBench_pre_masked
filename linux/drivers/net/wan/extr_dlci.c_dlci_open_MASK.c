
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dev_addr; } ;
struct frad_local {int (* activate ) (struct net_device*,struct net_device*) ;} ;
struct dlci_local {struct net_device* slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct dlci_local *VAR_3;
 struct frad_local *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 if (!*(short *)(VAR_2->dev_addr))
  return -VAR_0;

 if (!FUNC_1(VAR_3->slave))
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_3->slave);
 VAR_5 = (*VAR_4->activate)(VAR_3->slave, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2);

 return 0;
}
