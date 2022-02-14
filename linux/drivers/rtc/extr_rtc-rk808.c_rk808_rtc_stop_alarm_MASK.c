
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk808_rtc {TYPE_1__* creg; struct rk808* rk808; } ;
struct rk808 {int regmap; } ;
struct TYPE_2__ {int int_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rk808_rtc *VAR_1)
{
 struct rk808 *VAR_2 = VAR_1->rk808;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_1->creg->int_reg,
     VAR_0, 0);

 return VAR_3;
}
