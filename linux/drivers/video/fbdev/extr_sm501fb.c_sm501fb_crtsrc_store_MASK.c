
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {scalar_t__ regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 struct sm501fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct sm501fb_info*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_7,
    struct device_attribute *VAR_8,
    const char *VAR_9, size_t VAR_10)
{
 struct sm501fb_info *VAR_11 = FUNC_0(VAR_7);
 enum sm501_controller VAR_12;
 unsigned long VAR_13;

 if (VAR_10 < 1)
  return -VAR_0;

 if (FUNC_5(VAR_9, "crt", 3) == 0)
  VAR_12 = VAR_1;
 else if (FUNC_5(VAR_9, "panel", 5) == 0)
  VAR_12 = VAR_2;
 else
  return -VAR_0;

 FUNC_1(VAR_7, "setting crt source to head %d\n", VAR_12);

 VAR_13 = FUNC_3(VAR_11->regs + VAR_3);

 if (VAR_12 == VAR_1) {
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_4;
  VAR_13 |= VAR_6;
 } else {
  VAR_13 &= ~VAR_5;
  VAR_13 &= ~VAR_4;
  VAR_13 &= ~VAR_6;
 }

 FUNC_4(VAR_13, VAR_11->regs + VAR_3);
 FUNC_2(VAR_11);

 return VAR_10;
}
