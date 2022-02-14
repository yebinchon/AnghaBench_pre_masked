
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* afu_read_err_buffer ) (struct cxl_afu*,char*,int ,size_t) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct cxl_afu*,char*,int ,size_t) ;
 struct cxl_afu* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, struct kobject *VAR_2,
          struct bin_attribute *VAR_3, char *VAR_4,
          loff_t VAR_5, size_t VAR_6)
{
 struct cxl_afu *VAR_7 = FUNC_2(FUNC_0(VAR_2));

 return VAR_0->afu_read_err_buffer(VAR_7, VAR_4, VAR_5, VAR_6);
}
