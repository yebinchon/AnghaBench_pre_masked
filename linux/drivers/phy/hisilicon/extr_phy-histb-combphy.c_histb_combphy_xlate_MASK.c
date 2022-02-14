
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct histb_combphy_mode {scalar_t__ select; scalar_t__ fixed; } ;
struct histb_combphy_priv {struct phy* phy; struct histb_combphy_mode mode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct histb_combphy_priv* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct histb_combphy_mode*) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_3,
           struct of_phandle_args *VAR_4)
{
 struct histb_combphy_priv *VAR_5 = FUNC_2(VAR_3);
 struct histb_combphy_mode *VAR_6 = &VAR_5->mode;

 if (VAR_4->args_count < 1) {
  FUNC_1(VAR_3, "invalid number of arguments\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6->select = VAR_4->args[0];

 if (VAR_6->select < VAR_1 || VAR_6->select > VAR_2) {
  FUNC_1(VAR_3, "invalid phy mode select argument\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_3(VAR_6) && VAR_6->select != VAR_6->fixed) {
  FUNC_1(VAR_3, "mode select %d mismatch fixed phy mode %d\n",
   VAR_6->select, VAR_6->fixed);
  return FUNC_0(-VAR_0);
 }

 return VAR_5->phy;
}
