
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_data {int buck125_gpioindex; int * buck125_gpios; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct max8997_data *VAR_0)
{
 int VAR_1 = (VAR_0->buck125_gpioindex) & 0x1;
 int VAR_2 = ((VAR_0->buck125_gpioindex) >> 1) & 0x1;
 int VAR_3 = ((VAR_0->buck125_gpioindex) >> 2) & 0x1;

 FUNC_0(VAR_0->buck125_gpios[0], VAR_3);
 FUNC_0(VAR_0->buck125_gpios[1], VAR_2);
 FUNC_0(VAR_0->buck125_gpios[2], VAR_1);
}
