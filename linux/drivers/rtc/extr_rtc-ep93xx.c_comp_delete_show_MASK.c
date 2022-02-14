
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int *,unsigned short*) ;
 int FUNC_1 (char*,char*,unsigned short) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned short VAR_3;

 FUNC_0(VAR_0->parent, ((void*)0), &VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_3);
}
