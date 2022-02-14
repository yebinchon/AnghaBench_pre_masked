
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct typec_altmode_desc {int mode; int roles; int vdo; int svid; } ;
struct TYPE_10__ {int * bus; int * type; TYPE_1__** groups; struct device* parent; } ;
struct typec_altmode {int mode; int active; TYPE_2__ dev; int vdo; int svid; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int ** attrs; int name; } ;
struct altmode {unsigned int id; struct typec_altmode adev; int nh; TYPE_1__** groups; TYPE_1__ group; int ** attrs; int group_name; int roles; } ;
struct TYPE_14__ {int attr; } ;
struct TYPE_13__ {int attr; } ;
struct TYPE_12__ {int attr; } ;
struct TYPE_11__ {int attr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct typec_altmode* FUNC_1 (int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct device*) ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_2__*,char*,int ,unsigned int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 struct altmode* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_12 (struct altmode*) ;
 int VAR_7 ;

__attribute__((used)) static struct typec_altmode *
FUNC_13(struct device *VAR_8,
         const struct typec_altmode_desc *VAR_9)
{
 unsigned int VAR_10 = FUNC_2(VAR_8);
 bool VAR_11 = FUNC_8(VAR_8);
 struct altmode *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_1(-VAR_0);

 VAR_12->adev.svid = VAR_9->svid;
 VAR_12->adev.mode = VAR_9->mode;
 VAR_12->adev.vdo = VAR_9->vdo;
 VAR_12->roles = VAR_9->roles;
 VAR_12->id = VAR_10;

 VAR_12->attrs[0] = &VAR_5.attr;
 VAR_12->attrs[1] = &VAR_3.attr;
 VAR_12->attrs[2] = &VAR_2.attr;

 if (VAR_11) {
  VAR_12->attrs[3] = &VAR_4.attr;
  VAR_12->adev.active = 1;
 }

 FUNC_11(VAR_12->group_name, "mode%d", VAR_9->mode);
 VAR_12->group.name = VAR_12->group_name;
 VAR_12->group.attrs = VAR_12->attrs;
 VAR_12->groups[0] = &VAR_12->group;

 VAR_12->adev.dev.parent = VAR_8;
 VAR_12->adev.dev.groups = VAR_12->groups;
 VAR_12->adev.dev.type = &VAR_6;
 FUNC_5(&VAR_12->adev.dev, "%s.%u", FUNC_4(VAR_8), VAR_10);


 if (VAR_11)
  FUNC_0(&VAR_12->nh);
 else
  FUNC_12(VAR_12);


 if (FUNC_7(VAR_8))
  VAR_12->adev.dev.bus = &VAR_7;

 VAR_13 = FUNC_6(&VAR_12->adev.dev);
 if (VAR_13) {
  FUNC_3(VAR_8, "failed to register alternate mode (%d)\n",
   VAR_13);
  FUNC_10(&VAR_12->adev.dev);
  return FUNC_1(VAR_13);
 }

 return &VAR_12->adev;
}
