
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct frad_local {int (* deactivate ) (struct net_device*,struct net_device*) ;} ;
struct dlci_local {struct net_device* slave; } ;


 void* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct dlci_local *VAR_1;
 struct frad_local *VAR_2;
 int VAR_3;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_0);

 VAR_2 = FUNC_0(VAR_1->slave);
 VAR_3 = (*VAR_2->deactivate)(VAR_1->slave, VAR_0);

 return 0;
}
