
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_1__* handler; } ;
struct request_queue {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int name; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct scsi_device* FUNC_2 (struct request_queue*) ;

const char *FUNC_3(struct request_queue *VAR_0, gfp_t VAR_1)
{
 struct scsi_device *VAR_2;
 const char *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 if (VAR_2->handler)
  VAR_3 = FUNC_0(VAR_2->handler->name, VAR_1);
 FUNC_1(&VAR_2->sdev_gendev);
 return VAR_3;
}
