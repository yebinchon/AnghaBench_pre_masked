
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_video_chain {TYPE_3__* dev; } ;
struct uvc_control_mapping {int dummy; } ;
struct TYPE_5__ {int flags; int size; int selector; } ;
struct uvc_control {int loaded; TYPE_2__ info; TYPE_1__* entity; } ;
typedef int s32 ;
struct TYPE_6__ {int intfnum; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_control_mapping*,int ) ;
 int FUNC_1 (struct uvc_control*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_video_chain *VAR_4,
 struct uvc_control *VAR_5, struct uvc_control_mapping *VAR_6,
 s32 *VAR_7)
{
 int VAR_8;

 if ((VAR_5->info.flags & VAR_2) == 0)
  return -VAR_0;

 if (!VAR_5->loaded) {
  VAR_8 = FUNC_2(VAR_4->dev, VAR_3, VAR_5->entity->id,
    VAR_4->dev->intfnum, VAR_5->info.selector,
    FUNC_1(VAR_5, VAR_1),
    VAR_5->info.size);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_5->loaded = 1;
 }

 *VAR_7 = FUNC_0(VAR_6,
    FUNC_1(VAR_5, VAR_1));

 return 0;
}
