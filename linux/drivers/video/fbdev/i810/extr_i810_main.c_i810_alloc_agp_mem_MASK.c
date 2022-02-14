
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* i810_cursor_memory; TYPE_5__* i810_fb_memory; } ;
struct TYPE_8__ {int size; int physical; int offset; } ;
struct TYPE_7__ {int size; int offset; } ;
struct TYPE_6__ {int size; } ;
struct i810fb_par {TYPE_4__ i810_gtt; TYPE_3__ cursor_heap; TYPE_2__ fb; int dev; TYPE_1__ iring; } ;
struct fb_info {struct i810fb_par* par; } ;
struct agp_bridge_data {int dummy; } ;
struct TYPE_10__ {int physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct agp_bridge_data*,int,int ) ;
 struct agp_bridge_data* FUNC_1 (int ) ;
 int FUNC_2 (struct agp_bridge_data*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (struct i810fb_par*) ;
 int FUNC_5 (struct i810fb_par*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_5)
{
 struct i810fb_par *VAR_6 = VAR_5->par;
 int VAR_7;
 struct agp_bridge_data *VAR_8;

 FUNC_4(VAR_6);
 VAR_7 = VAR_6->fb.size + VAR_6->iring.size;

 if (!(VAR_8 = FUNC_1(VAR_6->dev))) {
  FUNC_6("i810fb_alloc_fbmem: cannot acquire agpgart\n");
  return -VAR_3;
 }
 if (!(VAR_6->i810_gtt.i810_fb_memory =
       FUNC_0(VAR_8, VAR_7 >> 12, VAR_0))) {
  FUNC_6("i810fb_alloc_fbmem: can't allocate framebuffer "
         "memory\n");
  FUNC_2(VAR_8);
  return -VAR_4;
 }
 if (FUNC_3(VAR_6->i810_gtt.i810_fb_memory,
       VAR_6->fb.offset)) {
  FUNC_6("i810fb_alloc_fbmem: can't bind framebuffer memory\n");
  FUNC_2(VAR_8);
  return -VAR_2;
 }

 if (!(VAR_6->i810_gtt.i810_cursor_memory =
       FUNC_0(VAR_8, VAR_6->cursor_heap.size >> 12,
      VAR_1))) {
  FUNC_6("i810fb_alloc_cursormem:  can't allocate "
         "cursor memory\n");
  FUNC_2(VAR_8);
  return -VAR_4;
 }
 if (FUNC_3(VAR_6->i810_gtt.i810_cursor_memory,
       VAR_6->cursor_heap.offset)) {
  FUNC_6("i810fb_alloc_cursormem: cannot bind cursor memory\n");
  FUNC_2(VAR_8);
  return -VAR_2;
 }

 VAR_6->cursor_heap.physical = VAR_6->i810_gtt.i810_cursor_memory->physical;

 FUNC_5(VAR_6);

 FUNC_2(VAR_8);

 return 0;
}
