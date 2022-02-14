
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int mon1_dbsize; scalar_t__ mon1_type; int info; struct fb_videomode* mon1_modedb; } ;
struct fb_videomode {scalar_t__ yres; scalar_t__ xres; } ;
struct fb_var_screeninfo {int activate; scalar_t__ yres; scalar_t__ xres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_var_screeninfo const*,int) ;
 int FUNC_2 (struct fb_var_screeninfo const*,struct fb_videomode const*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 struct fb_videomode* VAR_7 ;

int FUNC_4(struct radeonfb_info *VAR_8,
         struct fb_var_screeninfo *VAR_9,
         const struct fb_var_screeninfo *VAR_10)
{
 const struct fb_videomode *VAR_11 = VAR_7;
 int VAR_12, VAR_13 = 34;
 int VAR_14, VAR_15 = 0;
 int VAR_16 = VAR_4;
 const struct fb_videomode *VAR_17 = ((void*)0);


 FUNC_1(VAR_9, VAR_10, sizeof(struct fb_var_screeninfo));


 if (VAR_8->mon1_modedb) {
  VAR_11 = VAR_8->mon1_modedb;
  VAR_13 = VAR_8->mon1_dbsize;
  VAR_15 = 1;
 }


 VAR_14 = VAR_8->mon1_type == VAR_6 || VAR_8->mon1_type == VAR_5;





 if ((VAR_10->activate & VAR_1) == VAR_3 ||
     (VAR_10->activate & VAR_1) == VAR_2) {





  if (VAR_14 == 0 && VAR_8->mon1_modedb)
   if (FUNC_0((struct fb_var_screeninfo *)VAR_10, VAR_8->info))
    return -VAR_0;
  return 0;
 }


 while (VAR_11) {
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   int VAR_18;

   if (VAR_11[VAR_12].yres < VAR_10->yres)
    continue;
   if (VAR_11[VAR_12].xres < VAR_10->xres)
    continue;
   VAR_18 = FUNC_2(VAR_10, &VAR_11[VAR_12]);



   if (VAR_18 < VAR_16) {
    VAR_17 = &VAR_11[VAR_12];
    VAR_16 = VAR_18;
   }
  }
  VAR_11 = ((void*)0);

  if (VAR_15 && VAR_14) {
   VAR_11 = VAR_7;
   VAR_13 = 34;
   VAR_15 = 0;
  }
 }


 if (VAR_17 != ((void*)0)) {
  FUNC_3(VAR_9, VAR_17);
  return 0;
 }


 if (!VAR_14)
  return -VAR_0;

 return 0;
}
