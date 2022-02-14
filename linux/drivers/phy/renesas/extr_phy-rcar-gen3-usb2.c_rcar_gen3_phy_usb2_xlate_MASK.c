
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_gen3_chan {TYPE_1__* rphys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int args_count; size_t* args; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct phy* phy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct rcar_gen3_chan* FUNC_1 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_2(struct device *VAR_3,
         struct of_phandle_args *VAR_4)
{
 struct rcar_gen3_chan *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4->args_count == 0)
  return VAR_5->rphys[VAR_2].phy;
 else if (VAR_4->args_count > 1)
  return FUNC_0(-VAR_0);

 if (VAR_4->args[0] >= VAR_1)
  return FUNC_0(-VAR_0);

 return VAR_5->rphys[VAR_4->args[0]].phy;
}
