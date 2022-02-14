
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int unsafe; } ;
struct uwb_rsv_move {TYPE_4__ companion_mas; struct uwb_ie_drp* companion_drp_ie; } ;
struct TYPE_6__ {int type; int devaddr; TYPE_1__* dev; } ;
struct uwb_rsv {scalar_t__ state; int ie_valid; struct uwb_ie_drp* drp_ie; struct uwb_rsv_move mv; TYPE_4__ mas; TYPE_3__* owner; TYPE_2__ target; int type; int stream; int tiebreaker; } ;
struct uwb_ie_drp {int dev_addr; } ;
struct TYPE_7__ {int dev_addr; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (struct uwb_ie_drp*) ;
 int FUNC_1 (struct uwb_ie_drp*,struct uwb_ie_drp*,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (struct uwb_ie_drp*,TYPE_4__*) ;
 int FUNC_4 (struct uwb_ie_drp*,scalar_t__) ;
 int FUNC_5 (struct uwb_ie_drp*,int ) ;
 int FUNC_6 (struct uwb_ie_drp*,int ) ;
 int FUNC_7 (struct uwb_ie_drp*,int ) ;
 int FUNC_8 (struct uwb_ie_drp*,int ) ;
 int FUNC_9 (struct uwb_ie_drp*,int ) ;
 int FUNC_10 (struct uwb_ie_drp*,int) ;
 int FUNC_11 (struct uwb_rsv*) ;
 int FUNC_12 (struct uwb_rsv*) ;
 scalar_t__ FUNC_13 (struct uwb_rsv*) ;
 scalar_t__ FUNC_14 (struct uwb_rsv*) ;
 int FUNC_15 (struct uwb_rsv*) ;
 int FUNC_16 (struct uwb_rsv*) ;

int FUNC_17(struct uwb_rsv *VAR_2)
{
 struct uwb_ie_drp *VAR_3;
 struct uwb_rsv_move *VAR_4;
 int VAR_5;

 if (VAR_2->state == VAR_1) {
  FUNC_0(VAR_2->drp_ie);
  VAR_2->drp_ie = ((void*)0);
  return 0;
 }

 VAR_5 = VAR_2->mas.unsafe ? 1 : 0;

 if (VAR_2->drp_ie == ((void*)0)) {
  VAR_2->drp_ie = FUNC_2();
  if (VAR_2->drp_ie == ((void*)0))
   return -VAR_0;
 }
 VAR_3 = VAR_2->drp_ie;

 FUNC_10(VAR_3, VAR_5);
 FUNC_8(VAR_3, VAR_2->tiebreaker);
 FUNC_4(VAR_3, FUNC_14(VAR_2));
 FUNC_6(VAR_3, FUNC_16(VAR_2));
 FUNC_5(VAR_3, FUNC_15(VAR_2));
 FUNC_7(VAR_3, VAR_2->stream);
 FUNC_9(VAR_3, VAR_2->type);

 if (FUNC_14(VAR_2)) {
  switch (VAR_2->target.type) {
  case 129:
   VAR_3->dev_addr = VAR_2->target.dev->dev_addr;
   break;
  case 128:
   VAR_3->dev_addr = VAR_2->target.devaddr;
   break;
  }
 } else
  VAR_3->dev_addr = VAR_2->owner->dev_addr;

 FUNC_3(VAR_3, &VAR_2->mas);

 if (FUNC_13(VAR_2)) {
  VAR_4 = &VAR_2->mv;
  if (VAR_4->companion_drp_ie == ((void*)0)) {
   VAR_4->companion_drp_ie = FUNC_2();
   if (VAR_4->companion_drp_ie == ((void*)0))
    return -VAR_0;
  }
  VAR_3 = VAR_4->companion_drp_ie;


  FUNC_1(VAR_3, VAR_2->drp_ie, sizeof(struct uwb_ie_drp));



  FUNC_10(VAR_3, 1);
  FUNC_6(VAR_3, FUNC_12(VAR_2));
  FUNC_5(VAR_3, FUNC_11(VAR_2));

  FUNC_3(VAR_3, &VAR_4->companion_mas);
 }

 VAR_2->ie_valid = 1;
 return 0;
}
