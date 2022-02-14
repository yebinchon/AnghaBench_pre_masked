
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {int autoneg; int forced_rx; int forced_tx; } ;
struct TYPE_3__ {int forced_speed; int advertised_speeds; int autoneg; } ;
struct qed_mcp_link_params {int eee; int loopback_mode; TYPE_2__ pause; TYPE_1__ speed; } ;
struct qed_link_params {int override_flags; int adv_speeds; int pause_config; int loopback_mode; int link_up; int eee; int forced_speed; int autoneg; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {struct qed_hwfn* hwfns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_1 (int *,int *,int) ;
 struct qed_mcp_link_params* FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_7(struct qed_dev *VAR_50, struct qed_link_params *VAR_51)
{
 struct qed_hwfn *VAR_52;
 struct qed_mcp_link_params *VAR_53;
 struct qed_ptt *VAR_54;
 u32 VAR_55;
 int VAR_56;

 if (!VAR_50)
  return -VAR_1;


 VAR_52 = &VAR_50->hwfns[0];





 if (FUNC_0(VAR_50)) {
  FUNC_6(VAR_52, VAR_14);
  return 0;
 }

 VAR_54 = FUNC_4(VAR_52);
 if (!VAR_54)
  return -VAR_0;

 VAR_53 = FUNC_2(VAR_52);
 if (VAR_51->override_flags & VAR_19)
  VAR_53->speed.autoneg = VAR_51->autoneg;
 if (VAR_51->override_flags & VAR_18) {
  VAR_53->speed.advertised_speeds = 0;
  VAR_55 = VAR_37 |
      VAR_36 |
      VAR_38;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
       VAR_8;
  VAR_55 = VAR_35 |
      VAR_29 |
      VAR_30 |
      VAR_33 |
      VAR_28 |
      VAR_34 |
      VAR_32 |
      VAR_31;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
       VAR_7;
  if (VAR_51->adv_speeds & VAR_39)
   VAR_53->speed.advertised_speeds |=
    VAR_9;
  VAR_55 = VAR_41 |
      VAR_40 |
      VAR_42;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
       VAR_10;
  VAR_55 = VAR_45 |
      VAR_44 |
      VAR_43 |
      VAR_46;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
    VAR_11;
  VAR_55 = VAR_48 |
      VAR_47 |
      VAR_49;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
       VAR_12;
  VAR_55 = VAR_25 |
      VAR_27 |
      VAR_24 |
      VAR_26;
  if (VAR_51->adv_speeds & VAR_55)
   VAR_53->speed.advertised_speeds |=
       VAR_13;
 }
 if (VAR_51->override_flags & VAR_20)
  VAR_53->speed.forced_speed = VAR_51->forced_speed;
 if (VAR_51->override_flags & VAR_17) {
  if (VAR_51->pause_config & VAR_21)
   VAR_53->pause.autoneg = 1;
  else
   VAR_53->pause.autoneg = 0;
  if (VAR_51->pause_config & VAR_22)
   VAR_53->pause.forced_rx = 1;
  else
   VAR_53->pause.forced_rx = 0;
  if (VAR_51->pause_config & VAR_23)
   VAR_53->pause.forced_tx = 1;
  else
   VAR_53->pause.forced_tx = 0;
 }
 if (VAR_51->override_flags & VAR_16) {
  switch (VAR_51->loopback_mode) {
  case 129:
   VAR_53->loopback_mode = VAR_4;
   break;
  case 130:
   VAR_53->loopback_mode = VAR_3;
   break;
  case 131:
   VAR_53->loopback_mode = VAR_2;
   break;
  case 128:
   VAR_53->loopback_mode = VAR_5;
   break;
  default:
   VAR_53->loopback_mode = VAR_6;
   break;
  }
 }

 if (VAR_51->override_flags & VAR_15)
  FUNC_1(&VAR_53->eee, &VAR_51->eee,
         sizeof(VAR_53->eee));

 VAR_56 = FUNC_3(VAR_52, VAR_54, VAR_51->link_up);

 FUNC_5(VAR_52, VAR_54);

 return VAR_56;
}
