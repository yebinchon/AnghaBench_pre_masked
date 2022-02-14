
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_modedef {int default_compression; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct st_modedef* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct st_modedef *VAR_4 = FUNC_0(VAR_1);
 ssize_t VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4->default_compression - 1);
 return VAR_5;
}
