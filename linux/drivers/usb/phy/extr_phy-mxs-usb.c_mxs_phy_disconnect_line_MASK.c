
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_phy {int regmap_anatop; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxs_phy*,int) ;
 int FUNC_1 (struct mxs_phy*) ;
 int FUNC_2 (struct mxs_phy*) ;

__attribute__((used)) static void FUNC_3(struct mxs_phy *VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;


 if (!(VAR_1->data->flags & VAR_0))
  return;


 if (!VAR_1->regmap_anatop)
  return;

 VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 && !VAR_3 && !FUNC_2(VAR_1))
  FUNC_0(VAR_1, 1);
 else
  FUNC_0(VAR_1, 0);

}
