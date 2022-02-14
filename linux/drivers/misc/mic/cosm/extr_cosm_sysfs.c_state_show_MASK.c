
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {size_t state; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct cosm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{
 struct cosm_device *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7 || VAR_7->state >= VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_2, "%s\n",
  VAR_3[VAR_7->state]);
}
