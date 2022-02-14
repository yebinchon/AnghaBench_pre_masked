
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rio_dev*,int ,int*) ;
 int FUNC_1 (char*,int,char*,int) ;
 struct rio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct rio_dev *VAR_5 = FUNC_2(VAR_2);
 ssize_t VAR_6 = 0;
 u32 VAR_7;

 while (!FUNC_0(VAR_5, VAR_0, &VAR_7)) {
  if (!VAR_7)
   break;
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_1 - VAR_6,
     "%08x\n", VAR_7);
  if (VAR_6 >= (VAR_1 - 10))
   break;
 }

 return VAR_6;
}
