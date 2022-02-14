
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_pwm_chip {int ipg_clk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fsl_pwm_chip *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->ipg_clk);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3->regmap, VAR_0, 0x00);
 FUNC_2(VAR_3->regmap, VAR_1, 0x00);
 FUNC_2(VAR_3->regmap, VAR_2, 0xFF);

 FUNC_0(VAR_3->ipg_clk);

 return 0;
}
