
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {scalar_t__ stack; scalar_t__ internal; int total_link_count; struct nameidata* saved; } ;
struct TYPE_2__ {struct nameidata* nameidata; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct nameidata *VAR_1 = VAR_0->nameidata, *VAR_2 = VAR_1->saved;

 VAR_0->nameidata = VAR_2;
 if (VAR_2)
  VAR_2->total_link_count = VAR_1->total_link_count;
 if (VAR_1->stack != VAR_1->internal)
  FUNC_0(VAR_1->stack);
}
