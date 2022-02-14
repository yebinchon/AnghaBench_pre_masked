
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
 int VAR_1 ;
 int VAR_2 ;
 struct ideapad_private* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct ideapad_private *VAR_7 = FUNC_0(VAR_3);
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7->adev->handle, "SALS", VAR_8 ?
     VAR_2 :
     VAR_1);
 if (VAR_9 < 0)
  return -VAR_0;
 return VAR_6;
}
