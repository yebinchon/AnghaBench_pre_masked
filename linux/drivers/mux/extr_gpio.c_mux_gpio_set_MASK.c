
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mux_gpio {TYPE_1__* gpios; } ;
struct mux_control {int chip; } ;
struct TYPE_2__ {int info; int desc; int ndescs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 struct mux_gpio* FUNC_3 (int ) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct mux_control *VAR_1, int VAR_2)
{
 struct mux_gpio *VAR_3 = FUNC_3(VAR_1->chip);
 FUNC_1(VAR_0, FUNC_0(VAR_2));

 VAR_0[0] = VAR_2;

 FUNC_2(VAR_3->gpios->ndescs,
           VAR_3->gpios->desc,
           VAR_3->gpios->info, VAR_0);

 return 0;
}
