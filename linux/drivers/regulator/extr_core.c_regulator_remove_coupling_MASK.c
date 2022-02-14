
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coupling_desc {unsigned int n_coupled; struct regulator_dev** coupled_rdevs; int n_resolved; struct regulator_coupler* coupler; } ;
struct regulator_dev {struct coupling_desc coupling_desc; } ;
struct regulator_coupler {int (* detach_regulator ) (struct regulator_coupler*,struct regulator_dev*) ;} ;


 int FUNC_0 (struct regulator_dev**) ;
 int FUNC_1 (struct regulator_dev*,char*,int) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_coupler*,struct regulator_dev*) ;

__attribute__((used)) static void FUNC_5(struct regulator_dev *VAR_0)
{
 struct regulator_coupler *VAR_1 = VAR_0->coupling_desc.coupler;
 struct coupling_desc *VAR_2, *VAR_3 = &VAR_0->coupling_desc;
 struct regulator_dev *VAR_4, *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = VAR_3->n_coupled;

 for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = VAR_3->coupled_rdevs[VAR_8];

  if (!VAR_5)
   continue;

  FUNC_2(VAR_5);

  VAR_2 = &VAR_5->coupling_desc;
  VAR_6 = VAR_2->n_coupled;

  for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
   VAR_4 = VAR_2->coupled_rdevs[VAR_9];

   if (VAR_4 == VAR_0) {
    VAR_2->coupled_rdevs[VAR_9] = ((void*)0);
    VAR_2->n_resolved--;
    break;
   }
  }

  FUNC_3(VAR_5);

  VAR_3->coupled_rdevs[VAR_8] = ((void*)0);
  VAR_3->n_resolved--;
 }

 if (VAR_1 && VAR_1->detach_regulator) {
  VAR_10 = VAR_1->detach_regulator(VAR_1, VAR_0);
  if (VAR_10)
   FUNC_1(VAR_0, "failed to detach from coupler: %d\n",
     VAR_10);
 }

 FUNC_0(VAR_0->coupling_desc.coupled_rdevs);
 VAR_0->coupling_desc.coupled_rdevs = ((void*)0);
}
