
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct format_data_t {int start_unit; int stop_unit; int blksize; } ;
struct TYPE_3__ {int trk_per_cyl; } ;
struct dasd_eckd_private {int real_cyl; TYPE_1__ rdc_data; } ;
struct dasd_device {TYPE_2__* cdev; struct dasd_eckd_private* private; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_1,
       struct format_data_t *VAR_2)
{
 struct dasd_eckd_private *VAR_3 = VAR_1->private;

 if (VAR_2->start_unit >=
     (VAR_3->real_cyl * VAR_3->rdc_data.trk_per_cyl)) {
  FUNC_1(&VAR_1->cdev->dev,
    "Start track number %u used in formatting is too big\n",
    VAR_2->start_unit);
  return -VAR_0;
 }
 if (VAR_2->stop_unit >=
     (VAR_3->real_cyl * VAR_3->rdc_data.trk_per_cyl)) {
  FUNC_1(&VAR_1->cdev->dev,
    "Stop track number %u used in formatting is too big\n",
    VAR_2->stop_unit);
  return -VAR_0;
 }
 if (VAR_2->start_unit > VAR_2->stop_unit) {
  FUNC_1(&VAR_1->cdev->dev,
    "Start track %u used in formatting exceeds end track\n",
    VAR_2->start_unit);
  return -VAR_0;
 }
 if (FUNC_0(VAR_2->blksize) != 0) {
  FUNC_1(&VAR_1->cdev->dev,
    "The DASD cannot be formatted with block size %u\n",
    VAR_2->blksize);
  return -VAR_0;
 }
 return 0;
}
