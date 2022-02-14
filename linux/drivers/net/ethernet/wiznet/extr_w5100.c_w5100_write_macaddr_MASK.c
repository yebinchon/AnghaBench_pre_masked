
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5100_priv {struct net_device* ndev; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w5100_priv*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct w5100_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->ndev;

 FUNC_0(VAR_2, VAR_1, VAR_3->dev_addr, VAR_0);
}
