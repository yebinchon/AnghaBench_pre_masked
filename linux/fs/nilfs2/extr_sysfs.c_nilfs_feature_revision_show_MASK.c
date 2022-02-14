
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_3,
         struct attribute *VAR_4, char *VAR_5)
{
 return FUNC_0(VAR_5, VAR_2, "%d.%d\n",
   VAR_0, VAR_1);
}
