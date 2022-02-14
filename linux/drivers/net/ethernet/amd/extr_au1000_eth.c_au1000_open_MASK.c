
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; int irq; int name; } ;
struct au1000_private {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct au1000_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct au1000_private*,int ,struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 int VAR_3;
 struct au1000_private *VAR_4 = FUNC_3(VAR_2);

 FUNC_4(VAR_4, VAR_1, VAR_2, "open: dev=%p\n", VAR_2);

 VAR_3 = FUNC_7(VAR_2->irq, VAR_0, 0,
     VAR_2->name, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2, "unable to get IRQ %d\n", VAR_2->irq);
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2, "error in au1000_init\n");
  FUNC_1(VAR_2->irq, VAR_2);
  return VAR_3;
 }

 if (VAR_2->phydev)
  FUNC_6(VAR_2->phydev);

 FUNC_5(VAR_2);

 FUNC_4(VAR_4, VAR_1, VAR_2, "open: Initialization done.\n");

 return 0;
}
