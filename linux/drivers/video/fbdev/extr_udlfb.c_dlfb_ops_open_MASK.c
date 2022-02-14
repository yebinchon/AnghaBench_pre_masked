
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dev; struct fb_deferred_io* fbdefio; struct dlfb_data* par; } ;
struct fb_deferred_io {int deferred_io; int delay; } ;
struct dlfb_data {int fb_count; scalar_t__ virtualized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,struct fb_info*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct fb_info*) ;
 scalar_t__ VAR_6 ;
 struct fb_deferred_io* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_7, int VAR_8)
{
 struct dlfb_data *VAR_9 = VAR_7->par;






 if ((VAR_8 == 0) && (!VAR_4))
  return -VAR_1;


 if (VAR_9->virtualized)
  return -VAR_2;

 VAR_9->fb_count++;

 if (VAR_6 && (VAR_7->fbdefio == ((void*)0))) {


  struct fb_deferred_io *VAR_10;

  VAR_10 = FUNC_2(sizeof(struct fb_deferred_io), VAR_3);

  if (VAR_10) {
   VAR_10->delay = VAR_0;
   VAR_10->deferred_io = VAR_5;
  }

  VAR_7->fbdefio = VAR_10;
  FUNC_1(VAR_7);
 }

 FUNC_0(VAR_7->dev, "open, user=%d fb_info=%p count=%d\n",
  VAR_8, VAR_7, VAR_9->fb_count);

 return 0;
}
