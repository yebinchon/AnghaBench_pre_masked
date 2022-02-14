
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int mii_if; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rhine_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct rhine_private *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->mii_if);
}
