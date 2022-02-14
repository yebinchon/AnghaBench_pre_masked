
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 struct ideapad_private* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct ideapad_private *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_4->adev->handle, "HALS", &VAR_6);

 if (VAR_7)
  return FUNC_2(VAR_3, "-1\n");

 VAR_5 = VAR_6;
 return FUNC_2(VAR_3, "%u\n", FUNC_3(VAR_0, &VAR_5));
}
