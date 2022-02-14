
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcmu_dev {int dummy; } ;
struct tcmu_cmd {int dbi; int dbi_cnt; struct tcmu_dev* tcmu_dev; struct se_cmd* se_cmd; int queue_entry; } ;
struct se_device {int dummy; } ;
struct se_cmd {struct se_device* se_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct tcmu_dev* FUNC_1 (struct se_device*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,struct tcmu_cmd*) ;
 struct tcmu_cmd* FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct tcmu_cmd*) ;
 int FUNC_6 (struct tcmu_cmd*) ;

__attribute__((used)) static struct tcmu_cmd *FUNC_7(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;
 struct tcmu_dev *VAR_4 = FUNC_1(VAR_3);
 struct tcmu_cmd *VAR_5;

 VAR_5 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->queue_entry);
 VAR_5->se_cmd = VAR_2;
 VAR_5->tcmu_dev = VAR_4;

 FUNC_6(VAR_5);
 VAR_5->dbi_cnt = FUNC_5(VAR_5);
 VAR_5->dbi = FUNC_2(VAR_5->dbi_cnt, sizeof(uint32_t),
    VAR_0);
 if (!VAR_5->dbi) {
  FUNC_3(VAR_1, VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
