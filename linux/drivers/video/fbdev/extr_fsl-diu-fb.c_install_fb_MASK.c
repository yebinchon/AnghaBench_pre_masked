
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mfb_info {scalar_t__ index; int registered; int id; int pseudo_palette; struct fsl_diu_data* parent; } ;
struct fsl_diu_data {scalar_t__ has_edid; int edid_data; } ;
struct fb_videomode {int flag; } ;
struct fb_monspecs {unsigned int modedb_len; int misc; struct fb_videomode* modedb; } ;
struct TYPE_4__ {int bits_per_pixel; int activate; } ;
struct fb_info {int flags; int dev; int cmap; TYPE_1__ var; struct fb_monspecs monspecs; int modelist; int pseudo_palette; int * fbops; struct mfb_info* par; } ;


 unsigned int FUNC_0 (struct fb_videomode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct fb_monspecs*) ;
 int FUNC_6 (TYPE_1__*,struct fb_info*,char const*,struct fb_videomode*,unsigned int,int *,int ) ;
 char* VAR_10 ;
 int FUNC_7 (struct fb_videomode*,unsigned int,int *) ;
 int FUNC_8 (TYPE_1__*,struct fb_videomode*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,struct fb_info*) ;
 struct fb_videomode* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (struct fb_info*) ;
 int FUNC_11 (struct fb_info*) ;

__attribute__((used)) static int FUNC_12(struct fb_info *VAR_13)
{
 int VAR_14;
 struct mfb_info *VAR_15 = VAR_13->par;
 struct fsl_diu_data *VAR_16 = VAR_15->parent;
 const char *VAR_17, *VAR_18 = "320x240";
 struct fb_videomode *VAR_19 = VAR_11;
 unsigned int VAR_20 = FUNC_0(VAR_11);
 int VAR_21 = 1;

 VAR_13->var.activate = VAR_5;
 VAR_13->fbops = &VAR_12;
 VAR_13->flags = VAR_1 | VAR_4 | VAR_2 |
  VAR_3;
 VAR_13->pseudo_palette = VAR_15->pseudo_palette;

 VAR_14 = FUNC_3(&VAR_13->cmap, 16, 0);
 if (VAR_14)
  return VAR_14;

 if (VAR_15->index == VAR_8) {
  if (VAR_16->has_edid) {

   FUNC_5(VAR_16->edid_data, &VAR_13->monspecs);
   FUNC_7(VAR_13->monspecs.modedb,
       VAR_13->monspecs.modedb_len,
       &VAR_13->modelist);
   VAR_19 = VAR_13->monspecs.modedb;
   VAR_20 = VAR_13->monspecs.modedb_len;
  }
  VAR_17 = VAR_10;
 } else {
  VAR_17 = VAR_18;
 }
 VAR_14 = FUNC_6(&VAR_13->var, VAR_13, VAR_17, VAR_19, VAR_20, ((void*)0),
     VAR_9);
 if (!VAR_14) {




  if ((VAR_15->index == VAR_8) && VAR_16->has_edid)
   VAR_21 = 0;
  else
   return -VAR_0;
 }

 if (!VAR_21) {
  VAR_14 = FUNC_6(&VAR_13->var, VAR_13, VAR_17, VAR_11,
   FUNC_0(VAR_11), ((void*)0), VAR_9);
  if (VAR_14)
   VAR_21 = 1;
 }


 if (!VAR_21 && VAR_13->monspecs.modedb) {
  struct fb_monspecs *VAR_22 = &VAR_13->monspecs;
  struct fb_videomode *VAR_23 = &VAR_22->modedb[0];





  if (VAR_22->misc & VAR_6) {
   int VAR_24;

   for (VAR_24 = 0; VAR_24 < VAR_22->modedb_len; VAR_24++) {
    if (VAR_22->modedb[VAR_24].flag & VAR_7) {
     VAR_23 = &VAR_22->modedb[VAR_24];
     break;
    }
   }
  }

  VAR_13->var.bits_per_pixel = VAR_9;
  FUNC_8(&VAR_13->var, VAR_23);
 }

 if (FUNC_9(&VAR_13->var, VAR_13)) {
  FUNC_1(VAR_13->dev, "fsl_diu_check_var failed\n");
  FUNC_11(VAR_13);
  FUNC_4(&VAR_13->cmap);
  return -VAR_0;
 }

 if (FUNC_10(VAR_13) < 0) {
  FUNC_1(VAR_13->dev, "register_framebuffer failed\n");
  FUNC_11(VAR_13);
  FUNC_4(&VAR_13->cmap);
  return -VAR_0;
 }

 VAR_15->registered = 1;
 FUNC_2(VAR_13->dev, "%s registered successfully\n", VAR_15->id);

 return 0;
}
