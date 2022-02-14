
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {unsigned int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 struct rproc* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct rproc *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;

 VAR_6 = VAR_5->state > VAR_0 ? VAR_0 : VAR_5->state;
 return FUNC_0(VAR_4, "%s\n", VAR_1[VAR_6]);
}
