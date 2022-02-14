
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
typedef int __u8 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dasd_device*,int) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_0, __u8 VAR_1)
{
 if (~VAR_1 & FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_1);
  FUNC_3(&VAR_0->cdev->dev,
   "Channel path %02X lost HPF functionality and is disabled\n",
   VAR_1);
  return 1;
 }
 return 0;
}
