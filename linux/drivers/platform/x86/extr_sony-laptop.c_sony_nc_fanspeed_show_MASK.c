
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_1(0x0149, 0x0300, &VAR_5))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_1, "%d\n", VAR_5 & 0xff);
}
