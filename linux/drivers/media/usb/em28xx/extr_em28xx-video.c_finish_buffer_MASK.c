
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timestamp; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; int field; scalar_t__ sequence; } ;
struct em28xx_buffer {TYPE_1__ vb; int top_field; } ;
struct em28xx {TYPE_2__* v4l2; } ;
struct TYPE_5__ {scalar_t__ progressive; int field_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct em28xx_buffer*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct em28xx *VAR_3,
     struct em28xx_buffer *VAR_4)
{
 FUNC_0("[%p/%d] wakeup\n", VAR_4, VAR_4->top_field);

 VAR_4->vb.sequence = VAR_3->v4l2->field_count++;
 if (VAR_3->v4l2->progressive)
  VAR_4->vb.field = VAR_1;
 else
  VAR_4->vb.field = VAR_0;
 VAR_4->vb.vb2_buf.timestamp = FUNC_1();

 FUNC_2(&VAR_4->vb.vb2_buf, VAR_2);
}
