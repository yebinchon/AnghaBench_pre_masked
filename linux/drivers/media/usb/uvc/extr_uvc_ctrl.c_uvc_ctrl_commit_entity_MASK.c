
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_entity {unsigned int ncontrols; struct uvc_control* controls; } ;
struct uvc_device {int intfnum; } ;
struct TYPE_4__ {int flags; int size; int selector; } ;
struct uvc_control {scalar_t__ dirty; TYPE_2__ info; TYPE_1__* entity; scalar_t__ loaded; int initialized; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uvc_control*,int ) ;
 int FUNC_2 (struct uvc_device*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_device *VAR_5,
 struct uvc_entity *VAR_6, int VAR_7)
{
 struct uvc_control *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_6 == ((void*)0))
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_6->ncontrols; ++VAR_9) {
  VAR_8 = &VAR_6->controls[VAR_9];
  if (!VAR_8->initialized)
   continue;







  if (VAR_8->info.flags & VAR_2 ||
      !(VAR_8->info.flags & VAR_3))
   VAR_8->loaded = 0;

  if (!VAR_8->dirty)
   continue;

  if (!VAR_7)
   VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_8->entity->id,
    VAR_5->intfnum, VAR_8->info.selector,
    FUNC_1(VAR_8, VAR_1),
    VAR_8->info.size);
  else
   VAR_10 = 0;

  if (VAR_7 || VAR_10 < 0)
   FUNC_0(FUNC_1(VAR_8, VAR_1),
          FUNC_1(VAR_8, VAR_0),
          VAR_8->info.size);

  VAR_8->dirty = 0;

  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
