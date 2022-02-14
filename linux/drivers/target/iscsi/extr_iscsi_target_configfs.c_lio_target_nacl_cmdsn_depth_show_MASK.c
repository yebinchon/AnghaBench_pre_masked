
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int queue_depth; } ;


 TYPE_1__* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  char *VAR_1)
{
 return FUNC_1(VAR_1, "%u\n", FUNC_0(VAR_0)->queue_depth);
}
