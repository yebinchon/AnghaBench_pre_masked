
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_port {int inline_data_size; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (char*,...) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nvmet_port *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_5->enabled) {
  FUNC_1("Cannot modify inline_data_size while port enabled\n");
  FUNC_1("Disable the port before modifying\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_3, 0, &VAR_5->inline_data_size);
 if (VAR_6) {
  FUNC_1("Invalid value '%s' for inline_data_size\n", VAR_3);
  return -VAR_1;
 }
 return VAR_4;
}
