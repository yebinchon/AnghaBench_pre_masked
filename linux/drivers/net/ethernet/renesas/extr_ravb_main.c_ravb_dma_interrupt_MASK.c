
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int lock; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3;
 struct ravb_private *VAR_6 = FUNC_0(VAR_5);
 irqreturn_t VAR_7 = VAR_1;

 FUNC_2(&VAR_6->lock);


 if (FUNC_1(VAR_5, VAR_4))
  VAR_7 = VAR_0;

 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
