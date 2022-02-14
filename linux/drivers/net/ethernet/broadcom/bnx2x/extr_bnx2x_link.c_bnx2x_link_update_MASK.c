
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct link_vars {int link_status; size_t line_speed; size_t phy_flags; size_t flow_ctrl; int phy_link_up; int link_up; scalar_t__ fault_detected; int eee_status; int duplex; } ;
struct link_params {size_t port; size_t num_phys; int feature_config_flags; struct bnx2x_phy* phy; int multi_phy_config; struct bnx2x* bp; } ;
struct bnx2x_phy {size_t (* read_status ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;int supported; int flags; int (* config_init ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;int (* phy_specific_func ) (struct bnx2x_phy*,struct link_params*,int ) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;



 size_t FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct link_params*) ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct link_params*,int) ;
 int FUNC_7 (struct bnx2x*,int ,int ) ;
 int FUNC_8 (struct link_params*,struct link_vars*,size_t) ;
 int FUNC_9 (struct link_params*) ;
 int FUNC_10 (struct bnx2x*,size_t,int) ;
 int FUNC_11 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_12 (struct link_params*,struct link_vars*) ;
 int FUNC_13 (struct link_params*,struct link_vars*,size_t) ;
 size_t FUNC_14 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 size_t FUNC_15 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_16 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_17 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_18 (int,int) ;

int FUNC_19(struct link_params *VAR_30, struct link_vars *VAR_31)
{
 struct bnx2x *VAR_32 = VAR_30->bp;
 struct link_vars VAR_33[VAR_14];
 u8 VAR_34 = VAR_30->port;
 u8 VAR_35, VAR_36;
 u32 VAR_37 = VAR_31->link_status;
 u8 VAR_38 = 0, VAR_39;
 int VAR_40 = 0;
 u8 VAR_41 = 0;
 u16 VAR_42 = 0, VAR_43 = VAR_31->line_speed;
 u8 VAR_44 = VAR_9;
 VAR_31->phy_flags &= ~VAR_24;
 VAR_31->link_status &= ~VAR_13;
 for (VAR_36 = VAR_9; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  VAR_33[VAR_36].flow_ctrl = 0;
  VAR_33[VAR_36].link_status = 0;
  VAR_33[VAR_36].line_speed = 0;
  VAR_33[VAR_36].duplex = VAR_2;
  VAR_33[VAR_36].phy_link_up = 0;
  VAR_33[VAR_36].link_up = 0;
  VAR_33[VAR_36].fault_detected = 0;

  VAR_33[VAR_36].eee_status = VAR_31->eee_status;
 }

 if (FUNC_5(VAR_32))
  FUNC_11(VAR_30, &VAR_30->phy[VAR_9]);

 FUNC_1(VAR_15, "port %x, XGXS?%x, int_status 0x%x\n",
   VAR_34, (VAR_31->phy_flags & VAR_26),
   FUNC_2(VAR_32, VAR_21 + VAR_34*4));

 VAR_41 = (u8)(FUNC_2(VAR_32, VAR_17 +
    VAR_34*0x18) > 0);
 FUNC_1(VAR_15, "int_mask 0x%x MI_INT %x, SERDES_LINK %x\n",
   FUNC_2(VAR_32, VAR_18 + VAR_34*4),
   VAR_41,
   FUNC_2(VAR_32, VAR_20 + VAR_34*0x3c));

 FUNC_1(VAR_15, " 10G %x, XGXS_LINK %x\n",
   FUNC_2(VAR_32, VAR_22 + VAR_34*0x68),
   FUNC_2(VAR_32, VAR_23 + VAR_34*0x68));


 if (!FUNC_0(VAR_32))
  FUNC_3(VAR_32, VAR_19 + VAR_34*4, 0);
 for (VAR_36 = VAR_3; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  struct bnx2x_phy *VAR_45 = &VAR_30->phy[VAR_36];
  if (!VAR_45->read_status)
   continue;

  VAR_39 = VAR_45->read_status(VAR_45, VAR_30,
            &VAR_33[VAR_36]);
  if (VAR_39) {
   FUNC_1(VAR_15, "phy in index %d link is up\n",
       VAR_36);
  } else {
   FUNC_1(VAR_15, "phy in index %d link is down\n",
       VAR_36);
   continue;
  }

  if (!VAR_38) {
   VAR_38 = 1;
   VAR_44 = VAR_36;
  } else {
   switch (FUNC_9(VAR_30)) {
   case 129:
   case 130:




    VAR_44 = VAR_3;
    break;
   case 128:



    VAR_44 = VAR_4;
    break;
   default:
    FUNC_1(VAR_15, "Invalid link indication"
        "mpc=0x%x. DISABLING LINK !!!\n",
        VAR_30->multi_phy_config);
    VAR_38 = 0;
    break;
   }
  }
 }
 VAR_43 = VAR_31->line_speed;






 if (VAR_30->phy[VAR_9].read_status)
  VAR_30->phy[VAR_9].read_status(
   &VAR_30->phy[VAR_9],
   VAR_30, VAR_31);







 if (VAR_44 > VAR_9) {
  VAR_31->flow_ctrl = VAR_33[VAR_44].flow_ctrl;



  VAR_31->link_status |= VAR_33[VAR_44].link_status;




  if (VAR_44 == VAR_3) {
   if (VAR_30->phy[VAR_4].phy_specific_func) {
    FUNC_1(VAR_15,
       "Disabling TX on EXT_PHY2\n");
    VAR_30->phy[VAR_4].phy_specific_func(
     &VAR_30->phy[VAR_4],
     VAR_30, VAR_0);
   }
  }

  VAR_42 = VAR_33[VAR_44].line_speed;
  VAR_31->duplex = VAR_33[VAR_44].duplex;
  if (VAR_30->phy[VAR_44].supported &
      VAR_29)
   VAR_31->link_status |= VAR_12;
  else
   VAR_31->link_status &= ~VAR_12;

  VAR_31->eee_status = VAR_33[VAR_44].eee_status;

  FUNC_1(VAR_15, "Active external phy selected: %x\n",
      VAR_44);
 }

 for (VAR_36 = VAR_3; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  if (VAR_30->phy[VAR_36].flags &
      VAR_8) {
   FUNC_10(VAR_32, VAR_34,
       VAR_36 ==
       VAR_44);
   break;
  }
 }
 FUNC_1(VAR_15, "vars->flow_ctrl = 0x%x, vars->link_status = 0x%x,"
     " ext_phy_line_speed = %d\n", VAR_31->flow_ctrl,
     VAR_31->link_status, VAR_42);





 if (VAR_31->phy_link_up) {
  if (!(FUNC_4(VAR_30)) && VAR_38 &&
      (VAR_42 != VAR_31->line_speed)) {
   FUNC_1(VAR_15, "Internal link speed %d is"
       " different than the external"
       " link speed %d\n", VAR_31->line_speed,
       VAR_42);
   VAR_31->phy_link_up = 0;
  } else if (VAR_43 != VAR_31->line_speed) {
   FUNC_3(VAR_32, VAR_16 + VAR_30->port*4,
          0);
   FUNC_18(1000, 2000);
  }
 }


 VAR_35 = (VAR_31->line_speed >= VAR_28);

 FUNC_8(VAR_30, VAR_31, VAR_35);
 if (!(FUNC_4(VAR_30))) {
  FUNC_1(VAR_15, "ext_phy_link_up = %d, int_link_up = %d,"
      " init_preceding = %d\n", VAR_38,
      VAR_31->phy_link_up,
      VAR_30->phy[VAR_3].flags &
      VAR_7);
  if (!(VAR_30->phy[VAR_3].flags &
        VAR_7)
      && VAR_38 && !VAR_31->phy_link_up) {
   VAR_31->line_speed = VAR_42;
   if (VAR_31->line_speed < VAR_27)
    VAR_31->phy_flags |= VAR_25;
   else
    VAR_31->phy_flags &= ~VAR_25;

   if (VAR_30->phy[VAR_9].config_init)
    VAR_30->phy[VAR_9].config_init(
     &VAR_30->phy[VAR_9], VAR_30,
      VAR_31);
  }
 }



 VAR_31->link_up = (VAR_31->phy_link_up &&
    (VAR_38 ||
     FUNC_4(VAR_30)) &&
    (VAR_33[VAR_44].fault_detected == 0));


 if (VAR_30->feature_config_flags & VAR_6)
  VAR_31->link_status |= VAR_11;
 else
  VAR_31->link_status &= ~VAR_11;

 if (VAR_31->link_up)
  VAR_40 = FUNC_13(VAR_30, VAR_31, VAR_35);
 else
  VAR_40 = FUNC_12(VAR_30, VAR_31);

 if ((VAR_37 ^ VAR_31->link_status) & VAR_10)
  FUNC_6(VAR_30, 0);


 if (VAR_30->feature_config_flags & VAR_5)
  FUNC_7(VAR_32, VAR_1, 0);

 return VAR_40;
}
