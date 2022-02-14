
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct device {int dummy; } ;
struct a38x_comphy_lane {scalar_t__ port; int n; TYPE_1__* priv; } ;
struct TYPE_2__ {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,size_t) ;
 int** VAR_4 ;
 struct phy* FUNC_4 (struct device*,struct of_phandle_args*) ;
 struct a38x_comphy_lane* FUNC_5 (struct phy*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static struct phy *FUNC_7(struct device *VAR_5,
         struct of_phandle_args *VAR_6)
{
 struct a38x_comphy_lane *VAR_7;
 struct phy *VAR_8;
 u32 VAR_9;

 if (FUNC_2(VAR_6->args[0] >= VAR_3))
  return FUNC_0(-VAR_2);

 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_7 = FUNC_5(VAR_8);
 if (VAR_7->port >= 0)
  return FUNC_0(-VAR_1);

 VAR_7->port = VAR_6->args[0];

 VAR_9 = FUNC_6(VAR_7->priv->base + VAR_0);
 VAR_9 = (VAR_9 >> (4 * VAR_7->n)) & 0xf;

 if (!VAR_4[VAR_7->n][VAR_7->port] ||
     VAR_9 != VAR_4[VAR_7->n][VAR_7->port]) {
  FUNC_3(VAR_7->priv->dev,
    "comphy%u: not configured for GBE\n", VAR_7->n);
  VAR_8 = FUNC_0(-VAR_2);
 }

 return VAR_8;
}
