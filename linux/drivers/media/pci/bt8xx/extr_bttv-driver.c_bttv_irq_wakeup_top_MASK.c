
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; int state; int field_count; int ts; } ;
struct bttv_buffer {TYPE_1__ vb; } ;
struct TYPE_4__ {struct bttv_buffer* top; scalar_t__ top_irq; } ;
struct bttv {int s_lock; int field_count; TYPE_2__ curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bttv*,int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bttv *VAR_2)
{
 struct bttv_buffer *VAR_3 = VAR_2->curr.top;

 if (((void*)0) == VAR_3)
  return;

 FUNC_2(&VAR_2->s_lock);
 VAR_2->curr.top_irq = 0;
 VAR_2->curr.top = ((void*)0);
 FUNC_0(VAR_2, VAR_0, ((void*)0), 0);

 VAR_3->vb.ts = FUNC_1();
 VAR_3->vb.field_count = VAR_2->field_count;
 VAR_3->vb.state = VAR_1;
 FUNC_4(&VAR_3->vb.done);
 FUNC_3(&VAR_2->s_lock);
}
