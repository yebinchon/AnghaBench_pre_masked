
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_videomode {int * name; } ;
struct imx_fb_videomode {int bpp; int pcr; int aus_mode; struct fb_videomode mode; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,struct fb_videomode*,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int **) ;
 int FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct device_node *VAR_3,
  struct imx_fb_videomode *VAR_4)
{
 int VAR_5;
 struct fb_videomode *VAR_6 = &VAR_4->mode;
 u32 VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_3(VAR_3, "model", &VAR_6->name);
 if (VAR_5)
  VAR_6->name = ((void*)0);

 VAR_5 = FUNC_1(VAR_3, VAR_6, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_2, "Failed to get videomode from DT\n");
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_3, "bits-per-pixel", &VAR_7);
 VAR_5 |= FUNC_4(VAR_3, "fsl,pcr", &VAR_8);

 if (VAR_5) {
  FUNC_0(VAR_2, "Failed to read bpp and pcr from DT\n");
  return -VAR_0;
 }

 if (VAR_7 < 1 || VAR_7 > 255) {
  FUNC_0(VAR_2, "Bits per pixel have to be between 1 and 255\n");
  return -VAR_0;
 }

 VAR_4->bpp = VAR_7;
 VAR_4->pcr = VAR_8;




 VAR_4->aus_mode = FUNC_2(VAR_3, "fsl,aus-mode");

 return 0;
}
