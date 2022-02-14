
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {unsigned long path_thrhld; } ;
typedef size_t ssize_t ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct dasd_device *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_1(FUNC_7(VAR_3));
 if (FUNC_0(VAR_7))
  return -VAR_2;

 if (FUNC_4(VAR_5, 10, &VAR_9) != 0 || VAR_9 > VAR_0) {
  FUNC_2(VAR_7);
  return -VAR_1;
 }
 FUNC_5(FUNC_3(FUNC_7(VAR_3)), VAR_8);
 VAR_7->path_thrhld = VAR_9;
 FUNC_6(FUNC_3(FUNC_7(VAR_3)), VAR_8);
 FUNC_2(VAR_7);
 return VAR_6;
}
