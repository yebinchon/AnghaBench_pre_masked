
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_aux_drv {struct fb_monspecs* data; } ;
struct fb_videomode {int flag; } ;
struct fb_monspecs {int misc; int modedb_len; struct fb_videomode const* modedb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const struct fb_videomode *FUNC_0(struct via_aux_drv *VAR_3)
{
 struct fb_monspecs *VAR_4 = VAR_3->data;
 int VAR_5;

 if (!VAR_4 || !VAR_4->modedb || !(VAR_4->misc & VAR_0))
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_4->modedb_len; VAR_5++) {
  if (VAR_4->modedb[VAR_5].flag & VAR_2 &&
   VAR_4->modedb[VAR_5].flag & VAR_1)
   return &VAR_4->modedb[VAR_5];
 }

 return ((void*)0);
}
