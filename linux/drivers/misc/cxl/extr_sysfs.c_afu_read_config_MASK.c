
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct kobject {int parent; } ;
struct file {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct bin_attribute {int dummy; } ;
struct afu_config_record {int cr; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {size_t (* afu_cr_read64 ) (struct cxl_afu*,int ,int,size_t*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (struct cxl_afu*,int ,int,size_t*) ;
 struct afu_config_record* FUNC_2 (struct kobject*) ;
 struct cxl_afu* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_1, struct kobject *VAR_2,
          struct bin_attribute *VAR_3, char *VAR_4,
          loff_t VAR_5, size_t VAR_6)
{
 struct afu_config_record *VAR_7 = FUNC_2(VAR_2);
 struct cxl_afu *VAR_8 = FUNC_3(FUNC_0(VAR_2->parent));

 u64 VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_6;) {
  VAR_12 = VAR_0->afu_cr_read64(VAR_8, VAR_7->cr, VAR_5 & ~0x7, &VAR_11);
  if (VAR_12)
   VAR_11 = ~0ULL;
  for (VAR_10 = VAR_5 & 0x7; VAR_10 < 8 && VAR_9 < VAR_6; VAR_9++, VAR_10++, VAR_5++)
   VAR_4[VAR_9] = (VAR_11 >> (VAR_10 * 8)) & 0xff;
 }

 return VAR_6;
}
