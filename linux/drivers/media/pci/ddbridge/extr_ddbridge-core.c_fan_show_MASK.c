
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ddb*,int ) ;
 struct ddb* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct ddb *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0) & 1;
 return FUNC_2(VAR_3, "%d\n", VAR_5);
}
