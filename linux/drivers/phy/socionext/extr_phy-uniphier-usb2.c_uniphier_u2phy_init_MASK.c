
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uniphier_u2phy_priv {TYPE_3__* data; int regmap; } ;
struct phy {int dummy; } ;
struct TYPE_4__ {int value; int offset; } ;
struct TYPE_5__ {int value; int offset; } ;
struct TYPE_6__ {TYPE_1__ config1; TYPE_2__ config0; } ;


 struct uniphier_u2phy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct uniphier_u2phy_priv *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->data)
  return 0;

 FUNC_1(VAR_1->regmap, VAR_1->data->config0.offset,
       VAR_1->data->config0.value);
 FUNC_1(VAR_1->regmap, VAR_1->data->config1.offset,
       VAR_1->data->config1.value);

 return 0;
}
