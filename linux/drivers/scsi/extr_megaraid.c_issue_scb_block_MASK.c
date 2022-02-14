
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef int u8 ;
struct mbox_out {int dummy; } ;
struct TYPE_18__ {int busy; int ack; int numstatus; int status; scalar_t__ poll; } ;
struct TYPE_17__ {int cmdid; int xferaddr; } ;
struct TYPE_20__ {TYPE_2__ m_in; TYPE_1__ m_out; } ;
typedef TYPE_4__ mbox_t ;
struct TYPE_21__ {int xfer_segment_lo; int xfer_segment_hi; } ;
typedef TYPE_5__ mbox64_t ;
struct TYPE_22__ {int flag; int mbox_dma; TYPE_3__* dev; TYPE_4__* mbox; TYPE_5__* mbox64; } ;
typedef TYPE_6__ adapter_t ;
struct TYPE_19__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (char*,int*,int) ;
 int FUNC_12 (TYPE_6__*,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(adapter_t *VAR_2, u_char *VAR_3)
{
 volatile mbox64_t *VAR_4 = VAR_2->mbox64;
 volatile mbox_t *VAR_5 = VAR_2->mbox;
 u8 VAR_6;


 if(FUNC_10 (VAR_2))
  goto bug_blocked_mailbox;


 FUNC_11((char *) VAR_5, VAR_3, sizeof(struct mbox_out));
 VAR_5->m_out.cmdid = 0xFE;
 VAR_5->m_in.busy = 1;

 switch (VAR_3[0]) {
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_4->xfer_segment_lo = VAR_5->m_out.xferaddr;
  VAR_4->xfer_segment_hi = 0;
  VAR_5->m_out.xferaddr = 0xFFFFFFFF;
  break;
 default:
  VAR_4->xfer_segment_lo = 0;
  VAR_4->xfer_segment_hi = 0;
 }

 if( FUNC_9(VAR_2->flag & VAR_0) ) {
  VAR_5->m_in.poll = 0;
  VAR_5->m_in.ack = 0;
  VAR_5->m_in.numstatus = 0xFF;
  VAR_5->m_in.status = 0xFF;
  FUNC_1(VAR_2, VAR_2->mbox_dma | 0x1);

  while((volatile u8)VAR_5->m_in.numstatus == 0xFF)
   FUNC_2();

  VAR_5->m_in.numstatus = 0xFF;

  while( (volatile u8)VAR_5->m_in.poll != 0x77 )
   FUNC_2();

  VAR_5->m_in.poll = 0;
  VAR_5->m_in.ack = 0x77;

  FUNC_1(VAR_2, VAR_2->mbox_dma | 0x2);

  while(FUNC_0(VAR_2) & 0x2)
   FUNC_2();
 }
 else {
  FUNC_5(VAR_2);
  FUNC_8(VAR_2);

  while (!((VAR_6 = FUNC_7(VAR_2)) & VAR_1))
   FUNC_2();

  FUNC_12(VAR_2, VAR_6);
  FUNC_6(VAR_2);
  FUNC_4(VAR_2);
 }

 return VAR_5->m_in.status;

bug_blocked_mailbox:
 FUNC_3(&VAR_2->dev->dev, "Blocked mailbox......!!\n");
 FUNC_13 (1000);
 return -1;
}
