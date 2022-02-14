
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxlflash_cfg {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int,struct cxlflash_cfg*,char*) ;
 struct cxlflash_cfg* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct cxlflash_cfg *VAR_3 = FUNC_2(FUNC_0(VAR_0));

 return FUNC_1(2, VAR_3, VAR_2);
}
