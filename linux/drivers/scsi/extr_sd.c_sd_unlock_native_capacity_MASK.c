
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {TYPE_2__* host; } ;
struct gendisk {int dummy; } ;
struct TYPE_6__ {struct scsi_device* device; } ;
struct TYPE_5__ {TYPE_1__* hostt; } ;
struct TYPE_4__ {int (* unlock_native_capacity ) (struct scsi_device*) ;} ;


 TYPE_3__* FUNC_0 (struct gendisk*) ;
 int FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_0)
{
 struct scsi_device *VAR_1 = FUNC_0(VAR_0)->device;

 if (VAR_1->host->hostt->unlock_native_capacity)
  VAR_1->host->hostt->unlock_native_capacity(VAR_1);
}
