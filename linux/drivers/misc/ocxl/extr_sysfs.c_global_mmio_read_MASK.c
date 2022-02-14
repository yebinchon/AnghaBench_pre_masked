
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ global_mmio_size; } ;
struct ocxl_afu {scalar_t__ global_mmio_ptr; TYPE_1__ config; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 struct ocxl_afu* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3,
    loff_t VAR_4, size_t VAR_5)
{
 struct ocxl_afu *VAR_6 = FUNC_2(FUNC_0(VAR_1));

 if (VAR_5 == 0 || VAR_4 < 0 ||
  VAR_4 >= VAR_6->config.global_mmio_size)
  return 0;
 FUNC_1(VAR_3, VAR_6->global_mmio_ptr + VAR_4, VAR_5);
 return VAR_5;
}
