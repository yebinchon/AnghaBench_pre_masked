
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufx_data {int fb_count; int kref; scalar_t__ virtualized; } ;
struct fb_info {int node; struct fb_deferred_io* fbdefio; struct ufx_data* par; } ;
struct fb_deferred_io {int deferred_io; int delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fb_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 struct fb_deferred_io* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int,struct fb_info*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_7, int VAR_8)
{
 struct ufx_data *VAR_9 = VAR_7->par;




 if (VAR_8 == 0 && !VAR_4)
  return -VAR_0;


 if (VAR_9->virtualized)
  return -VAR_1;

 VAR_9->fb_count++;

 FUNC_1(&VAR_9->kref);

 if (VAR_5 && (VAR_7->fbdefio == ((void*)0))) {


  struct fb_deferred_io *VAR_10;

  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
  if (VAR_10) {
   VAR_10->delay = VAR_3;
   VAR_10->deferred_io = VAR_6;
  }

  VAR_7->fbdefio = VAR_10;
  FUNC_0(VAR_7);
 }

 FUNC_3("open /dev/fb%d user=%d fb_info=%p count=%d",
  VAR_7->node, VAR_8, VAR_7, VAR_9->fb_count);

 return 0;
}
