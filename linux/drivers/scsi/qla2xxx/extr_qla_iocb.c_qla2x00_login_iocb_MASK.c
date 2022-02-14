
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_2__ logio; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct qla_hw_data {int dummy; } ;
struct mbx_entry {void* mb9; void* mb3; void* mb2; void* mb1; void* mb10; void* mb0; int loop_id; int entry_type; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {TYPE_7__* vha; TYPE_6__* fcport; TYPE_1__ u; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_16__ {int vp_idx; struct qla_hw_data* hw; } ;
struct TYPE_13__ {int domain; int area; int al_pa; } ;
struct TYPE_14__ {TYPE_4__ b; } ;
struct TYPE_15__ {int loop_id; TYPE_5__ d_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(srb_t *VAR_6, struct mbx_entry *VAR_7)
{
 struct qla_hw_data *VAR_8 = VAR_6->vha->hw;
 struct srb_iocb *VAR_9 = &VAR_6->u.iocb_cmd;
 uint16_t VAR_10;

 VAR_7->entry_type = VAR_3;
 FUNC_1(VAR_8, VAR_7->loop_id, VAR_6->fcport->loop_id);
 VAR_7->mb0 = FUNC_2(VAR_2);
 VAR_10 = VAR_9->u.logio.flags & VAR_4 ? VAR_0 : 0;
 VAR_10 |= VAR_9->u.logio.flags & VAR_5 ? VAR_1 : 0;
 if (FUNC_0(VAR_8)) {
  VAR_7->mb1 = FUNC_2(VAR_6->fcport->loop_id);
  VAR_7->mb10 = FUNC_2(VAR_10);
 } else {
  VAR_7->mb1 = FUNC_2((VAR_6->fcport->loop_id << 8) | VAR_10);
 }
 VAR_7->mb2 = FUNC_2(VAR_6->fcport->d_id.b.domain);
 VAR_7->mb3 = FUNC_2(VAR_6->fcport->d_id.b.area << 8 |
     VAR_6->fcport->d_id.b.al_pa);
 VAR_7->mb9 = FUNC_2(VAR_6->vha->vp_idx);
}
