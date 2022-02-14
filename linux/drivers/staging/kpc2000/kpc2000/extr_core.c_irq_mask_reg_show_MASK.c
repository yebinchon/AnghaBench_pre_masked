
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kp2000_device {scalar_t__ sysinfo_regs_base; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct kp2000_device* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct kp2000_device *VAR_4 = FUNC_0(VAR_1);
 u64 VAR_5;

 VAR_5 = FUNC_1(VAR_4->sysinfo_regs_base + VAR_0);
 return FUNC_2(VAR_3, "%016llx\n", VAR_5);
}
