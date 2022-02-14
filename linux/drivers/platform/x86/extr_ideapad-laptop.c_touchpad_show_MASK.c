
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
 scalar_t__ FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct ideapad_private *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;

 if (FUNC_1(VAR_4->adev->handle, VAR_0, &VAR_5))
  return FUNC_2(VAR_3, "-1\n");
 return FUNC_2(VAR_3, "%lu\n", VAR_5);
}
