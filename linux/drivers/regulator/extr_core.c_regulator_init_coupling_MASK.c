
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_coupled; int coupler; int n_resolved; struct regulator_dev** coupled_rdevs; } ;
struct regulator_dev {TYPE_1__ coupling_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct regulator_dev** FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (struct regulator_dev*,char*,int) ;
 int FUNC_7 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_8(struct regulator_dev *VAR_4)
{
 int VAR_5, VAR_6;
 size_t VAR_7;

 if (!FUNC_0(VAR_0))
  VAR_6 = 0;
 else
  VAR_6 = FUNC_5(VAR_4);

 VAR_7 = sizeof(*VAR_4) * (VAR_6 + 1);

 VAR_4->coupling_desc.coupled_rdevs = FUNC_3(VAR_7, VAR_3);
 if (!VAR_4->coupling_desc.coupled_rdevs)
  return -VAR_1;





 VAR_4->coupling_desc.coupled_rdevs[0] = VAR_4;
 VAR_4->coupling_desc.n_coupled = VAR_6 + 1;
 VAR_4->coupling_desc.n_resolved++;


 if (VAR_6 == 0)
  return 0;

 if (!FUNC_4(VAR_4))
  return -VAR_2;

 VAR_4->coupling_desc.coupler = FUNC_7(VAR_4);
 if (FUNC_1(VAR_4->coupling_desc.coupler)) {
  VAR_5 = FUNC_2(VAR_4->coupling_desc.coupler);
  FUNC_6(VAR_4, "failed to get coupler: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
