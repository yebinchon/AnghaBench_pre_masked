
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct a38x_comphy_lane {int n; TYPE_1__* priv; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct a38x_comphy_lane *VAR_0,
       unsigned int VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0->base + VAR_1, VAR_4,
      (VAR_4 & VAR_2) == VAR_3,
      1000, 150000);

 if (VAR_5)
  FUNC_0(VAR_0->priv->dev,
   "comphy%u: timed out waiting for status\n", VAR_0->n);

 return VAR_5;
}
