
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ddb*,int,int ) ;
 struct ddb* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct ddb *VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8;

 if (FUNC_2(VAR_5, "%u\n", &VAR_8) != 1)
  return -VAR_0;
 FUNC_0(VAR_7, 1, VAR_1);
 FUNC_0(VAR_7, VAR_8 & 1, VAR_2);
 return VAR_6;
}
