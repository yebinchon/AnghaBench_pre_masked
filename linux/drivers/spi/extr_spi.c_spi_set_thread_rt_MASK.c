
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int kworker_task; int dev; } ;
struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,struct sched_param*) ;

__attribute__((used)) static void FUNC_2(struct spi_controller *VAR_2)
{
 struct sched_param VAR_3 = { .sched_priority = VAR_0 / 2 };

 FUNC_0(&VAR_2->dev,
  "will run message pump with realtime priority\n");
 FUNC_1(VAR_2->kworker_task, VAR_1, &VAR_3);
}
