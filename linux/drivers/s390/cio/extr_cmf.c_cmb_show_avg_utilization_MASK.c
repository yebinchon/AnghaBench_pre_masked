
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,unsigned long,unsigned long) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(FUNC_2(VAR_1), VAR_0);

 return FUNC_1(VAR_3, "%02lu.%01lu%%\n", VAR_4 / 10, VAR_4 % 10);
}
