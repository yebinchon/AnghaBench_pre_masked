
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 FUNC_3(VAR_1);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_0, "Device %s closed.\n", VAR_1->name);

 return 0;

}
