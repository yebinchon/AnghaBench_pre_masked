
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdw; } ;
struct pvr2_sysfs {TYPE_1__ channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pvr2_sysfs* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct pvr2_sysfs *VAR_5;
 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5) return -VAR_0;
 return FUNC_2(VAR_4,VAR_1,"%d\n",
    FUNC_1(VAR_5->channel.hdw));
}
