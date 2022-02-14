
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trsvcid; } ;
struct nvmet_port {TYPE_1__ disc_addr; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,char*,int ) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct nvmet_port *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5 > VAR_2) {
  FUNC_0("Invalid value '%s' for trsvcid\n", VAR_4);
  return -VAR_1;
 }
 if (VAR_6->enabled) {
  FUNC_0("Cannot modify address while enabled\n");
  FUNC_0("Disable the address before modifying\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_4, "%s\n", VAR_6->disc_addr.trsvcid) != 1)
  return -VAR_1;
 return VAR_5;
}
