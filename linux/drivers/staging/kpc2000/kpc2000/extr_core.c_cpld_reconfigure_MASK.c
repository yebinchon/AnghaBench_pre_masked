
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kp2000_device {scalar_t__ sysinfo_regs_base; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kp2000_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct kp2000_device *VAR_6 = FUNC_0(VAR_2);
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 > 7)
  return -VAR_0;

 VAR_7 = VAR_7 << 8;
 VAR_7 |= 0x1;
 FUNC_2(VAR_7, VAR_6->sysinfo_regs_base + VAR_1);
 return VAR_5;
}
