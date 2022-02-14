
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {scalar_t__ fcx_max_data; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;



__attribute__((used)) static int FUNC_0(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;

 return VAR_1->fcx_max_data ? 1 : 0;
}
