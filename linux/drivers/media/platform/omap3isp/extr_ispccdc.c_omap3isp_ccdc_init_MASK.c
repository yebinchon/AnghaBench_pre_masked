
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dcsubval; scalar_t__ oblen; } ;
struct TYPE_3__ {int req_lock; int free_queue; int state; int table_work; } ;
struct isp_ccdc_device {int ioctl_lock; int update; TYPE_2__ clamp; TYPE_1__ lsc; int stopping; int wait; int lock; } ;
struct isp_device {struct isp_ccdc_device isp_ccdc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (struct isp_ccdc_device*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct isp_device *VAR_4)
{
 struct isp_ccdc_device *VAR_5 = &VAR_4->isp_ccdc;
 int VAR_6;

 FUNC_7(&VAR_5->lock);
 FUNC_4(&VAR_5->wait);
 FUNC_6(&VAR_5->ioctl_lock);

 VAR_5->stopping = VAR_0;

 FUNC_1(&VAR_5->lsc.table_work, VAR_3);
 VAR_5->lsc.state = VAR_1;
 FUNC_0(&VAR_5->lsc.free_queue);
 FUNC_7(&VAR_5->lsc.req_lock);

 VAR_5->clamp.oblen = 0;
 VAR_5->clamp.dcsubval = 0;

 VAR_5->update = VAR_2;
 FUNC_2(VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0) {
  FUNC_5(&VAR_5->ioctl_lock);
  return VAR_6;
 }

 return 0;
}
