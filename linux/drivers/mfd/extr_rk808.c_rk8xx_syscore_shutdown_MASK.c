
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk808 {scalar_t__ variant; int regmap; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct rk808* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct rk808 *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 if (VAR_6 == VAR_4 &&
     (VAR_7->variant == VAR_0 || VAR_7->variant == VAR_1)) {
  VAR_8 = FUNC_3(VAR_7->regmap,
      FUNC_0(3),
      VAR_2,
      VAR_3);
  if (VAR_8) {
   FUNC_1(&VAR_5->dev,
     "Cannot switch to power down function\n");
  }
 }
}
