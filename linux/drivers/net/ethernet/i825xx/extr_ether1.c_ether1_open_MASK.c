
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int
FUNC_4 (struct net_device *VAR_2)
{
 if (FUNC_3(VAR_2->irq, VAR_1, 0, "ether1", VAR_2))
  return -VAR_0;

 if (FUNC_0 (VAR_2)) {
  FUNC_1 (VAR_2->irq, VAR_2);
  return -VAR_0;
 }

 FUNC_2(VAR_2);

 return 0;
}
