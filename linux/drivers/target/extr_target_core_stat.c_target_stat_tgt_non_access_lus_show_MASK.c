
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ export_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 TYPE_1__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  char *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_1)->export_count)
  VAR_3 = 0;
 else
  VAR_3 = 1;

 return FUNC_0(VAR_2, VAR_0, "%u\n", VAR_3);
}
