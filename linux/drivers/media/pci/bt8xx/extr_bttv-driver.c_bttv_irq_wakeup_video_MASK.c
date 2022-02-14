
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct bttv_buffer_set {TYPE_3__* bottom; TYPE_3__* top; } ;
struct TYPE_4__ {int nr; } ;
struct bttv {int field_count; TYPE_1__ c; } ;
struct TYPE_5__ {unsigned int state; int done; int field_count; void* ts; } ;
struct TYPE_6__ {TYPE_2__ vb; } ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (char*,int ,TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bttv *VAR_1, struct bttv_buffer_set *VAR_2,
        struct bttv_buffer_set *VAR_3, unsigned int VAR_4)
{
 u64 VAR_5 = FUNC_0();

 if (VAR_2->top == VAR_2->bottom) {
  if (((void*)0) != VAR_2->top && VAR_3->top != VAR_2->top) {
   if (VAR_0 > 1)
    FUNC_1("%d: wakeup: both=%p\n",
      VAR_1->c.nr, VAR_2->top);
   VAR_2->top->vb.ts = VAR_5;
   VAR_2->top->vb.field_count = VAR_1->field_count;
   VAR_2->top->vb.state = VAR_4;
   FUNC_2(&VAR_2->top->vb.done);
  }
 } else {
  if (((void*)0) != VAR_2->top && VAR_3->top != VAR_2->top) {
   if (VAR_0 > 1)
    FUNC_1("%d: wakeup: top=%p\n",
      VAR_1->c.nr, VAR_2->top);
   VAR_2->top->vb.ts = VAR_5;
   VAR_2->top->vb.field_count = VAR_1->field_count;
   VAR_2->top->vb.state = VAR_4;
   FUNC_2(&VAR_2->top->vb.done);
  }
  if (((void*)0) != VAR_2->bottom && VAR_3->bottom != VAR_2->bottom) {
   if (VAR_0 > 1)
    FUNC_1("%d: wakeup: bottom=%p\n",
      VAR_1->c.nr, VAR_2->bottom);
   VAR_2->bottom->vb.ts = VAR_5;
   VAR_2->bottom->vb.field_count = VAR_1->field_count;
   VAR_2->bottom->vb.state = VAR_4;
   FUNC_2(&VAR_2->bottom->vb.done);
  }
 }
}
