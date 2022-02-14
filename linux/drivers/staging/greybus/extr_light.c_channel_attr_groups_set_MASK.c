
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct led_classdev {TYPE_1__** groups; } ;
struct gb_channel {int flags; TYPE_1__** attr_groups; TYPE_1__* attr_group; int ** attrs; } ;
struct TYPE_8__ {int attr; } ;
struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_5__ {int ** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 void* FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_channel *VAR_7,
       struct led_classdev *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_7->flags & VAR_2)
  VAR_10++;
 if (VAR_7->flags & VAR_1)
  VAR_10 += 2;

 if (!VAR_10)
  return 0;


 VAR_7->attrs = FUNC_0(VAR_10 + 1, sizeof(*VAR_7->attrs), VAR_3);
 if (!VAR_7->attrs)
  return -VAR_0;
 VAR_7->attr_group = FUNC_0(1, sizeof(*VAR_7->attr_group),
          VAR_3);
 if (!VAR_7->attr_group)
  return -VAR_0;
 VAR_7->attr_groups = FUNC_0(2, sizeof(*VAR_7->attr_groups),
           VAR_3);
 if (!VAR_7->attr_groups)
  return -VAR_0;

 if (VAR_7->flags & VAR_2)
  VAR_7->attrs[VAR_9++] = &VAR_4.attr;
 if (VAR_7->flags & VAR_1) {
  VAR_7->attrs[VAR_9++] = &VAR_5.attr;
  VAR_7->attrs[VAR_9++] = &VAR_6.attr;
 }

 VAR_7->attr_group->attrs = VAR_7->attrs;

 VAR_7->attr_groups[0] = VAR_7->attr_group;

 VAR_8->groups = VAR_7->attr_groups;

 return 0;
}
