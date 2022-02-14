
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uvc_video_chain {TYPE_2__* dev; } ;
struct TYPE_5__ {int flags; int size; int selector; } ;
struct uvc_control {int cached; TYPE_1__ info; TYPE_4__* entity; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int intfnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct uvc_control*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct uvc_video_chain *VAR_14,
 struct uvc_control *VAR_15)
{
 int VAR_16;

 if (VAR_15->info.flags & VAR_4) {
  VAR_16 = FUNC_3(VAR_14->dev, VAR_8, VAR_15->entity->id,
         VAR_14->dev->intfnum, VAR_15->info.selector,
         FUNC_2(VAR_15, VAR_0),
         VAR_15->info.size);
  if (VAR_16 < 0)
   return VAR_16;
 }

 if (VAR_15->info.flags & VAR_6) {
  VAR_16 = FUNC_3(VAR_14->dev, VAR_10, VAR_15->entity->id,
         VAR_14->dev->intfnum, VAR_15->info.selector,
         FUNC_2(VAR_15, VAR_2),
         VAR_15->info.size);
  if (VAR_16 < 0)
   return VAR_16;
 }
 if (VAR_15->info.flags & VAR_5) {
  VAR_16 = FUNC_3(VAR_14->dev, VAR_9, VAR_15->entity->id,
         VAR_14->dev->intfnum, VAR_15->info.selector,
         FUNC_2(VAR_15, VAR_1),
         VAR_15->info.size);
  if (VAR_16 < 0)
   return VAR_16;
 }
 if (VAR_15->info.flags & VAR_7) {
  VAR_16 = FUNC_3(VAR_14->dev, VAR_11, VAR_15->entity->id,
         VAR_14->dev->intfnum, VAR_15->info.selector,
         FUNC_2(VAR_15, VAR_3),
         VAR_15->info.size);
  if (VAR_16 < 0) {
   if (FUNC_0(VAR_15->entity) !=
       VAR_12)
    return VAR_16;





   FUNC_4(VAR_14->dev, VAR_13,
          "UVC non compliance - GET_RES failed on "
          "an XU control. Enabling workaround.\n");
   FUNC_1(FUNC_2(VAR_15, VAR_3), 0,
          VAR_15->info.size);
  }
 }

 VAR_15->cached = 1;
 return 0;
}
