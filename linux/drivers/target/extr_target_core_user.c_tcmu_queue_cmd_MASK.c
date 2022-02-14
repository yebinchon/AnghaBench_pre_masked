
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int cmdr_lock; } ;
struct tcmu_cmd {int dummy; } ;
struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 struct tcmu_dev* FUNC_0 (struct se_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcmu_cmd*,int *) ;
 struct tcmu_cmd* FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct tcmu_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_6(struct se_cmd *VAR_1)
{
 struct se_device *VAR_2 = VAR_1->se_dev;
 struct tcmu_dev *VAR_3 = FUNC_0(VAR_2);
 struct tcmu_cmd *VAR_4;
 sense_reason_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4)
  return VAR_0;

 FUNC_1(&VAR_3->cmdr_lock);
 VAR_6 = FUNC_3(VAR_4, &VAR_5);
 FUNC_2(&VAR_3->cmdr_lock);
 if (VAR_6 < 0)
  FUNC_5(VAR_4);
 return VAR_5;
}
