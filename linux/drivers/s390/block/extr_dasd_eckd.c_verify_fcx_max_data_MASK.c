
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dasd_eckd_private {int fcx_max_data; } ;
struct dasd_device {TYPE_1__* cdev; struct dasd_eckd_private* private; } ;
typedef int __u8 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,int,int ,...) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_2, __u8 VAR_3)
{
 struct dasd_eckd_private *VAR_4 = VAR_2->private;
 int VAR_5;
 u32 VAR_6;

 if (VAR_4->fcx_max_data) {
  VAR_5 = FUNC_0(VAR_2->cdev, VAR_3);
  if ((VAR_5 < 0)) {
   FUNC_1(&VAR_2->cdev->dev,
     "Detecting the maximum data size for zHPF "
     "requests failed (rc=%d) for a new path %x\n",
     VAR_5, VAR_3);
   return VAR_5;
  }
  VAR_6 = (u32)VAR_5 * VAR_1;
  if (VAR_6 < VAR_4->fcx_max_data) {
   FUNC_1(&VAR_2->cdev->dev,
     "The maximum data size for zHPF requests %u "
     "on a new path %x is below the active maximum "
     "%u\n", VAR_6, VAR_3,
     VAR_4->fcx_max_data);
   return -VAR_0;
  }
 }
 return 0;
}
