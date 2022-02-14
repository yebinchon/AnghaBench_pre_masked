
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int dummy; } ;
struct net_device {int phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct pxa168_eth_private*) ;
 struct pxa168_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct pxa168_eth_private*,int ) ;
 int FUNC_4 (struct pxa168_eth_private*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct pxa168_eth_private *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8 = 0;


 FUNC_4(VAR_7, VAR_1, 0);


 FUNC_4(VAR_7, VAR_0, 0);


 VAR_8 = FUNC_3(VAR_7, VAR_4);
 VAR_8 &= ~VAR_5;




 FUNC_0(VAR_7);


 VAR_8 = FUNC_3(VAR_7, VAR_3);
 VAR_8 &= ~VAR_2;
 FUNC_4(VAR_7, VAR_3, VAR_8);

 FUNC_2(VAR_6->phydev);
}
