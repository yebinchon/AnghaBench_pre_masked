
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int queue; int status; scalar_t__ actual_length; } ;
struct spi_device {struct spi_controller* controller; } ;
struct spi_controller {int queue_lock; int pump_messages; int kworker; int busy; int queue; int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2,
     struct spi_message *VAR_3,
     bool VAR_4)
{
 struct spi_controller *VAR_5 = VAR_2->controller;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->queue_lock, VAR_6);

 if (!VAR_5->running) {
  FUNC_3(&VAR_5->queue_lock, VAR_6);
  return -VAR_1;
 }
 VAR_3->actual_length = 0;
 VAR_3->status = -VAR_0;

 FUNC_1(&VAR_3->queue, &VAR_5->queue);
 if (!VAR_5->busy && VAR_4)
  FUNC_0(&VAR_5->kworker, &VAR_5->pump_messages);

 FUNC_3(&VAR_5->queue_lock, VAR_6);
 return 0;
}
