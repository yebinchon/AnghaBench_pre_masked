
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int size; } ;
struct TYPE_7__ {int offset; int size; } ;
struct TYPE_6__ {int size; int offset; } ;
struct TYPE_5__ {int size; } ;
struct i810fb_par {TYPE_4__ cursor_heap; TYPE_3__ iring; TYPE_2__ fb; TYPE_1__ aperture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct i810fb_par *VAR_3)
{
 if (VAR_2 + 1 > VAR_3->aperture.size >> 20)
  VAR_2 = (VAR_3->aperture.size >> 20) - 1;
 if (VAR_1 > (VAR_3->aperture.size >> 20))
  VAR_1 = (VAR_3->aperture.size >> 20);
 if (VAR_2 + VAR_1 + 1 > VAR_3->aperture.size >> 20)
  VAR_1 = (VAR_3->aperture.size >> 20) - (VAR_2 + 1);

 VAR_3->fb.size = VAR_2 << 20;
 VAR_3->fb.offset = VAR_1 << 20;
 VAR_3->fb.offset >>= 12;

 VAR_3->iring.offset = VAR_3->fb.offset + (VAR_3->fb.size >> 12);
 VAR_3->iring.size = VAR_0;

 VAR_3->cursor_heap.offset = VAR_3->iring.offset + (VAR_0 >> 12);
 VAR_3->cursor_heap.size = 4096;
}
