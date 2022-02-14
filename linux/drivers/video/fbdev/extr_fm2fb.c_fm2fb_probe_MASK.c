
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zorro_device_id {int dummy; } ;
struct zorro_dev {scalar_t__ id; int dev; } ;
struct TYPE_2__ {int id; scalar_t__ smem_start; scalar_t__ mmio_start; } ;
struct fb_info {scalar_t__ screen_base; int cmap; int flags; TYPE_1__ fix; int * par; int * pseudo_palette; int var; int * fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (struct fb_info*,char*,int ) ;
 int * VAR_9 ;
 int FUNC_3 (int ,struct fb_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char* VAR_12 ;
 struct fb_info* FUNC_4 (int,int *) ;
 int FUNC_5 (struct fb_info*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct fb_info*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct zorro_dev*) ;
 int FUNC_11 (struct zorro_dev*,char*) ;
 scalar_t__ FUNC_12 (struct zorro_dev*) ;

__attribute__((used)) static int FUNC_13(struct zorro_dev *VAR_13, const struct zorro_device_id *VAR_14)
{
 struct fb_info *VAR_15;
 unsigned long *VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = VAR_13->id == VAR_7;

 if (!FUNC_11(VAR_13,"fm2fb"))
  return -VAR_2;

 VAR_15 = FUNC_4(16 * sizeof(u32), &VAR_13->dev);
 if (!VAR_15) {
  FUNC_10(VAR_13);
  return -VAR_1;
 }

 if (FUNC_0(&VAR_15->cmap, 256, 0) < 0) {
  FUNC_5(VAR_15);
  FUNC_10(VAR_13);
  return -VAR_1;
 }


 VAR_8.smem_start = FUNC_12(VAR_13);
 VAR_15->screen_base = FUNC_6(VAR_8.smem_start, VAR_6);
 VAR_8.mmio_start = VAR_8.smem_start + VAR_5;
 VAR_12 = (unsigned char *)(VAR_15->screen_base+VAR_5);

 FUNC_9(VAR_8.id, VAR_17 ? "FrameMaster II" : "Rainbow II");


 VAR_16 = (unsigned long *)VAR_8.smem_start;
 for (VAR_19 = 0; VAR_19 < 576; VAR_19++) {
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0xffffff;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0xffff00;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0x00ffff;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0x00ff00;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0xff00ff;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0xff0000;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0x0000ff;
  for (VAR_18 = 0; VAR_18 < 96; VAR_18++) *VAR_16++ = 0x000000;
 }
 FUNC_3(0, VAR_15);

 if (VAR_10 == -1)
  VAR_10 = VAR_4;

 VAR_15->fbops = &VAR_11;
 VAR_15->var = VAR_9[VAR_10];
 VAR_15->pseudo_palette = VAR_15->par;
 VAR_15->par = ((void*)0);
 VAR_15->fix = VAR_8;
 VAR_15->flags = VAR_3;

 if (FUNC_8(VAR_15) < 0) {
  FUNC_1(&VAR_15->cmap);
  FUNC_7(VAR_15->screen_base);
  FUNC_5(VAR_15);
  FUNC_10(VAR_13);
  return -VAR_0;
 }
 FUNC_2(VAR_15, "%s frame buffer device\n", VAR_8.id);
 return 0;
}
