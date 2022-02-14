
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pwm_sifive_ddata {int clk; TYPE_1__ chip; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct pwm_sifive_ddata* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_0, bool VAR_1)
{
 struct pwm_sifive_ddata *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_2->clk);
  if (VAR_3) {
   FUNC_2(VAR_2->chip.dev, "Enable clk failed\n");
   return VAR_3;
  }
 }

 if (!VAR_1)
  FUNC_0(VAR_2->clk);

 return 0;
}
