
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int flag; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_monspecs {int modedb_len; int misc; struct fb_videomode* modedb; } ;
struct fb_info {struct fb_monspecs monspecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*,scalar_t__,struct fb_videomode*,int,int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode*) ;

__attribute__((used)) static void FUNC_4(struct fb_var_screeninfo *VAR_3,
        struct fb_info *VAR_4)
{
 struct fb_monspecs *VAR_5 = &VAR_4->monspecs;
 struct fb_videomode VAR_6;

 FUNC_0();

 if (VAR_2) {
  FUNC_2(VAR_3, VAR_4, VAR_2,
        VAR_5->modedb, VAR_5->modedb_len,
        ((void*)0), 8);
 } else if (VAR_5->modedb != ((void*)0)) {

  VAR_6 = VAR_5->modedb[0];

  if (VAR_4->monspecs.misc & VAR_0) {
   int VAR_7;

   for (VAR_7 = 0; VAR_7 < VAR_5->modedb_len; VAR_7++) {
    if (VAR_5->modedb[VAR_7].flag & VAR_1) {
     VAR_6 = VAR_5->modedb[VAR_7];
     break;
    }
   }
  }
  VAR_3->bits_per_pixel = 8;
  FUNC_3(VAR_3, &VAR_6);
 }
 FUNC_1();
}
