
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int field; } ;
struct TYPE_8__ {TYPE_1__ pix; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct vpfe_device {TYPE_5__* next_frm; TYPE_5__* cur_frm; int sequence; TYPE_3__ fmt; } ;
struct TYPE_12__ {int timestamp; } ;
struct TYPE_10__ {TYPE_6__ vb2_buf; scalar_t__ sequence; int field; } ;
struct TYPE_11__ {TYPE_4__ vb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_6__*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct vpfe_device *VAR_1)
{
 VAR_1->cur_frm->vb.vb2_buf.timestamp = FUNC_0();
 VAR_1->cur_frm->vb.field = VAR_1->fmt.fmt.pix.field;
 VAR_1->cur_frm->vb.sequence = VAR_1->sequence++;
 FUNC_1(&VAR_1->cur_frm->vb.vb2_buf, VAR_0);
 VAR_1->cur_frm = VAR_1->next_frm;
}
