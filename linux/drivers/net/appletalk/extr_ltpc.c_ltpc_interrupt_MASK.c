
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;

 if (VAR_4==((void*)0)) {
  FUNC_2("ltpc_interrupt: unknown device.\n");
  return VAR_1;
 }

 FUNC_1(VAR_4->base_addr+6);

 FUNC_0(VAR_4);



 return VAR_0;
}
