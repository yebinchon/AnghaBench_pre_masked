
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dfd; struct nameidata* saved; int total_link_count; struct filename* name; int internal; int stack; } ;
struct filename {int dummy; } ;
struct TYPE_2__ {struct nameidata* nameidata; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nameidata *VAR_1, int VAR_2, struct filename *VAR_3)
{
 struct nameidata *VAR_4 = VAR_0->nameidata;
 VAR_1->stack = VAR_1->internal;
 VAR_1->dfd = VAR_2;
 VAR_1->name = VAR_3;
 VAR_1->total_link_count = VAR_4 ? VAR_4->total_link_count : 0;
 VAR_1->saved = VAR_4;
 VAR_0->nameidata = VAR_1;
}
