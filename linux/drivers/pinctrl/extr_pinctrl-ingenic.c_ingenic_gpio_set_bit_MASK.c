
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ingenic_gpio_chip {scalar_t__ reg_base; TYPE_1__* jzpc; } ;
struct TYPE_2__ {int map; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct ingenic_gpio_chip *VAR_0,
  u8 VAR_1, u8 VAR_2, bool VAR_3)
{
 if (VAR_3)
  VAR_1 = FUNC_2(VAR_1);
 else
  VAR_1 = FUNC_1(VAR_1);

 FUNC_3(VAR_0->jzpc->map, VAR_0->reg_base + VAR_1, FUNC_0(VAR_2));
}
