
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicpti {unsigned int clock; int prom_node; } ;


 unsigned int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct qlogicpti *VAR_0)
{
 unsigned int VAR_1;




 VAR_1 = FUNC_0(VAR_0->prom_node,"clock-frequency",40000000);
 VAR_0->clock = (VAR_1 + 500000)/1000000;
 if (VAR_0->clock == 0)
  VAR_0->clock = 40;
}
