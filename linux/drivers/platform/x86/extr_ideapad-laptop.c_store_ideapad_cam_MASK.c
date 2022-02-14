
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int handle; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ideapad_private* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 struct ideapad_private *VAR_9 = FUNC_0(VAR_3);

 if (!VAR_6)
  return 0;
 if (FUNC_1(VAR_5, "%i", &VAR_8) != 1)
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_9->adev->handle, VAR_2, VAR_8);
 if (VAR_7 < 0)
  return -VAR_1;
 return VAR_6;
}
