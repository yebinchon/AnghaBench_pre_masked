
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 return FUNC_0(VAR_6, VAR_0, "0x%08x\n",
   (VAR_1 | VAR_3)
   & ~VAR_2);
}
