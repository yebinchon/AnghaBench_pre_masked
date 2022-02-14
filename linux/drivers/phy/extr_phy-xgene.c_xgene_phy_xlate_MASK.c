
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_phy_ctx {scalar_t__ mode; struct phy* phy; } ;
struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__ args_count; scalar_t__* args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xgene_phy_ctx* FUNC_1 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_2(struct device *VAR_3,
       struct of_phandle_args *VAR_4)
{
 struct xgene_phy_ctx *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4->args_count <= 0)
  return FUNC_0(-VAR_0);
 if (VAR_4->args[0] < VAR_2 || VAR_4->args[0] >= VAR_1)
  return FUNC_0(-VAR_0);

 VAR_5->mode = VAR_4->args[0];
 return VAR_5->phy;
}
