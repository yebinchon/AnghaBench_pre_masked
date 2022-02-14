
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_dev_attrib {int emulate_write_cache; TYPE_2__* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* transport; } ;
struct TYPE_3__ {scalar_t__ get_write_cache; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int*) ;
 struct se_dev_attrib* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 && VAR_4->da_dev->transport->get_write_cache) {
  FUNC_1("emulate_write_cache not supported for this device\n");
  return -VAR_0;
 }

 VAR_4->emulate_write_cache = VAR_5;
 FUNC_0("dev[%p]: SE Device WRITE_CACHE_EMULATION flag: %d\n",
   VAR_4->da_dev, VAR_5);
 return VAR_3;
}
