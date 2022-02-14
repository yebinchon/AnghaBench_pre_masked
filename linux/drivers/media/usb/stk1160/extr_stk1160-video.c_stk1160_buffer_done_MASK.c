
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timestamp; } ;
struct TYPE_6__ {TYPE_3__ vb2_buf; int field; scalar_t__ sequence; } ;
struct stk1160_buffer {TYPE_2__ vb; int bytesused; } ;
struct TYPE_5__ {struct stk1160_buffer* buf; } ;
struct stk1160 {TYPE_1__ isoc_ctl; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static inline
void FUNC_3(struct stk1160 *VAR_2)
{
 struct stk1160_buffer *VAR_3 = VAR_2->isoc_ctl.buf;

 VAR_3->vb.sequence = VAR_2->sequence++;
 VAR_3->vb.field = VAR_0;
 VAR_3->vb.vb2_buf.timestamp = FUNC_0();

 FUNC_2(&VAR_3->vb.vb2_buf, 0, VAR_3->bytesused);
 FUNC_1(&VAR_3->vb.vb2_buf, VAR_1);

 VAR_2->isoc_ctl.buf = ((void*)0);
}
