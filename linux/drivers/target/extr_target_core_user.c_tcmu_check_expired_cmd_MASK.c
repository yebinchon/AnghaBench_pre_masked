
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcmu_dev {int name; int commands; int cmd_time_out; } ;
struct tcmu_cmd {int queue_entry; struct se_cmd* se_cmd; int flags; int deadline; struct tcmu_dev* tcmu_dev; } ;
struct se_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 int FUNC_5 (struct tcmu_cmd*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_5, void *VAR_6, void *VAR_7)
{
 struct tcmu_cmd *VAR_8 = VAR_6;
 struct tcmu_dev *VAR_9 = VAR_8->tcmu_dev;
 u8 VAR_10;
 struct se_cmd *VAR_11;
 bool VAR_12;

 if (FUNC_6(VAR_2, &VAR_8->flags))
  return 0;

 if (!FUNC_7(VAR_4, VAR_8->deadline))
  return 0;

 VAR_12 = FUNC_6(VAR_3, &VAR_8->flags);
 VAR_11 = VAR_8->se_cmd;

 if (VAR_12) {




  if (!VAR_9->cmd_time_out)
   return 0;

  FUNC_3(VAR_2, &VAR_8->flags);



  VAR_10 = VAR_0;
  FUNC_1(&VAR_8->queue_entry);
  VAR_8->se_cmd = ((void*)0);
 } else {
  FUNC_1(&VAR_8->queue_entry);
  FUNC_0(&VAR_9->commands, VAR_5);
  FUNC_5(VAR_8);
  VAR_10 = VAR_1;
 }

 FUNC_2("Timing out cmd %u on dev %s that is %s.\n",
   VAR_5, VAR_9->name, VAR_12 ? "inflight" : "queued");

 FUNC_4(VAR_11, VAR_10);
 return 0;
}
