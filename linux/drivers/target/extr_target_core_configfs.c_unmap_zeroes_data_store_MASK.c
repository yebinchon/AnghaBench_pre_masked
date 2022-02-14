
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct se_dev_attrib {int unmap_zeroes_data; TYPE_1__* da_dev; int max_unmap_block_desc_count; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ export_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 int FUNC_2 (char const*,int*) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct se_dev_attrib *VAR_5 = FUNC_3(VAR_2);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5->da_dev->export_count) {
  FUNC_1("dev[%p]: Unable to change SE Device"
         " unmap_zeroes_data while export_count is %d\n",
         VAR_5->da_dev, VAR_5->da_dev->export_count);
  return -VAR_0;
 }




 if (VAR_6 && !VAR_5->max_unmap_block_desc_count) {
  FUNC_1("dev[%p]: Thin Provisioning LBPRZ will not be set"
         " because max_unmap_block_desc_count is zero\n",
         VAR_5->da_dev);
  return -VAR_1;
 }
 VAR_5->unmap_zeroes_data = VAR_6;
 FUNC_0("dev[%p]: SE Device Thin Provisioning LBPRZ bit: %d\n",
   VAR_5->da_dev, VAR_6);
 return VAR_4;
}
