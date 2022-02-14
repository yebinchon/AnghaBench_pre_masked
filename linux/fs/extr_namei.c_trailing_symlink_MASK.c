
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {TYPE_1__* stack; int flags; } ;
struct TYPE_2__ {int * name; } ;


 char const* FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (struct nameidata*) ;
 int FUNC_2 (struct nameidata*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static const char *FUNC_4(struct nameidata *VAR_1)
{
 const char *VAR_2;
 int VAR_3 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_3))
  return FUNC_0(VAR_3);
 VAR_1->flags |= VAR_0;
 VAR_1->stack[0].name = ((void*)0);
 VAR_2 = FUNC_1(VAR_1);
 return VAR_2 ? VAR_2 : "";
}
