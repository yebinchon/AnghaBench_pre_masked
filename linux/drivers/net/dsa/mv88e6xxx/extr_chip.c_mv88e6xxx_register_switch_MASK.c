
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; struct device* dev; } ;
struct dsa_switch {int ageing_time_min; int ageing_time_max; int * ops; struct device* dev; struct mv88e6xxx_chip* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int age_time_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct dsa_switch*) ;
 int FUNC_1 (struct dsa_switch*) ;
 struct dsa_switch* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mv88e6xxx_chip *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct dsa_switch *VAR_5;

 VAR_5 = FUNC_2(VAR_4, FUNC_3(VAR_3));
 if (!VAR_5)
  return -VAR_0;

 VAR_5->priv = VAR_3;
 VAR_5->dev = VAR_4;
 VAR_5->ops = &VAR_2;
 VAR_5->ageing_time_min = VAR_3->info->age_time_coeff;
 VAR_5->ageing_time_max = VAR_3->info->age_time_coeff * VAR_1;

 FUNC_0(VAR_4, VAR_5);

 return FUNC_1(VAR_5);
}
