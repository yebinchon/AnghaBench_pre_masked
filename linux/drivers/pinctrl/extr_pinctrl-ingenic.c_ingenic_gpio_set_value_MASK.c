
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ingenic_gpio_chip {TYPE_1__* jzpc; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ingenic_gpio_chip*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ingenic_gpio_chip *VAR_3,
       u8 VAR_4, int VAR_5)
{
 if (VAR_3->jzpc->version >= VAR_0)
  FUNC_0(VAR_3, VAR_2, VAR_4, !!VAR_5);
 else
  FUNC_0(VAR_3, VAR_1, VAR_4, !!VAR_5);
}
