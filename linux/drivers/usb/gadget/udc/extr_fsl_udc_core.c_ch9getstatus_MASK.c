
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int is_selfpowered; } ;
struct fsl_udc {int remote_wakeup; int ep0_state; struct fsl_req* status_req; int ep0_dir; TYPE_1__ gadget; struct fsl_ep* eps; } ;
struct TYPE_8__ {int length; int complete; scalar_t__ actual; int status; scalar_t__ buf; } ;
struct fsl_req {int queue; TYPE_4__ req; scalar_t__ dtd_count; struct fsl_ep* ep; } ;
struct TYPE_6__ {int desc; } ;
struct fsl_ep {int queue; TYPE_3__* udc; TYPE_2__ ep; } ;
struct TYPE_7__ {int gadget; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct fsl_udc*,int ) ;
 int FUNC_3 (struct fsl_udc*) ;
 int FUNC_4 (struct fsl_ep*) ;
 int FUNC_5 (struct fsl_ep*) ;
 int VAR_11 ;
 int FUNC_6 (struct fsl_ep*,struct fsl_req*) ;
 scalar_t__ FUNC_7 (struct fsl_req*,int ) ;
 struct fsl_ep* FUNC_8 (struct fsl_udc*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_12(struct fsl_udc *VAR_12, u8 VAR_13, u16 VAR_14,
  u16 VAR_15, u16 VAR_16)
{
 u16 VAR_17 = 0;
 struct fsl_req *VAR_18;
 struct fsl_ep *VAR_19;
 int VAR_20;

 VAR_19 = &VAR_12->eps[0];

 if ((VAR_13 & VAR_10) == VAR_7) {

  VAR_17 = VAR_12->gadget.is_selfpowered;
  VAR_17 |= VAR_12->remote_wakeup << VAR_4;
 } else if ((VAR_13 & VAR_10) == VAR_9) {


  VAR_17 = 0;
 } else if ((VAR_13 & VAR_10) == VAR_8) {

  struct fsl_ep *VAR_21;

  VAR_21 = FUNC_8(VAR_12, FUNC_9(VAR_15));


  if (!VAR_21->ep.desc)
   goto stall;
  VAR_17 = FUNC_1(FUNC_4(VAR_21), FUNC_5(VAR_21))
    << VAR_6;
 }

 VAR_12->ep0_dir = VAR_5;

 VAR_18 = VAR_12->status_req;

 *((u16 *) VAR_18->req.buf) = FUNC_0(VAR_17);

 VAR_18->ep = VAR_19;
 VAR_18->req.length = 2;
 VAR_18->req.status = -VAR_1;
 VAR_18->req.actual = 0;
 VAR_18->req.complete = VAR_11;
 VAR_18->dtd_count = 0;

 VAR_20 = FUNC_11(&VAR_19->udc->gadget, &VAR_18->req, FUNC_5(VAR_19));
 if (VAR_20)
  goto stall;


 if ((FUNC_7(VAR_18, VAR_3) == 0))
  FUNC_6(VAR_19, VAR_18);
 else
  goto stall;

 FUNC_10(&VAR_18->queue, &VAR_19->queue);
 VAR_12->ep0_state = VAR_0;
 if (FUNC_2(VAR_12, VAR_2))
  FUNC_3(VAR_12);

 return;
stall:
 FUNC_3(VAR_12);
}
