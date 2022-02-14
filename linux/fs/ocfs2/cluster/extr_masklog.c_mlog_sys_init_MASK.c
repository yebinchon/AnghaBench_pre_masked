
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kset {int dummy; } ;
struct TYPE_9__ {struct kset* kset; } ;
struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_7__ {TYPE_3__ attr; } ;
struct TYPE_6__ {TYPE_5__ kobj; } ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__** VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_2(struct kset *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_1[VAR_4].attr.mode) {
  VAR_0[VAR_4] = &VAR_1[VAR_4].attr;
  VAR_4++;
 }
 VAR_0[VAR_4] = ((void*)0);

 FUNC_0(&VAR_2.kobj, "logmask");
 VAR_2.kobj.kset = VAR_3;
 return FUNC_1(&VAR_2);
}
