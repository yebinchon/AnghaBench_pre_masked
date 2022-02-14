
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct opp_table {int regulator_count; int (* set_opp ) (struct dev_pm_set_opp_data*) ;int clk; int regulators; struct dev_pm_set_opp_data* set_opp_data; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned long rate; int supplies; } ;
struct TYPE_3__ {unsigned long rate; int supplies; } ;
struct dev_pm_set_opp_data {int regulator_count; TYPE_2__ new_opp; TYPE_1__ old_opp; struct device* dev; int clk; int regulators; } ;
struct dev_pm_opp_supply {int dummy; } ;


 int FUNC_0 (int ,struct dev_pm_opp_supply*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct dev_pm_set_opp_data*) ;

__attribute__((used)) static int FUNC_3(const struct opp_table *VAR_0,
      struct device *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3,
      struct dev_pm_opp_supply *VAR_4,
      struct dev_pm_opp_supply *VAR_5)
{
 struct dev_pm_set_opp_data *VAR_6;
 int VAR_7;

 VAR_6 = VAR_0->set_opp_data;
 VAR_6->regulators = VAR_0->regulators;
 VAR_6->regulator_count = VAR_0->regulator_count;
 VAR_6->clk = VAR_0->clk;
 VAR_6->dev = VAR_1;

 VAR_6->old_opp.rate = VAR_2;
 VAR_7 = sizeof(*VAR_4) * VAR_0->regulator_count;
 if (!VAR_4)
  FUNC_1(VAR_6->old_opp.supplies, 0, VAR_7);
 else
  FUNC_0(VAR_6->old_opp.supplies, VAR_4, VAR_7);

 VAR_6->new_opp.rate = VAR_3;
 FUNC_0(VAR_6->new_opp.supplies, VAR_5, VAR_7);

 return VAR_0->set_opp(VAR_6);
}
