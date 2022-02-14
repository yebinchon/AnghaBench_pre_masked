
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ddb*,int ,char*,int,int) ;
 struct ddb* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_1(VAR_0);
 char VAR_4[16];

 FUNC_0(VAR_3, 0, VAR_4, 0x10, 15);
 VAR_4[15] = 0;
 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
