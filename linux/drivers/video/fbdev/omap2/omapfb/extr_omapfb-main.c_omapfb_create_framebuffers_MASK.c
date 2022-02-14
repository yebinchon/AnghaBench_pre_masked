
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omapfb_info {int id; int num_overlays; struct omap_overlay** overlays; TYPE_2__* region; int mirror; int rotation_type; struct omapfb2_device* fbdev; } ;
struct omapfb2_device {int num_fbs; int dev; struct fb_info** fbs; struct omap_overlay** overlays; int num_overlays; TYPE_2__* regions; } ;
struct omap_overlay {TYPE_1__* manager; } ;
struct fb_info {int dummy; } ;
struct TYPE_5__ {int id; scalar_t__ size; int lock; } ;
struct TYPE_4__ {int (* apply ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 struct fb_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct omapfb2_device*) ;
 int FUNC_8 (struct fb_info*,int) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (struct omapfb2_device*,struct fb_info*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct omap_overlay*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct fb_info*) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct omapfb2_device *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_6->num_fbs = 0;

 FUNC_0("create %d framebuffers\n", VAR_0);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  struct fb_info *VAR_9;
  struct omapfb_info *VAR_10;

  VAR_9 = FUNC_4(sizeof(struct omapfb_info),
    VAR_6->dev);
  if (!VAR_9)
   return -VAR_1;

  FUNC_2(VAR_9);

  VAR_6->fbs[VAR_8] = VAR_9;

  VAR_10 = FUNC_1(VAR_9);
  VAR_10->fbdev = VAR_6;
  VAR_10->id = VAR_8;

  VAR_10->region = &VAR_6->regions[VAR_8];
  VAR_10->region->id = VAR_8;
  FUNC_5(&VAR_10->region->lock);


  VAR_10->rotation_type = VAR_5 ? VAR_3 :
   VAR_2;
  VAR_10->mirror = VAR_4;

  VAR_6->num_fbs++;
 }

 FUNC_0("fb_infos allocated\n");


 for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_6->num_fbs, VAR_6->num_overlays); VAR_8++) {
  struct omapfb_info *VAR_11 = FUNC_1(VAR_6->fbs[VAR_8]);

  VAR_11->overlays[0] = VAR_6->overlays[VAR_8];
  VAR_11->num_overlays = 1;
 }


 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_6->dev, "failed to allocate fbmem\n");
  return VAR_7;
 }

 FUNC_0("fbmems allocated\n");


 for (VAR_8 = 0; VAR_8 < VAR_6->num_fbs; VAR_8++) {
  struct fb_info *VAR_12 = VAR_6->fbs[VAR_8];
  struct omapfb_info *VAR_13 = FUNC_1(VAR_12);

  FUNC_11(VAR_13->region);
  VAR_7 = FUNC_10(VAR_6, VAR_12);
  FUNC_13(VAR_13->region);

  if (VAR_7) {
   FUNC_3(VAR_6->dev, "failed to setup fb_info\n");
   return VAR_7;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->num_fbs; VAR_8++) {
  struct fb_info *VAR_14 = VAR_6->fbs[VAR_8];
  struct omapfb_info *VAR_15 = FUNC_1(VAR_14);

  if (VAR_15->region->size == 0)
   continue;

  FUNC_9(VAR_14);
 }

 FUNC_0("fb_infos initialized\n");

 for (VAR_8 = 0; VAR_8 < VAR_6->num_fbs; VAR_8++) {
  VAR_7 = FUNC_14(VAR_6->fbs[VAR_8]);
  if (VAR_7 != 0) {
   FUNC_3(VAR_6->dev,
    "registering framebuffer %d failed\n", VAR_8);
   return VAR_7;
  }
 }

 FUNC_0("framebuffers registered\n");

 for (VAR_8 = 0; VAR_8 < VAR_6->num_fbs; VAR_8++) {
  struct fb_info *VAR_16 = VAR_6->fbs[VAR_8];
  struct omapfb_info *VAR_17 = FUNC_1(VAR_16);

  FUNC_11(VAR_17->region);
  VAR_7 = FUNC_8(VAR_16, 1);
  FUNC_13(VAR_17->region);

  if (VAR_7) {
   FUNC_3(VAR_6->dev, "failed to change mode\n");
   return VAR_7;
  }
 }


 if (VAR_6->num_fbs > 0) {
  struct omapfb_info *VAR_18 = FUNC_1(VAR_6->fbs[0]);

  if (VAR_18->num_overlays > 0) {
   struct omap_overlay *VAR_19 = VAR_18->overlays[0];

   VAR_19->manager->apply(VAR_19->manager);

   VAR_7 = FUNC_12(VAR_19, 1);

   if (VAR_7) {
    FUNC_3(VAR_6->dev,
      "failed to enable overlay\n");
    return VAR_7;
   }
  }
 }

 FUNC_0("create_framebuffers done\n");

 return 0;
}
