
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* unit_serial; } ;


 int FUNC_0 (char*,char*,char*) ;
 TYPE_1__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  char *VAR_1)
{
 return FUNC_0(VAR_1, "T10 VPD Unit Serial Number: %s\n",
  &FUNC_1(VAR_0)->unit_serial[0]);
}
