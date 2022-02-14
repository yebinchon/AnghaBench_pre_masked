
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {TYPE_1__* sd; } ;
struct TYPE_3__ {void* ns; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,void const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct kobject *VAR_1, struct kobject *VAR_2,
   const char *VAR_3)
{
 const void *VAR_4 = ((void*)0);






 FUNC_2(&VAR_0);
 if (VAR_2->sd && FUNC_0(VAR_1->sd))
  VAR_4 = VAR_2->sd->ns;
 FUNC_3(&VAR_0);
 FUNC_1(VAR_1->sd, VAR_3, VAR_4);
}
