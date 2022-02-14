
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_mux_gpio_state {TYPE_1__* gpios; } ;
struct TYPE_2__ {int info; int desc; int ndescs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2,
       void *VAR_3)
{
 struct mdio_mux_gpio_state *VAR_4 = VAR_3;
 FUNC_1(VAR_0, FUNC_0(VAR_2));

 if (VAR_1 == VAR_2)
  return 0;

 VAR_0[0] = VAR_2;

 FUNC_2(VAR_4->gpios->ndescs, VAR_4->gpios->desc,
           VAR_4->gpios->info, VAR_0);

 return 0;
}
