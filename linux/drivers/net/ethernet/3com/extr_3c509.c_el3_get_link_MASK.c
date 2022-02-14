
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct el3_private {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 struct el3_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32 FUNC_4(struct net_device *VAR_0)
{
 struct el3_private *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;

 FUNC_2(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
 return VAR_2;
}
