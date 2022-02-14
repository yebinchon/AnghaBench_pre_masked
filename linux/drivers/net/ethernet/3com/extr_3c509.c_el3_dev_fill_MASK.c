
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; int if_port; int dev_addr; } ;
struct el3_private {int type; } ;
typedef enum el3_cardtype { ____Placeholder_el3_cardtype } el3_cardtype ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 struct el3_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, __be16 *VAR_2, int VAR_3,
    int VAR_4, int VAR_5, enum el3_cardtype VAR_6)
{
 struct el3_private *VAR_7 = FUNC_1(VAR_1);

 FUNC_0(VAR_1->dev_addr, VAR_2, VAR_0);
 VAR_1->base_addr = VAR_3;
 VAR_1->irq = VAR_4;
 VAR_1->if_port = VAR_5;
 VAR_7->type = VAR_6;
}
