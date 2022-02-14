
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,char*) ;
 struct nvdimm_drvdata* FUNC_1 (struct device*) ;
 int FUNC_2 (struct nvdimm_drvdata*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nvdimm_drvdata *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5;
 u32 VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_1);
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 - 1 > VAR_6) {
  FUNC_0(VAR_1, 1, "we ate our last label?\n");
  VAR_6 = 0;
 } else
  VAR_6--;
 VAR_5 = FUNC_5(VAR_3, "%d\n", VAR_6);
 FUNC_4(VAR_1);
 return VAR_5;
}
