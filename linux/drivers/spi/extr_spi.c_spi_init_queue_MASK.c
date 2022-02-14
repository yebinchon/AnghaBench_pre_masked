
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int running; int busy; scalar_t__ rt; int pump_messages; int kworker_task; int dev; int kworker; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_8(struct spi_controller *VAR_2)
{
 VAR_2->running = 0;
 VAR_2->busy = 0;

 FUNC_5(&VAR_2->kworker);
 VAR_2->kworker_task = FUNC_6(VAR_0, &VAR_2->kworker,
      "%s", FUNC_3(&VAR_2->dev));
 if (FUNC_0(VAR_2->kworker_task)) {
  FUNC_2(&VAR_2->dev, "failed to create message pump task\n");
  return FUNC_1(VAR_2->kworker_task);
 }
 FUNC_4(&VAR_2->pump_messages, VAR_1);
 if (VAR_2->rt)
  FUNC_7(VAR_2);

 return 0;
}
