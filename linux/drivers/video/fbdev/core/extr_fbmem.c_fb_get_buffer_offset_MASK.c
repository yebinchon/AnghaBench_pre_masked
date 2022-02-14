
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fb_pixmap {scalar_t__ buf_align; char* addr; int flags; scalar_t__ offset; scalar_t__ size; } ;
struct fb_info {TYPE_1__* fbops; } ;
struct TYPE_2__ {int (* fb_sync ) (struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;

char* FUNC_2(struct fb_info *VAR_2, struct fb_pixmap *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_3->buf_align - 1, VAR_6;
 char *VAR_7 = VAR_3->addr;




 if (VAR_3->flags & VAR_0) {
  if (VAR_2->fbops->fb_sync && (VAR_3->flags & VAR_1))
   VAR_2->fbops->fb_sync(VAR_2);
  return VAR_7;
 }


 VAR_6 = VAR_3->offset + VAR_5;
 VAR_6 &= ~VAR_5;
 if (VAR_6 + VAR_4 > VAR_3->size) {




  if (VAR_2->fbops->fb_sync && (VAR_3->flags & VAR_1))
   VAR_2->fbops->fb_sync(VAR_2);
  VAR_6 = 0;
 }
 VAR_3->offset = VAR_6 + VAR_4;
 VAR_7 += VAR_6;

 return VAR_7;
}
