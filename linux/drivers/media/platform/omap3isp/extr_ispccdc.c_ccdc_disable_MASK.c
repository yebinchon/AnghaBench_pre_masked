
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free_queue; int table_work; int * active; int * request; } ;
struct isp_ccdc_device {scalar_t__ state; scalar_t__ stopping; int ioctl_lock; TYPE_1__ lsc; int wait; int lock; int running; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct isp_ccdc_device*,int *) ;
 int FUNC_2 (struct isp_ccdc_device*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct isp_ccdc_device*) ;
 int FUNC_11 (struct isp_ccdc_device*) ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static int FUNC_13(struct isp_ccdc_device *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_8(&VAR_6->lock, VAR_7);
 if (VAR_6->state == VAR_4)
  VAR_6->stopping = VAR_2;
 if (!VAR_6->running)
  VAR_6->stopping = VAR_0;
 FUNC_9(&VAR_6->lock, VAR_7);

 VAR_8 = FUNC_12(VAR_6->wait,
     VAR_6->stopping == VAR_0,
     FUNC_4(2000));
 if (VAR_8 == 0) {
  VAR_8 = -VAR_3;
  FUNC_3(FUNC_10(VAR_6), "CCDC stop timeout!\n");
 }

 FUNC_7(FUNC_11(VAR_6), VAR_5);

 FUNC_5(&VAR_6->ioctl_lock);
 FUNC_2(VAR_6, VAR_6->lsc.request);
 VAR_6->lsc.request = VAR_6->lsc.active;
 VAR_6->lsc.active = ((void*)0);
 FUNC_0(&VAR_6->lsc.table_work);
 FUNC_1(VAR_6, &VAR_6->lsc.free_queue);
 FUNC_6(&VAR_6->ioctl_lock);

 VAR_6->stopping = VAR_1;

 return VAR_8 > 0 ? 0 : VAR_8;
}
