
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tmp ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int,int) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5, ((void*)0), 10);
 int VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7,
           sizeof(VAR_7), sizeof(VAR_7));
 if (VAR_8)
  return VAR_8 < 0 ? VAR_8 : -VAR_0;

 return VAR_6;
}
