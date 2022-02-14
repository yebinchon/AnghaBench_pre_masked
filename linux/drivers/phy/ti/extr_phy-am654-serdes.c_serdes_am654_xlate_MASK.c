
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int busy; int type; int control; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int * args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ) ;
 struct phy* FUNC_4 (struct device*,struct of_phandle_args*) ;
 struct serdes_am654* FUNC_5 (struct phy*) ;

__attribute__((used)) static struct phy *FUNC_6(struct device *VAR_1,
          struct of_phandle_args *VAR_2)
{
 struct serdes_am654 *VAR_3;
 struct phy *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_3 = FUNC_5(VAR_4);
 if (VAR_3->busy)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_3->control, VAR_2->args[1]);
 if (VAR_5) {
  FUNC_2(VAR_1, "Failed to select SERDES Lane Function\n");
  return FUNC_0(VAR_5);
 }

 VAR_3->busy = 1;
 VAR_3->type = VAR_2->args[0];

 return VAR_4;
}
