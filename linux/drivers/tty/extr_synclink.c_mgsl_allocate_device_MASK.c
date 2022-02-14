
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int close_delay; int closing_wait; int * ops; } ;
struct mgsl_struct {int max_frame_size; int num_tx_dma_buffers; scalar_t__ num_tx_holding_buffers; int idle_mode; int params; int netlock; int irq_spinlock; int event_wait_q; int status_event_wait_q; TYPE_1__ port; int task; int magic; } ;
typedef int MGSL_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct mgsl_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static struct mgsl_struct* FUNC_7(void)
{
 struct mgsl_struct *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct mgsl_struct),
   VAR_0);

 if (!VAR_7) {
  FUNC_4("Error can't allocate device instance data\n");
 } else {
  FUNC_6(&VAR_7->port);
  VAR_7->port.ops = &VAR_6;
  VAR_7->magic = VAR_3;
  FUNC_0(&VAR_7->task, VAR_5);
  VAR_7->max_frame_size = 4096;
  VAR_7->port.close_delay = 5*VAR_2/10;
  VAR_7->port.closing_wait = 30*VAR_2;
  FUNC_1(&VAR_7->status_event_wait_q);
  FUNC_1(&VAR_7->event_wait_q);
  FUNC_5(&VAR_7->irq_spinlock);
  FUNC_5(&VAR_7->netlock);
  FUNC_3(&VAR_7->params,&VAR_4,sizeof(MGSL_PARAMS));
  VAR_7->idle_mode = VAR_1;
  VAR_7->num_tx_dma_buffers = 1;
  VAR_7->num_tx_holding_buffers = 0;
 }

 return VAR_7;

}
