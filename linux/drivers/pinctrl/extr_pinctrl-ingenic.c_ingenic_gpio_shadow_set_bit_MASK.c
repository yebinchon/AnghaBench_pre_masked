
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ingenic_gpio_chip {TYPE_1__* jzpc; } ;
struct TYPE_2__ {int map; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct ingenic_gpio_chip *VAR_1,
  u8 VAR_2, u8 VAR_3, bool VAR_4)
{
 if (VAR_4)
  VAR_2 = FUNC_2(VAR_2);
 else
  VAR_2 = FUNC_1(VAR_2);

 FUNC_3(VAR_1->jzpc->map, VAR_0 + VAR_2, FUNC_0(VAR_3));
}
