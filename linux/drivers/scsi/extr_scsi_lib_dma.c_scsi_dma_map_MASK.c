
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; TYPE_2__* device; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {struct device* dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct scsi_cmnd *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1)) {
  struct device *VAR_3 = VAR_1->device->host->dma_dev;

  VAR_2 = FUNC_0(VAR_3, FUNC_2(VAR_1), FUNC_1(VAR_1),
      VAR_1->sc_data_direction);
  if (FUNC_3(!VAR_2))
   return -VAR_0;
 }
 return VAR_2;
}
