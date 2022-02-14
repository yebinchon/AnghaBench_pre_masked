
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; scalar_t__ virtual; } ;
struct TYPE_7__ {scalar_t__ virtual; scalar_t__ physical; } ;
struct TYPE_6__ {int offset; scalar_t__ virtual; scalar_t__ physical; } ;
struct TYPE_5__ {int offset; scalar_t__ virtual; scalar_t__ physical; } ;
struct i810fb_par {TYPE_4__ cursor_heap; TYPE_3__ aperture; TYPE_2__ iring; TYPE_1__ fb; } ;



__attribute__((used)) static void FUNC_0(struct i810fb_par *VAR_0)
{
       VAR_0->fb.physical = VAR_0->aperture.physical+(VAR_0->fb.offset << 12);
 VAR_0->fb.virtual = VAR_0->aperture.virtual+(VAR_0->fb.offset << 12);
 VAR_0->iring.physical = VAR_0->aperture.physical +
  (VAR_0->iring.offset << 12);
 VAR_0->iring.virtual = VAR_0->aperture.virtual +
  (VAR_0->iring.offset << 12);
 VAR_0->cursor_heap.virtual = VAR_0->aperture.virtual+
  (VAR_0->cursor_heap.offset << 12);
}
