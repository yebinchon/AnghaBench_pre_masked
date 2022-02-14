
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ** attrs; int match; int * class; } ;
struct TYPE_4__ {TYPE_3__ ac; } ;
struct raid_template {TYPE_1__ raid_attrs; } ;
struct raid_internal {struct raid_template r; int ** attrs; struct raid_function_template* f; } ;
struct raid_function_template {int dummy; } ;
struct TYPE_5__ {int class; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct raid_internal* FUNC_2 (int,int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;

struct raid_template *
FUNC_4(struct raid_function_template *VAR_7)
{
 struct raid_internal *VAR_8 = FUNC_2(sizeof(struct raid_internal),
       VAR_0);
 int VAR_9 = 0;

 if (FUNC_3(!VAR_8))
  return ((void*)0);

 VAR_8->f = VAR_7;

 VAR_8->r.raid_attrs.ac.class = &VAR_5.class;
 VAR_8->r.raid_attrs.ac.match = VAR_6;
 VAR_8->r.raid_attrs.ac.attrs = &VAR_8->attrs[0];

 FUNC_1(&VAR_8->r.raid_attrs.ac);

 VAR_8->attrs[VAR_9++] = &VAR_2;
 VAR_8->attrs[VAR_9++] = &VAR_3;
 VAR_8->attrs[VAR_9++] = &VAR_4;

 VAR_8->attrs[VAR_9] = ((void*)0);
 FUNC_0(VAR_9 > VAR_1);

 return &VAR_8->r;
}
