
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ queue_depth; scalar_t__ hw_queue_depth; } ;
struct se_device {scalar_t__ queue_depth; TYPE_1__ dev_attrib; scalar_t__ export_count; } ;
struct se_dev_attrib {scalar_t__ queue_depth; struct se_device* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,scalar_t__*) ;
 int FUNC_1 (char*,struct se_device*,scalar_t__) ;
 int FUNC_2 (char*,struct se_device*,...) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_3(VAR_1);
 struct se_device *VAR_5 = VAR_4->da_dev;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5->export_count) {
  FUNC_2("dev[%p]: Unable to change SE Device TCQ while"
   " export_count is %d\n",
   VAR_5, VAR_5->export_count);
  return -VAR_0;
 }
 if (!VAR_6) {
  FUNC_2("dev[%p]: Illegal ZERO value for queue_depth\n", VAR_5);
  return -VAR_0;
 }

 if (VAR_6 > VAR_5->dev_attrib.queue_depth) {
  if (VAR_6 > VAR_5->dev_attrib.hw_queue_depth) {
   FUNC_2("dev[%p]: Passed queue_depth:"
    " %u exceeds TCM/SE_Device MAX"
    " TCQ: %u\n", VAR_5, VAR_6,
    VAR_5->dev_attrib.hw_queue_depth);
   return -VAR_0;
  }
 }
 VAR_4->queue_depth = VAR_5->queue_depth = VAR_6;
 FUNC_1("dev[%p]: SE Device TCQ Depth changed to: %u\n", VAR_5, VAR_6);
 return VAR_3;
}
