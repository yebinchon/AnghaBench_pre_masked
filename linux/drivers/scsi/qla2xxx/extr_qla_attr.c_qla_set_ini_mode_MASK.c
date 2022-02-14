
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int online; } ;
struct TYPE_13__ {int qlini_mode; scalar_t__ u_ql2xexchoffld; scalar_t__ ql2xexchoffld; scalar_t__ u_ql2xiniexchg; scalar_t__ ql2xiniexchg; int dpc_flags; TYPE_1__ flags; TYPE_3__* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_11__ {int exchoffld_enabled; int fw_started; } ;
struct TYPE_12__ {TYPE_2__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;




 int * VAR_1 ;
 int FUNC_1 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(scsi_qla_host_t *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 enum {
  NO_ACTION,
  MODE_CHANGE_ACCEPT,
  MODE_CHANGE_NO_ACTION,
  TARGET_STILL_ACTIVE,
 };
 int VAR_6 = NO_ACTION;
 int VAR_7 = 0;
 u8 VAR_8 = 0;

 switch (VAR_3->qlini_mode) {
 case 131:
  switch (VAR_4) {
  case 131:
   if (FUNC_3(VAR_3)) {
    if (FUNC_0(VAR_3->u_ql2xexchoffld) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;
    if (((VAR_3->ql2xexchoffld !=
        VAR_3->u_ql2xexchoffld) &&
        FUNC_0(VAR_3->u_ql2xexchoffld)) ||
        VAR_8) {





     VAR_6 = MODE_CHANGE_ACCEPT;
    } else {
     VAR_6 = MODE_CHANGE_NO_ACTION;
    }
   } else {
    VAR_6 = MODE_CHANGE_NO_ACTION;
   }
   break;
  case 128:
   if (FUNC_3(VAR_3)) {
    if (FUNC_0(VAR_3->u_ql2xexchoffld) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;
    if (((VAR_3->ql2xexchoffld !=
        VAR_3->u_ql2xexchoffld) &&
        FUNC_0(VAR_3->u_ql2xexchoffld)) ||
        VAR_8) {





     VAR_6 = MODE_CHANGE_ACCEPT;
    } else {
     VAR_6 = MODE_CHANGE_NO_ACTION;
    }
   } else {
    VAR_6 = MODE_CHANGE_ACCEPT;
   }
   break;
  case 130:
   VAR_6 = MODE_CHANGE_ACCEPT;

   if (FUNC_3(VAR_3)) {
    VAR_7 = 1;
    VAR_6 = MODE_CHANGE_ACCEPT;
   } else {
    VAR_6 = MODE_CHANGE_NO_ACTION;
   }
   break;

  case 129:
   if (FUNC_3(VAR_3))
    VAR_6 = TARGET_STILL_ACTIVE;
   else {
    VAR_6 = MODE_CHANGE_ACCEPT;
    VAR_7 = 1;
   }
   break;
  }
  break;

 case 128:
  switch (VAR_4) {
  case 128:
   if (FUNC_3(VAR_3)) {
    if (FUNC_0(VAR_3->u_ql2xexchoffld) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;
    if (((VAR_3->ql2xexchoffld !=
        VAR_3->u_ql2xexchoffld) &&
        FUNC_0(VAR_3->u_ql2xexchoffld)) ||
        VAR_8)





     VAR_6 = MODE_CHANGE_ACCEPT;
    else
     VAR_6 = NO_ACTION;
   } else
    VAR_6 = NO_ACTION;

   break;

  case 131:
   if (FUNC_3(VAR_3)) {
    if (FUNC_0(VAR_3->u_ql2xexchoffld) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;
    if (((VAR_3->ql2xexchoffld !=
          VAR_3->u_ql2xexchoffld) &&
        FUNC_0(VAR_3->u_ql2xexchoffld)) ||
        VAR_8)
     VAR_6 = MODE_CHANGE_ACCEPT;
    else
     VAR_6 = MODE_CHANGE_NO_ACTION;
   } else
    VAR_6 = MODE_CHANGE_NO_ACTION;
   break;

  case 130:
   if (FUNC_3(VAR_3)) {
    VAR_6 = MODE_CHANGE_ACCEPT;
    VAR_7 = 1;
   } else
    VAR_6 = MODE_CHANGE_ACCEPT;
   break;

  case 129:
   if (FUNC_3(VAR_3))
    VAR_6 = TARGET_STILL_ACTIVE;
   else {
    if (VAR_3->hw->flags.fw_started)
     VAR_6 = MODE_CHANGE_NO_ACTION;
    else
     VAR_6 = MODE_CHANGE_ACCEPT;
   }
   break;
  }
  break;

 case 129:
  switch (VAR_4) {
  case 129:
   if (FUNC_0(VAR_3->u_ql2xiniexchg) !=
       VAR_3->hw->flags.exchoffld_enabled)
    VAR_8 = 1;
   if (((VAR_3->ql2xiniexchg != VAR_3->u_ql2xiniexchg) &&
    FUNC_0(VAR_3->u_ql2xiniexchg)) ||
       VAR_8)
    VAR_6 = MODE_CHANGE_ACCEPT;
   else
    VAR_6 = NO_ACTION;
   break;
  case 130:
  case 131:
   VAR_6 = MODE_CHANGE_ACCEPT;
   break;
  default:
   VAR_6 = MODE_CHANGE_NO_ACTION;
   break;
  }
  break;

 case 130:
  switch (VAR_4) {
  case 130:
   if (FUNC_3(VAR_3) ||
       FUNC_2(VAR_3)) {
    if (FUNC_0(VAR_3->u_ql2xexchoffld +
     VAR_3->u_ql2xiniexchg) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;

    if ((((VAR_3->ql2xexchoffld +
           VAR_3->ql2xiniexchg) !=
        (VAR_3->u_ql2xiniexchg +
         VAR_3->u_ql2xexchoffld)) &&
        FUNC_0(VAR_3->u_ql2xiniexchg +
     VAR_3->u_ql2xexchoffld)) || VAR_8)
     VAR_6 = MODE_CHANGE_ACCEPT;
    else
     VAR_6 = NO_ACTION;
   } else {
    if (FUNC_0(VAR_3->u_ql2xexchoffld +
     VAR_3->u_ql2xiniexchg) !=
        VAR_3->hw->flags.exchoffld_enabled)
     VAR_8 = 1;

    if ((((VAR_3->ql2xexchoffld + VAR_3->ql2xiniexchg)
        != (VAR_3->u_ql2xiniexchg +
     VAR_3->u_ql2xexchoffld)) &&
        FUNC_0(VAR_3->u_ql2xiniexchg +
     VAR_3->u_ql2xexchoffld)) || VAR_8)
     VAR_6 = MODE_CHANGE_NO_ACTION;
    else
     VAR_6 = NO_ACTION;
   }
   break;

  case 131:
   if (FUNC_3(VAR_3) ||
       FUNC_2(VAR_3)) {

    VAR_7 = 1;
    VAR_6 = MODE_CHANGE_ACCEPT;
   } else {
    VAR_6 = MODE_CHANGE_NO_ACTION;
   }
   break;

  case 128:
   if (FUNC_3(VAR_3) ||
       FUNC_2(VAR_3)) {
    VAR_7 = 1;
    VAR_6 = MODE_CHANGE_ACCEPT;
   } else {
    VAR_6 = MODE_CHANGE_ACCEPT;
   }
   break;

  case 129:
   if (FUNC_3(VAR_3) ||
       FUNC_2(VAR_3)) {
    VAR_6 = TARGET_STILL_ACTIVE;
   } else {
    VAR_6 = MODE_CHANGE_ACCEPT;
   }
  }
  break;
 }

 switch (VAR_6) {
 case MODE_CHANGE_ACCEPT:
  FUNC_1(VAR_2, VAR_3, 0xffff,
      "Mode change accepted. From %s to %s, Tgt exchg %d|%d. ini exchg %d|%d\n",
      VAR_1[VAR_3->qlini_mode], VAR_1[VAR_4],
      VAR_3->ql2xexchoffld, VAR_3->u_ql2xexchoffld,
      VAR_3->ql2xiniexchg, VAR_3->u_ql2xiniexchg);

  VAR_3->qlini_mode = VAR_4;
  VAR_3->ql2xexchoffld = VAR_3->u_ql2xexchoffld;
  VAR_3->ql2xiniexchg = VAR_3->u_ql2xiniexchg;
  if (VAR_7)
   FUNC_4(VAR_3);
  VAR_3->flags.online = 1;
  FUNC_5(VAR_0, &VAR_3->dpc_flags);
  break;

 case MODE_CHANGE_NO_ACTION:
  FUNC_1(VAR_2, VAR_3, 0xffff,
      "Mode is set. No action taken. From %s to %s, Tgt exchg %d|%d. ini exchg %d|%d\n",
      VAR_1[VAR_3->qlini_mode], VAR_1[VAR_4],
      VAR_3->ql2xexchoffld, VAR_3->u_ql2xexchoffld,
      VAR_3->ql2xiniexchg, VAR_3->u_ql2xiniexchg);
  VAR_3->qlini_mode = VAR_4;
  VAR_3->ql2xexchoffld = VAR_3->u_ql2xexchoffld;
  VAR_3->ql2xiniexchg = VAR_3->u_ql2xiniexchg;
  break;

 case TARGET_STILL_ACTIVE:
  FUNC_1(VAR_2, VAR_3, 0xffff,
      "Target Mode is active. Unable to change Mode.\n");
  break;

 case NO_ACTION:
 default:
  FUNC_1(VAR_2, VAR_3, 0xffff,
      "Mode unchange. No action taken. %d|%d pct %d|%d.\n",
      VAR_3->qlini_mode, VAR_4,
      VAR_3->ql2xexchoffld, VAR_3->u_ql2xexchoffld);
  break;
 }

 return VAR_5;
}
