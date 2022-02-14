
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_dev_attrib {int emulate_tpu; int da_dev; int max_unmap_block_desc_count; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
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





 if (VAR_5 && !VAR_4->max_unmap_block_desc_count) {
  FUNC_1("Generic Block Discard not supported\n");
  return -VAR_0;
 }

 VAR_4->emulate_tpu = VAR_5;
 FUNC_0("dev[%p]: SE Device Thin Provisioning UNMAP bit: %d\n",
  VAR_4->da_dev, VAR_5);
 return VAR_3;
}
