
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {TYPE_2__* op_regs; TYPE_1__* ep_dqh; struct mv_ep* eps; } ;
struct mv_ep {TYPE_1__* dqh; struct mv_udc* udc; } ;
struct TYPE_4__ {int * epctrlx; } ;
struct TYPE_3__ {int max_packet_length; int next_dtd_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mv_udc *VAR_9)
{
 struct mv_ep *VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;


 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_10 = &VAR_9->eps[VAR_12];
  VAR_10->udc = VAR_9;


  VAR_10->dqh = &VAR_9->ep_dqh[VAR_12];


  VAR_10->dqh->max_packet_length =
   (VAR_0 << VAR_6)
   | VAR_5;

  VAR_10->dqh->next_dtd_ptr = VAR_7;

  VAR_11 = FUNC_0(&VAR_9->op_regs->epctrlx[0]);
  if (VAR_12) {
   VAR_11 |= VAR_3
    | (VAR_8
     << VAR_4);

  } else {
   VAR_11 |= VAR_1
    | (VAR_8
     << VAR_2);
  }

  FUNC_1(VAR_11, &VAR_9->op_regs->epctrlx[0]);
 }
}
