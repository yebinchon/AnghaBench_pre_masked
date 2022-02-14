
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ data; int width; int height; } ;
struct vc_data {TYPE_3__ vc_font; } ;
struct fbcon_ops {scalar_t__ fontdata; scalar_t__ cur_rotate; int rotate; int fd_size; int * fontbuffer; TYPE_1__* p; } ;
struct fb_info {TYPE_2__* fbops; struct fbcon_ops* fbcon_par; } ;
struct TYPE_5__ {int (* fb_sync ) (struct fb_info*) ;} ;
struct TYPE_4__ {scalar_t__ con_rotate; int userfont; } ;


 int VAR_0 ;



 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int const*,int *,int,int) ;
 int FUNC_5 (int const*,int *,int,int) ;
 int FUNC_6 (int const*,int *,int,int) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_2, struct vc_data *VAR_3)
{
 struct fbcon_ops *VAR_4 = VAR_2->fbcon_par;
 int VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 const u8 *VAR_10;
 u8 *VAR_11;

 if (VAR_3->vc_font.data == VAR_4->fontdata &&
     VAR_4->p->con_rotate == VAR_4->cur_rotate)
  goto finished;

 VAR_10 = VAR_4->fontdata = VAR_3->vc_font.data;
 VAR_4->cur_rotate = VAR_4->p->con_rotate;
 VAR_5 = (!VAR_4->p->userfont) ? 256 : FUNC_0(VAR_10);
 VAR_7 = ((VAR_3->vc_font.width + 7)/8) *
  VAR_3->vc_font.height;
 VAR_8 = VAR_7;

 if (VAR_4->rotate == 129 ||
     VAR_4->rotate == 130)
  VAR_8 = ((VAR_3->vc_font.height + 7)/8) *
   VAR_3->vc_font.width;

 if (VAR_2->fbops->fb_sync)
  VAR_2->fbops->fb_sync(VAR_2);

 if (VAR_4->fd_size < VAR_8 * VAR_5) {
  VAR_11 = FUNC_2(VAR_5, VAR_8, VAR_1);

  if (VAR_11 == ((void*)0)) {
   VAR_6 = -VAR_0;
   goto finished;
  }

  VAR_4->fd_size = VAR_8 * VAR_5;
  FUNC_1(VAR_4->fontbuffer);
  VAR_4->fontbuffer = VAR_11;
 }

 VAR_11 = VAR_4->fontbuffer;
 FUNC_3(VAR_11, 0, VAR_4->fd_size);

 switch (VAR_4->rotate) {
 case 128:
  for (VAR_9 = VAR_5; VAR_9--; ) {
   FUNC_6(VAR_10, VAR_11, VAR_3->vc_font.width,
      VAR_3->vc_font.height);

   VAR_10 += VAR_7;
   VAR_11 += VAR_8;
  }
  break;
 case 129:
  for (VAR_9 = VAR_5; VAR_9--; ) {
   FUNC_5(VAR_10, VAR_11, VAR_3->vc_font.width,
      VAR_3->vc_font.height);
   VAR_10 += VAR_7;
   VAR_11 += VAR_8;
  }
  break;
 case 130:
  for (VAR_9 = VAR_5; VAR_9--; ) {
   FUNC_4(VAR_10, VAR_11, VAR_3->vc_font.width,
       VAR_3->vc_font.height);
   VAR_10 += VAR_7;
   VAR_11 += VAR_8;
  }
  break;
 }

finished:
 return VAR_6;
}
