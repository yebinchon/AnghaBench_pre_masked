
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct link_vars {int link_status; int phy_flags; int flow_ctrl; int eee_status; int line_speed; scalar_t__ link_up; } ;
struct link_params {int port; TYPE_1__* phy; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_4 (struct link_params*) ;
 int VAR_22 ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct link_params*,struct link_vars*,int ,int) ;
 int FUNC_7 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_8 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_9 (struct link_params*,struct link_vars*) ;
 int FUNC_10 (struct link_params*,int,int ) ;
 int FUNC_11 (struct link_params*) ;
 int FUNC_12 (struct link_params*,struct link_vars*,int ,int ) ;
 int FUNC_13 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_14 (struct link_params*,int) ;
 int FUNC_15 (struct link_params*,int) ;
 int FUNC_16 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct link_params *VAR_23,
    struct link_vars *VAR_24,
    u8 VAR_25)
{
 struct bnx2x *VAR_26 = VAR_23->bp;
 u8 VAR_27, VAR_28 = VAR_23->port;
 int VAR_29 = 0;

 VAR_24->link_status |= (VAR_7 |
         VAR_8);
 VAR_24->phy_flags |= VAR_18;

 if (VAR_24->flow_ctrl & VAR_1)
  VAR_24->link_status |=
   VAR_10;

 if (VAR_24->flow_ctrl & VAR_0)
  VAR_24->link_status |=
   VAR_9;
 if (FUNC_5(VAR_26)) {
  if (VAR_25) {
   if (FUNC_16(VAR_23, VAR_24, 0) ==
       -VAR_2) {
    FUNC_2(VAR_15, "Found errors on XMAC\n");
    VAR_24->link_up = 0;
    VAR_24->phy_flags |= VAR_17;
    VAR_24->link_status &= ~VAR_7;
   }
  } else
   FUNC_13(VAR_23, VAR_24, 0);
  FUNC_12(VAR_23, VAR_24,
         VAR_5, VAR_24->line_speed);

  if ((VAR_24->eee_status & VAR_20) &&
      (VAR_24->eee_status & VAR_21)) {
   FUNC_2(VAR_15, "Enabling LPI assertion\n");
   FUNC_3(VAR_26, VAR_13 +
          (VAR_23->port << 2), 1);
   FUNC_3(VAR_26, VAR_12, 1);
   FUNC_3(VAR_26, VAR_14 +
          (VAR_23->port << 2), 0xfc20);
  }
 }
 if ((FUNC_0(VAR_26) ||
      FUNC_1(VAR_26))) {
  if (VAR_25) {
   if (FUNC_6(VAR_23, VAR_24, 0, 1) ==
       -VAR_2) {
    FUNC_2(VAR_15, "Found errors on BMAC\n");
    VAR_24->link_up = 0;
    VAR_24->phy_flags |= VAR_17;
    VAR_24->link_status &= ~VAR_7;
   }

   FUNC_12(VAR_23, VAR_24,
          VAR_5, VAR_22);
  } else {
   VAR_29 = FUNC_9(VAR_23, VAR_24);
   FUNC_8(VAR_23, VAR_24, 0);


   if ((VAR_24->link_status &
        VAR_6)
       && (!(VAR_24->phy_flags & VAR_19)) &&
       FUNC_4(VAR_23))
    FUNC_11(VAR_23);
  }
 }


 if (FUNC_0(VAR_26))
  VAR_29 |= FUNC_10(VAR_23, VAR_24->flow_ctrl,
           VAR_24->line_speed);


 FUNC_3(VAR_26, VAR_16 + VAR_28*4, 0);


 FUNC_14(VAR_23, VAR_24->link_status);
 FUNC_15(VAR_23, VAR_24->eee_status);

 for (VAR_27 = VAR_4; VAR_27 < VAR_11; VAR_27++) {
  if (VAR_23->phy[VAR_27].flags & VAR_3) {
   FUNC_7(VAR_23, VAR_24, 0);
   break;
  }
 }
 FUNC_17(20);
 return VAR_29;
}
