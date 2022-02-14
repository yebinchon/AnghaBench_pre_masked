
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int state; int done; int field_count; int ts; } ;
struct bttv_buffer {TYPE_1__ vb; } ;
struct bttv {int field_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bttv *VAR_0, struct bttv_buffer *VAR_1,
      unsigned int VAR_2)
{
 if (((void*)0) == VAR_1)
  return;

 VAR_1->vb.ts = FUNC_0();
 VAR_1->vb.field_count = VAR_0->field_count;
 VAR_1->vb.state = VAR_2;
 FUNC_1(&VAR_1->vb.done);
}
