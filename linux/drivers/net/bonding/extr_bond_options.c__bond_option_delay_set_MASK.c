
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int miimon; } ;
struct bonding {TYPE_1__ params; int dev; } ;
struct bond_opt_value {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char*,char const*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct bonding *VAR_1,
      const struct bond_opt_value *VAR_2,
      const char *VAR_3,
      int *VAR_4)
{
 int VAR_5 = VAR_2->value;

 if (!VAR_1->params.miimon) {
  FUNC_1(VAR_1->dev, "Unable to set %s as MII monitoring is disabled\n",
      VAR_3);
  return -VAR_0;
 }
 if ((VAR_5 % VAR_1->params.miimon) != 0) {
  FUNC_2(VAR_1->dev,
       "%s (%d) is not a multiple of miimon (%d), value rounded to %d ms\n",
       VAR_3,
       VAR_5, VAR_1->params.miimon,
       (VAR_5 / VAR_1->params.miimon) *
       VAR_1->params.miimon);
 }
 *VAR_4 = VAR_5 / VAR_1->params.miimon;
 FUNC_0(VAR_1->dev, "Setting %s to %d\n",
     VAR_3,
     *VAR_4 * VAR_1->params.miimon);

 return 0;
}
