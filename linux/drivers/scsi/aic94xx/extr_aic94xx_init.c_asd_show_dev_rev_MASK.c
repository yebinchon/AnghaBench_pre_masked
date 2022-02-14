
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asd_ha_struct {size_t revision_id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char** VAR_1 ;
 struct asd_ha_struct* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct asd_ha_struct *VAR_5 = FUNC_0(VAR_2);
 return FUNC_1(VAR_4, VAR_0, "%s\n",
   VAR_1[VAR_5->revision_id]);
}
