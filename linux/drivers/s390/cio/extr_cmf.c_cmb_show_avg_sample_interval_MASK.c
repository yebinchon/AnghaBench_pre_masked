
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
typedef int ssize_t ;
struct TYPE_2__ {long cmb_start_time; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct ccw_device*,int ) ;
 long FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,long) ;
 struct ccw_device* FUNC_5 (struct device*) ;
 long FUNC_6 (long) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct ccw_device *VAR_4 = FUNC_5(VAR_1);
 unsigned long VAR_5;
 long VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_2(VAR_4->ccwlock);
 if (VAR_5) {
  VAR_6 = FUNC_1() - VAR_4->private->cmb_start_time;
  VAR_6 = FUNC_6(VAR_6);
  VAR_6 /= VAR_5;
 } else
  VAR_6 = -1;
 FUNC_3(VAR_4->ccwlock);
 return FUNC_4(VAR_3, "%ld\n", VAR_6);
}
