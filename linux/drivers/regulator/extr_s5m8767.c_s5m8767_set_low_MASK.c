
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5m8767_info {int buck_gpioindex; int * buck_gpios; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct s5m8767_info *VAR_0)
{
 int VAR_1 = VAR_0->buck_gpioindex;

 FUNC_0(VAR_0->buck_gpios[2], VAR_1 & 0x1);
 FUNC_0(VAR_0->buck_gpios[1], (VAR_1 >> 1) & 0x1);
 FUNC_0(VAR_0->buck_gpios[0], (VAR_1 >> 2) & 0x1);

 return 0;
}
