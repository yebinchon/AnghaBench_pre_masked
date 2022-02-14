
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;
struct hip04_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct hip04_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct hip04_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(((VAR_1->dev_addr[0] << 8) | (VAR_1->dev_addr[1])),
         VAR_2->base + VAR_0);
 FUNC_1(((VAR_1->dev_addr[2] << 24) | (VAR_1->dev_addr[3] << 16) |
   (VAR_1->dev_addr[4] << 8) | (VAR_1->dev_addr[5])),
         VAR_2->base + VAR_0 + 4);
}
