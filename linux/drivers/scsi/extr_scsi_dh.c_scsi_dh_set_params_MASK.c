
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_1__* handler; } ;
struct request_queue {int dummy; } ;
struct TYPE_2__ {int (* set_params ) (struct scsi_device*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct scsi_device* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct scsi_device*,char const*) ;

int FUNC_3(struct request_queue *VAR_1, const char *VAR_2)
{
 struct scsi_device *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return VAR_4;

 if (VAR_3->handler && VAR_3->handler->set_params)
  VAR_4 = VAR_3->handler->set_params(VAR_3, VAR_2);
 FUNC_0(&VAR_3->sdev_gendev);
 return VAR_4;
}
