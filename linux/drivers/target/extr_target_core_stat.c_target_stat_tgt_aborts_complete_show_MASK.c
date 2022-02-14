
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int aborts_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 TYPE_1__* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
  char *VAR_2)
{
 return FUNC_1(VAR_2, VAR_0, "%lu\n",
   FUNC_0(&FUNC_2(VAR_1)->aborts_complete));
}
