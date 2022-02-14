
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int treq; } ;
struct TYPE_4__ {TYPE_1__ disc_addr; } ;


 int VAR_0 ;



 int FUNC_0 (char*,char*) ;
 TYPE_2__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  char *VAR_2)
{
 switch (FUNC_1(VAR_1)->disc_addr.treq &
  VAR_0) {
 case 129:
  return FUNC_0(VAR_2, "not specified\n");
 case 128:
  return FUNC_0(VAR_2, "required\n");
 case 130:
  return FUNC_0(VAR_2, "not required\n");
 default:
  return FUNC_0(VAR_2, "\n");
 }
}
