
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device* VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_2->irq, VAR_2);
 if (VAR_2->irq == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 return VAR_3;
}
