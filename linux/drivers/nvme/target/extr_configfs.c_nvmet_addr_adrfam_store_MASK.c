
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adrfam; } ;
struct nvmet_port {TYPE_1__ disc_addr; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct nvmet_port *VAR_9 = FUNC_2(VAR_6);

 if (VAR_9->enabled) {
  FUNC_0("Cannot modify address while enabled\n");
  FUNC_0("Disable the address before modifying\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_7, "ipv4")) {
  VAR_9->disc_addr.adrfam = VAR_4;
 } else if (FUNC_1(VAR_7, "ipv6")) {
  VAR_9->disc_addr.adrfam = VAR_5;
 } else if (FUNC_1(VAR_7, "ib")) {
  VAR_9->disc_addr.adrfam = VAR_3;
 } else if (FUNC_1(VAR_7, "fc")) {
  VAR_9->disc_addr.adrfam = VAR_2;
 } else {
  FUNC_0("Invalid value '%s' for adrfam\n", VAR_7);
  return -VAR_1;
 }

 return VAR_8;
}
