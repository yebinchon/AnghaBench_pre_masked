
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mbox_out {int dummy; } ;
struct TYPE_14__ {int state; int idx; scalar_t__ raw_mbox; } ;
typedef TYPE_3__ scb_t ;
struct TYPE_13__ {int busy; scalar_t__ ack; scalar_t__ poll; } ;
struct TYPE_12__ {int cmd; int xferaddr; int cmdid; } ;
struct TYPE_15__ {TYPE_2__ m_in; TYPE_1__ m_out; } ;
typedef TYPE_4__ mbox_t ;
struct TYPE_16__ {int xfer_segment_lo; int xfer_segment_hi; } ;
typedef TYPE_5__ mbox64_t ;
struct TYPE_17__ {int flag; int mbox_dma; int pend_cmds; TYPE_4__* mbox; TYPE_5__* mbox64; } ;
typedef TYPE_6__ adapter_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int VAR_2 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(adapter_t *VAR_3, scb_t *VAR_4)
{
 volatile mbox64_t *VAR_5 = VAR_3->mbox64;
 volatile mbox_t *VAR_6 = VAR_3->mbox;
 unsigned int VAR_7 = 0;

 if(FUNC_7(VAR_6->m_in.busy)) {
  do {
   FUNC_6(1);
   VAR_7++;
  } while( VAR_6->m_in.busy && (VAR_7 < VAR_2) );

  if(VAR_6->m_in.busy) return -1;
 }


 FUNC_5((char *)&VAR_6->m_out, (char *)VAR_4->raw_mbox,
   sizeof(struct mbox_out));

 VAR_6->m_out.cmdid = VAR_4->idx;
 VAR_6->m_in.busy = 1;





 FUNC_1(&VAR_3->pend_cmds);

 switch (VAR_6->m_out.cmd) {
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_5->xfer_segment_lo = VAR_6->m_out.xferaddr;
  VAR_5->xfer_segment_hi = 0;
  VAR_6->m_out.xferaddr = 0xFFFFFFFF;
  break;
 default:
  VAR_5->xfer_segment_lo = 0;
  VAR_5->xfer_segment_hi = 0;
 }




 VAR_4->state |= VAR_1;

 if( FUNC_4(VAR_3->flag & VAR_0) ) {
  VAR_6->m_in.poll = 0;
  VAR_6->m_in.ack = 0;
  FUNC_0(VAR_3, VAR_3->mbox_dma | 0x1);
 }
 else {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }

 return 0;
}
