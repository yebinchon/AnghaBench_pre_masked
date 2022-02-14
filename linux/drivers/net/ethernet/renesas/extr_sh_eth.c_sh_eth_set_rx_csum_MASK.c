
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {int lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2, bool VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);


 FUNC_2(VAR_2);


 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3 ? VAR_1 : 0);


 FUNC_3(VAR_2);

 FUNC_5(&VAR_4->lock, VAR_5);
}
