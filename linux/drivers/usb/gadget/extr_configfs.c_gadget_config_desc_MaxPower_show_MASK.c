
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int MaxPower; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_2__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", FUNC_1(VAR_0)->c.MaxPower);
}
