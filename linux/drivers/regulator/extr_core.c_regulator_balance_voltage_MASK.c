
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;
struct coupling_desc {int n_coupled; int n_resolved; struct regulator_dev** coupled_rdevs; struct regulator_coupler* coupler; } ;
struct regulator_dev {struct coupling_desc coupling_desc; } ;
struct regulator_coupler {int (* balance_voltage ) (struct regulator_coupler*,struct regulator_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct regulator_dev*,char*) ;
 int FUNC_2 (struct regulator_dev*,int*,int*,int*,int ,int) ;
 int FUNC_3 (struct regulator_dev*,int,int,int ) ;
 int FUNC_4 (int,unsigned long*) ;
 int FUNC_5 (struct regulator_coupler*,struct regulator_dev*,int ) ;
 scalar_t__ FUNC_6 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_2,
         suspend_state_t VAR_3)
{
 struct regulator_dev **VAR_4;
 struct regulator_dev *VAR_5;
 struct coupling_desc *VAR_6 = &VAR_2->coupling_desc;
 struct regulator_coupler *VAR_7 = VAR_6->coupler;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned long VAR_16 = 0;
 bool VAR_17;

 VAR_4 = VAR_6->coupled_rdevs;
 VAR_10 = VAR_6->n_coupled;





 if (VAR_3 != VAR_1)
  VAR_10 = 1;

 if (VAR_6->n_resolved < VAR_10) {
  FUNC_1(VAR_2, "Not all coupled regulators registered\n");
  return -VAR_0;
 }


 if (VAR_7 && VAR_7->balance_voltage)
  return VAR_7->balance_voltage(VAR_7, VAR_2, VAR_3);





 do {
  VAR_17 = 0;
  VAR_15 = 0;
  VAR_11 = 0;
  VAR_12 = 0;
  VAR_13 = 0;
  VAR_5 = ((void*)0);





  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {






   int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

   if (FUNC_6(VAR_8, &VAR_16))
    continue;

   VAR_9 = FUNC_2(VAR_4[VAR_8],
           &VAR_20,
           &VAR_18,
           &VAR_19,
           VAR_3, VAR_10);
   if (VAR_9 < 0)
    goto out;

   VAR_14 = FUNC_0(VAR_18 - VAR_20);

   if (VAR_14 && VAR_15 <= VAR_14) {
    VAR_17 = VAR_9;
    VAR_15 = VAR_14;
    VAR_5 = VAR_4[VAR_8];
    VAR_11 = VAR_18;
    VAR_12 = VAR_19;
    VAR_13 = VAR_8;
   }
  }


  if (!VAR_5) {
   VAR_9 = 0;
   goto out;
  }

  VAR_9 = FUNC_3(VAR_5, VAR_11,
       VAR_12, VAR_3);

  if (VAR_9 < 0)
   goto out;

  if (VAR_17)
   FUNC_4(VAR_13, &VAR_16);

 } while (VAR_10 > 1);

out:
 return VAR_9;
}
