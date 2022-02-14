
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int lock; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct ravb_private *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(&VAR_4->lock);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_4->lock);
 return VAR_0;
}
