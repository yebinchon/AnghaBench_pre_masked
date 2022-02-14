
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rcar_pwm_chip*,int ) ;
 int FUNC_1 (struct rcar_pwm_chip*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rcar_pwm_chip *VAR_6)
{
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if ((VAR_7 & VAR_2) == 0 ||
     (VAR_7 & VAR_3) == 0)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_5, VAR_5, VAR_4);

 return 0;
}
