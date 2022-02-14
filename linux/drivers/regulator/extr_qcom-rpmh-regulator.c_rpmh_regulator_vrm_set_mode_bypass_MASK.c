
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs_cmd {int data; scalar_t__ addr; } ;
struct rpmh_vreg {TYPE_1__* hw_data; scalar_t__ addr; } ;
struct TYPE_2__ {int* pmic_mode_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rpmh_vreg*,struct tcs_cmd*,int) ;

__attribute__((used)) static int FUNC_1(struct rpmh_vreg *VAR_4,
     unsigned int VAR_5, bool VAR_6)
{
 struct tcs_cmd VAR_7 = {
  .addr = VAR_4->addr + VAR_3,
 };
 int VAR_8;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 VAR_8 = VAR_4->hw_data->pmic_mode_map[VAR_5];
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6)
  VAR_7.data = VAR_1;
 else
  VAR_7.data = VAR_8;

 return FUNC_0(VAR_4, &VAR_7, 1);
}
