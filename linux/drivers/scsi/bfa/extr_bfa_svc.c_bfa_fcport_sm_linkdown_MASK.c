
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int fipenabled; int fipfailed; } ;
struct TYPE_14__ {TYPE_3__ fcf; } ;
struct TYPE_15__ {TYPE_4__ vc_fcf; } ;
struct TYPE_16__ {TYPE_5__ attr; } ;
struct bfi_fcport_event_s {TYPE_6__ link_state; } ;
struct bfad_s {int dummy; } ;
struct TYPE_18__ {int state; } ;
struct TYPE_17__ {int qos_enabled; } ;
struct TYPE_11__ {struct bfi_fcport_event_s* event; } ;
struct TYPE_12__ {TYPE_1__ i2hmsg; } ;
struct bfa_fcport_s {TYPE_9__* bfa; int pwwn; TYPE_8__ qos_attr; TYPE_7__ cfg; int event_cbfn; TYPE_2__ event_arg; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_19__ {int plog; int ioc; scalar_t__ bfad; } ;


 int VAR_0 ;







 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_fcport_s*,int ) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 int FUNC_4 (struct bfa_fcport_s*,int ,int ) ;
 int FUNC_5 (struct bfa_fcport_s*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct bfa_fcport_s*) ;
 int FUNC_7 (int *) ;
 int VAR_19 ;
 int FUNC_8 (int ,int ,int ,int ,char*) ;
 int FUNC_9 (TYPE_9__*,int) ;
 int FUNC_10 (struct bfa_fcport_s*,int ) ;
 int FUNC_11 (TYPE_9__*,int) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(struct bfa_fcport_s *VAR_20,
      enum bfa_fcport_sm_event VAR_21)
{
 struct bfi_fcport_event_s *VAR_22 = VAR_20->event_arg.i2hmsg.event;
 char VAR_23[VAR_11];
 struct bfad_s *VAR_24 = (struct bfad_s *)VAR_20->bfa->bfad;

 FUNC_11(VAR_20->bfa, VAR_21);

 switch (VAR_21) {
 case 129:
  FUNC_6(VAR_20);
  FUNC_10(VAR_20, VAR_17);
  FUNC_1(!VAR_20->event_cbfn);
  FUNC_8(VAR_20->bfa->plog, VAR_4,
    VAR_3, 0, "Port Linkup");
  if (!FUNC_7(&VAR_20->bfa->ioc)) {

   FUNC_11(VAR_20->bfa,
    VAR_22->link_state.attr.vc_fcf.fcf.fipenabled);
   FUNC_11(VAR_20->bfa,
    VAR_22->link_state.attr.vc_fcf.fcf.fipfailed);

   if (VAR_22->link_state.attr.vc_fcf.fcf.fipfailed)
    FUNC_8(VAR_20->bfa->plog, VAR_4,
     VAR_1, 0,
     "FIP FCF Discovery Failed");
   else
    FUNC_8(VAR_20->bfa->plog, VAR_4,
     VAR_1, 0,
     "FIP FCF Discovered");
  }

  FUNC_4(VAR_20, VAR_9, VAR_0);
  FUNC_12(VAR_23, VAR_20->pwwn);
  FUNC_0(VAR_12, VAR_24, VAR_19,
   "Base port online: WWN = %s\n", VAR_23);
  FUNC_2(VAR_20, VAR_7);


  if (VAR_20->cfg.qos_enabled &&
      VAR_20->qos_attr.state != VAR_10)
   FUNC_2(VAR_20, VAR_8);
  break;

 case 130:



  break;

 case 133:



  break;

 case 134:
  if (FUNC_5(VAR_20))
   FUNC_10(VAR_20, VAR_13);
  else
   FUNC_10(VAR_20,
      VAR_14);

  FUNC_8(VAR_20->bfa->plog, VAR_4,
    VAR_2, 0, "Port Disable");
  FUNC_12(VAR_23, VAR_20->pwwn);
  FUNC_0(VAR_12, VAR_24, VAR_19,
   "Base port disabled: WWN = %s\n", VAR_23);
  FUNC_2(VAR_20, VAR_5);
  break;

 case 128:
  FUNC_10(VAR_20, VAR_18);
  break;

 case 131:
  FUNC_10(VAR_20, VAR_16);
  break;

 case 132:
  FUNC_3(VAR_20);
  FUNC_2(VAR_20, VAR_6);
  FUNC_10(VAR_20, VAR_15);
  break;

 default:
  FUNC_9(VAR_20->bfa, VAR_21);
 }
}
