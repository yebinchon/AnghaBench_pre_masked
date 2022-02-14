
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct comp_channel* private_data; } ;
struct comp_channel {int io_mutex; int fifo; int dev; TYPE_1__* cfg; int wq; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {scalar_t__ direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct comp_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_5, poll_table *VAR_6)
{
 struct comp_channel *VAR_7 = VAR_5->private_data;
 __poll_t VAR_8 = 0;

 FUNC_4(VAR_5, &VAR_7->wq, VAR_6);

 FUNC_2(&VAR_7->io_mutex);
 if (VAR_7->cfg->direction == VAR_4) {
  if (!VAR_7->dev || !FUNC_1(&VAR_7->fifo))
   VAR_8 |= VAR_0 | VAR_2;
 } else {
  if (!VAR_7->dev || !FUNC_1(&VAR_7->fifo) || FUNC_0(VAR_7))
   VAR_8 |= VAR_1 | VAR_3;
 }
 FUNC_3(&VAR_7->io_mutex);
 return VAR_8;
}
