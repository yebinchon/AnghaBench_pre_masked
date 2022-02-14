
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxlflash_cfg {struct afu* afu; } ;
struct afu {size_t hwq_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int * VAR_1 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 struct cxlflash_cfg* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct cxlflash_cfg *VAR_5 = FUNC_2(FUNC_0(VAR_2));
 struct afu *VAR_6 = VAR_5->afu;

 return FUNC_1(VAR_4, VAR_0, "%s\n", VAR_1[VAR_6->hwq_mode]);
}
