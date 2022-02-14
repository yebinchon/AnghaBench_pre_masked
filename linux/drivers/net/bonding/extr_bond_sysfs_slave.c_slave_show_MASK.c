
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave_attribute {int (* show ) (struct slave*,char*) ;} ;
struct slave {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct slave*,char*) ;
 struct slave* FUNC_1 (struct kobject*) ;
 struct slave_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0,
     struct attribute *VAR_1, char *VAR_2)
{
 struct slave_attribute *VAR_3 = FUNC_2(VAR_1);
 struct slave *VAR_4 = FUNC_1(VAR_0);

 return VAR_3->show(VAR_4, VAR_2);
}
