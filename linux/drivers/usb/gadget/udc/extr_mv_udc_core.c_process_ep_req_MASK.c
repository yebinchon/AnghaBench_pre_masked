
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {TYPE_4__* op_regs; TYPE_2__* dev; TYPE_1__* eps; struct mv_dqh* ep_dqh; } ;
struct TYPE_10__ {int length; int actual; } ;
struct mv_req {int dtd_count; TYPE_5__ req; TYPE_3__* ep; struct mv_dtd* head; } ;
struct mv_dtd {int size_ioc_sts; scalar_t__ td_dma; scalar_t__ dtd_next; scalar_t__ next_dtd_virt; } ;
struct mv_dqh {int size_ioc_int_sts; scalar_t__ curr_dtd_ptr; } ;
struct TYPE_9__ {int epstatus; } ;
struct TYPE_8__ {int ep_num; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mv_udc *VAR_12, int VAR_13,
 struct mv_req *VAR_14)
{
 struct mv_dtd *VAR_15;
 struct mv_dqh *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = 0;
 u32 VAR_22;
 u32 VAR_23;

 VAR_16 = &VAR_12->ep_dqh[VAR_13];
 VAR_20 = VAR_13 % 2;

 VAR_15 = VAR_14->head;
 VAR_17 = VAR_14->req.length;

 for (VAR_19 = 0; VAR_19 < VAR_14->dtd_count; VAR_19++) {
  if (VAR_15->size_ioc_sts & VAR_3) {
   FUNC_0(&VAR_12->dev->dev, "%s, dTD not completed\n",
    VAR_12->eps[VAR_13].name);
   return 1;
  }

  VAR_22 = VAR_15->size_ioc_sts & VAR_0;
  if (!VAR_22) {
   VAR_18 =
    (VAR_15->size_ioc_sts & VAR_2)
     >> VAR_1;
   VAR_17 -= VAR_18;

   if (VAR_18) {
    if (VAR_20) {
     FUNC_0(&VAR_12->dev->dev,
      "TX dTD remains data\n");
     VAR_21 = -VAR_9;
     break;
    } else
     break;
   }
  } else {
   FUNC_1(&VAR_12->dev->dev,
    "complete_tr error: ep=%d %s: error = 0x%x\n",
    VAR_13 >> 1, VAR_20 ? "SEND" : "RECV",
    VAR_22);
   if (VAR_22 & VAR_5) {

    VAR_16->size_ioc_int_sts &= ~VAR_22;
    VAR_21 = -VAR_8;
   } else if (VAR_22 & VAR_4) {
    VAR_21 = -VAR_9;
   } else if (VAR_22 & VAR_6) {
    VAR_21 = -VAR_7;
   }
  }
  if (VAR_19 != VAR_14->dtd_count - 1)
   VAR_15 = (struct mv_dtd *)VAR_15->next_dtd_virt;
 }
 if (VAR_21)
  return VAR_21;

 if (VAR_20 == VAR_10)
  VAR_23 = 1 << VAR_14->ep->ep_num;
 else
  VAR_23 = 1 << (16 + VAR_14->ep->ep_num);

 while (VAR_16->curr_dtd_ptr == VAR_15->td_dma) {
  if (VAR_15->dtd_next == VAR_11) {
   while (FUNC_2(&VAR_12->op_regs->epstatus) & VAR_23)
    FUNC_3(1);
   break;
  }
  FUNC_3(1);
 }

 VAR_14->req.actual = VAR_17;

 return 0;
}
