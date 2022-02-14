
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stfsm_seq {int dummy; } ;
struct stfsm {int dev; } ;
struct seq_rw_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct stfsm*,struct stfsm_seq*,struct seq_rw_config*) ;
 struct seq_rw_config* FUNC_2 (struct stfsm*,struct seq_rw_config*) ;

__attribute__((used)) static int FUNC_3(struct stfsm *VAR_1,
           struct stfsm_seq *VAR_2,
           struct seq_rw_config *VAR_3)
{
 struct seq_rw_config *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_1->dev, "failed to find suitable config\n");
  return -VAR_0;
 }

 FUNC_1(VAR_1, VAR_2, VAR_4);

 return 0;
}
