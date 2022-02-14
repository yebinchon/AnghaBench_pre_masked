
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; int name; } ;
struct el3_private {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3)
{
 int VAR_4 = VAR_3->base_addr;
 struct el3_private *VAR_5 = FUNC_3(VAR_3);

 if (VAR_2 > 2)
  FUNC_5("%s: Shutting down ethercard.\n", VAR_3->name);

 FUNC_1(VAR_3);

 FUNC_2(VAR_3->irq, VAR_3);

 FUNC_0(0);
 if (VAR_5->type != VAR_0) {



  FUNC_4(0x0f00, VAR_4 + VAR_1);
 }

 return 0;
}
