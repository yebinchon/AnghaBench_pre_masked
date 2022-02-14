
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int* feature; } ;
struct dasd_eckd_private {TYPE_2__ features; TYPE_1__* gneq; } ;
struct dasd_device {TYPE_4__* cdev; struct dasd_eckd_private* private; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int fcx; } ;
struct TYPE_5__ {int* reserved2; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static u32 FUNC_2(struct dasd_device *VAR_3)
{
 struct dasd_eckd_private *VAR_4 = VAR_3->private;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2)
  return 0;

 VAR_5 = VAR_1.fcx;
 VAR_6 = VAR_4->gneq->reserved2[7] & 0x04;
 VAR_7 = VAR_4->features.feature[40] & 0x80;
 VAR_8 = VAR_5 && VAR_6 && VAR_7;

 if (!VAR_8)
  return 0;

 VAR_9 = FUNC_0(VAR_3->cdev, 0);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_3->cdev->dev, "Detecting the maximum supported data size for zHPF requests failed\n");
  return 0;
 } else {
  return (u32)VAR_9 * VAR_0;
 }
}
