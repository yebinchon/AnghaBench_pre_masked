
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int pr_generation; } ;
struct TYPE_4__ {TYPE_1__ t10_pr; } ;


 TYPE_2__* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  char *VAR_1)
{
 return FUNC_1(VAR_1, "0x%08x\n", FUNC_0(VAR_0)->t10_pr.pr_generation);
}
