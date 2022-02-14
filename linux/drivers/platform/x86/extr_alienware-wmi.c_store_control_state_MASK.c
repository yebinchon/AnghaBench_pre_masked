
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (char*,unsigned long) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_7,
       struct device_attribute *VAR_8,
       const char *VAR_9, size_t VAR_10)
{
 long unsigned int VAR_11;
 if (FUNC_1(VAR_9, "booting\n") == 0)
  VAR_11 = VAR_1;
 else if (FUNC_1(VAR_9, "suspend\n") == 0)
  VAR_11 = VAR_3;
 else if (VAR_5 == VAR_0)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_4;
 VAR_6 = VAR_11;
 FUNC_0("alienware-wmi: updated control state to %d\n",
   VAR_6);
 return VAR_10;
}
