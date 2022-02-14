
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2)
{
 if (FUNC_2(VAR_2->irq, VAR_1, 0, "ether3", VAR_2))
  return -VAR_0;

 FUNC_0(VAR_2);

 FUNC_1(VAR_2);

 return 0;
}
