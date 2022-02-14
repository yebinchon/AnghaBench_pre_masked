
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int scan_align; int buf_align; int flags; scalar_t__ size; int * addr; } ;
struct TYPE_4__ {unsigned long smem_len; int smem_start; } ;
struct fb_info {TYPE_3__* fbops; TYPE_2__ sprite; TYPE_1__ fix; scalar_t__ screen_base; } ;
struct TYPE_6__ {int fb_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;

int FUNC_1(struct fb_info *VAR_4)
{
 unsigned long VAR_5;

 VAR_4->fix.smem_len -= VAR_2;
 VAR_5 = (unsigned long) VAR_4->screen_base + VAR_4->fix.smem_len;
 VAR_4->sprite.addr = (u8 *) VAR_5;


 if (!VAR_4->sprite.addr)
  return -VAR_0;
 VAR_4->sprite.size = VAR_2;
 VAR_4->sprite.scan_align = 16;
 VAR_4->sprite.buf_align = 16;
 VAR_4->sprite.flags = VAR_1;

 VAR_4->fbops->fb_cursor = VAR_3;

 return 0;
}
