
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ingenic_gpio_chip {scalar_t__ reg_base; TYPE_1__* jzpc; } ;
struct TYPE_2__ {int map; } ;


 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static u32 FUNC_1(struct ingenic_gpio_chip *VAR_0, u8 VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_0->jzpc->map, VAR_0->reg_base + VAR_1, &VAR_2);

 return (u32) VAR_2;
}
