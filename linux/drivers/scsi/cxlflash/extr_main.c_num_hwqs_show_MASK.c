
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxlflash_cfg {struct afu* afu; } ;
struct afu {int num_hwqs; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 struct cxlflash_cfg* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct cxlflash_cfg *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 struct afu *VAR_5 = VAR_4->afu;

 return FUNC_1(VAR_3, VAR_0, "%u\n", VAR_5->num_hwqs);
}
