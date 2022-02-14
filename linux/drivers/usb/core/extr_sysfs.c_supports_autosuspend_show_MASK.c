
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ supports_autosuspend; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = (!VAR_1->driver || FUNC_3(VAR_1->driver)->supports_autosuspend);
 FUNC_1(VAR_1);

 return FUNC_2(VAR_3, "%u\n", VAR_4);
}
