
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coupling_desc {int n_coupled; int n_resolved; struct regulator_dev** coupled_rdevs; struct regulator_coupler* coupler; } ;
struct regulator_dev {struct coupling_desc coupling_desc; } ;
struct regulator_coupler {int dummy; } ;


 struct regulator_dev* FUNC_0 (struct regulator_dev*,int) ;
 int FUNC_1 (struct regulator_dev*,char*,int ) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static void FUNC_5(struct regulator_dev *VAR_0)
{
 struct regulator_coupler *VAR_1 = VAR_0->coupling_desc.coupler;
 struct coupling_desc *VAR_2 = &VAR_0->coupling_desc;
 int VAR_3 = VAR_2->n_coupled;
 struct regulator_dev *VAR_4;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {

  if (VAR_2->coupled_rdevs[VAR_5])
   continue;

  VAR_4 = FUNC_0(VAR_0, VAR_5 - 1);

  if (!VAR_4)
   continue;

  if (VAR_4->coupling_desc.coupler != VAR_1) {
   FUNC_1(VAR_0, "coupler mismatch with %s\n",
     FUNC_2(VAR_4));
   return;
  }

  FUNC_3(VAR_4);

  VAR_2->coupled_rdevs[VAR_5] = VAR_4;
  VAR_2->n_resolved++;

  FUNC_4(VAR_4);

  FUNC_5(VAR_4);
 }
}
