
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct se_dev_attrib {int block_size; int max_bytes_per_io; int hw_max_sectors; TYPE_1__* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int export_count; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (char*,TYPE_1__*,int) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->da_dev->export_count) {
  FUNC_2("dev[%p]: Unable to change SE Device block_size"
   " while export_count is %d\n",
   VAR_4->da_dev, VAR_4->da_dev->export_count);
  return -VAR_0;
 }

 if (VAR_5 != 512 && VAR_5 != 1024 && VAR_5 != 2048 && VAR_5 != 4096) {
  FUNC_2("dev[%p]: Illegal value for block_device: %u"
   " for SE device, must be 512, 1024, 2048 or 4096\n",
   VAR_4->da_dev, VAR_5);
  return -VAR_0;
 }

 VAR_4->block_size = VAR_5;
 if (VAR_4->max_bytes_per_io)
  VAR_4->hw_max_sectors = VAR_4->max_bytes_per_io / VAR_5;

 FUNC_1("dev[%p]: SE Device block_size changed to %u\n",
   VAR_4->da_dev, VAR_5);
 return VAR_3;
}
