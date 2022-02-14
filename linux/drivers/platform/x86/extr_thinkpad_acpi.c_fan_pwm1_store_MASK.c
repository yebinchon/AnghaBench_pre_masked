
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;
 u8 VAR_12, VAR_13;

 if (FUNC_6(VAR_8, 255, &VAR_10))
  return -VAR_0;

 FUNC_7("hwmon pwm1",
   "set fan speed to %lu\n", VAR_10);


 VAR_13 = (VAR_10 >> 5) & 0x07;

 if (FUNC_4(&VAR_5))
  return -VAR_2;

 VAR_11 = FUNC_0(&VAR_12);
 if (!VAR_11 && (VAR_12 &
      (VAR_3 | VAR_4)) == 0) {
  VAR_11 = FUNC_1(VAR_13);
  if (VAR_11 == -VAR_1)
   VAR_11 = -VAR_0;
  else if (!VAR_11) {
   FUNC_2(VAR_13);
   FUNC_3();
  }
 }

 FUNC_5(&VAR_5);
 return (VAR_11) ? VAR_11 : VAR_9;
}
