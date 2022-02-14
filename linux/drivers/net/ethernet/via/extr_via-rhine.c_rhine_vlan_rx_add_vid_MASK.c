
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rhine_private {int lock; int active_vlans; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 struct rhine_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct rhine_private *VAR_3 = FUNC_0(VAR_0);

 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_2, VAR_3->active_vlans);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_3->lock);
 return 0;
}
