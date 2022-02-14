
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_3__* sdev_target; } ;
struct TYPE_4__ {int parent; } ;
struct enclosure_device {TYPE_1__ edev; } ;
struct efd {int * dev; scalar_t__ addr; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int FUNC_0 (int ,struct efd*) ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct enclosure_device*,struct scsi_device*,int ) ;
 int VAR_0 ;
 struct scsi_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct enclosure_device *VAR_1,
       struct scsi_device *VAR_2,
       int VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_4(VAR_1->edev.parent);
 struct efd VAR_5 = {
  .addr = 0,
 };

 if (VAR_3)
  FUNC_3(VAR_1, VAR_4, 0);

 if (FUNC_2(VAR_2->sdev_target->dev.parent))
  VAR_5.addr = FUNC_1(VAR_2);

 if (VAR_5.addr) {
  VAR_5.dev = &VAR_2->sdev_gendev;

  FUNC_0(VAR_0, &VAR_5);
 }
}
