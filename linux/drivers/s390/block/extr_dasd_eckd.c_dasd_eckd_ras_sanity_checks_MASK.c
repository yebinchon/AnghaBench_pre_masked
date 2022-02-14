
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {unsigned int real_cyl; TYPE_1__ rdc_data; } ;
struct dasd_device {TYPE_2__* cdev; struct dasd_eckd_private* private; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dasd_device *VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3)
{
 struct dasd_eckd_private *VAR_4 = VAR_1->private;
 unsigned int VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4->real_cyl * VAR_4->rdc_data.trk_per_cyl;

 if (VAR_2 >= VAR_5) {
  FUNC_0(&VAR_1->cdev->dev,
    "Start track number %u used in the space release command is too big\n",
    VAR_2);
  VAR_6 = -VAR_0;
 } else if (VAR_3 >= VAR_5) {
  FUNC_0(&VAR_1->cdev->dev,
    "Stop track number %u used in the space release command is too big\n",
    VAR_3);
  VAR_6 = -VAR_0;
 } else if (VAR_2 > VAR_3) {
  FUNC_0(&VAR_1->cdev->dev,
    "Start track %u used in the space release command exceeds the end track\n",
    VAR_2);
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
