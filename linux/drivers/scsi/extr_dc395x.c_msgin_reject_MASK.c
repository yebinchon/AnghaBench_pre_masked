
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ScsiReqBlk {int msg_count; TYPE_1__* dcb; int * msgin_buf; int state; int * msgout_buf; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_2__ {int target_lun; int target_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct AdapterCtlBlk *VAR_5,
  struct ScsiReqBlk *VAR_6)
{
 VAR_6->msgout_buf[0] = VAR_2;
 VAR_6->msg_count = 1;
 VAR_0;
 VAR_6->state &= ~VAR_3;
 VAR_6->state |= VAR_4;
 FUNC_0(VAR_1, "msgin_reject: 0x%02x <%02i-%i>\n",
  VAR_6->msgin_buf[0],
  VAR_6->dcb->target_id, VAR_6->dcb->target_lun);
}
