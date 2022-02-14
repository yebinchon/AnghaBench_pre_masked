
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned short*) ;
 unsigned short VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 unsigned short VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_1 = VAR_6;
 FUNC_0(FUNC_1(VAR_2), VAR_0, VAR_1);

 return VAR_5;
}
