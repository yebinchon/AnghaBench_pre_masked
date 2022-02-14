
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int field; } ;
struct cal_ctx {TYPE_2__* next_frm; TYPE_2__* cur_frm; int sequence; TYPE_3__ m_fmt; } ;
struct TYPE_8__ {int timestamp; } ;
struct TYPE_5__ {TYPE_4__ vb2_buf; scalar_t__ sequence; int field; } ;
struct TYPE_6__ {TYPE_1__ vb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct cal_ctx *VAR_1)
{
 VAR_1->cur_frm->vb.vb2_buf.timestamp = FUNC_0();
 VAR_1->cur_frm->vb.field = VAR_1->m_fmt.field;
 VAR_1->cur_frm->vb.sequence = VAR_1->sequence++;

 FUNC_1(&VAR_1->cur_frm->vb.vb2_buf, VAR_0);
 VAR_1->cur_frm = VAR_1->next_frm;
}
