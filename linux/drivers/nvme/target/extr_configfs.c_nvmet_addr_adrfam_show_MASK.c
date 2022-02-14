
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int adrfam; } ;
struct TYPE_4__ {TYPE_1__ disc_addr; } ;






 int FUNC_0 (char*,char*) ;
 TYPE_2__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  char *VAR_1)
{
 switch (FUNC_1(VAR_0)->disc_addr.adrfam) {
 case 129:
  return FUNC_0(VAR_1, "ipv4\n");
 case 128:
  return FUNC_0(VAR_1, "ipv6\n");
 case 130:
  return FUNC_0(VAR_1, "ib\n");
 case 131:
  return FUNC_0(VAR_1, "fc\n");
 default:
  return FUNC_0(VAR_1, "\n");
 }
}
