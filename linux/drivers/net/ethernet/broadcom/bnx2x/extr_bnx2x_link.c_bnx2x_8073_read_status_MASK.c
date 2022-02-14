
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; int link_status; int duplex; } ;
struct link_params {int lane_config; int port; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_1 (struct bnx2x*,struct bnx2x_phy*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 scalar_t__ FUNC_3 (struct bnx2x*,struct bnx2x_phy*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_phy*,struct link_vars*) ;

__attribute__((used)) static u8 FUNC_7(struct bnx2x_phy *VAR_24,
     struct link_params *VAR_25,
     struct link_vars *VAR_26)
{
 struct bnx2x *VAR_27 = VAR_25->bp;
 u8 VAR_28 = 0;
 u16 VAR_29, VAR_30;
 u16 VAR_31 = 0;
 u16 VAR_32 = 0;

 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_11, &VAR_29);

 FUNC_0(VAR_19, "8703 LASI status 0x%x\n", VAR_29);


 FUNC_4(VAR_27, VAR_24,
   VAR_7, VAR_8, &VAR_30);
 FUNC_4(VAR_27, VAR_24,
   VAR_7, VAR_8, &VAR_29);
 FUNC_0(VAR_19, "807x PCS status 0x%x->0x%x\n", VAR_30, VAR_29);

 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_14, &VAR_29);


 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_10, &VAR_30);

 FUNC_0(VAR_19, "KR 0x9003 0x%x\n", VAR_30);


 FUNC_4(VAR_27, VAR_24,
   VAR_7, VAR_8, &VAR_30);
 FUNC_0(VAR_19, "KR PCS status 0x%x\n", VAR_30);

 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_16, &VAR_30);
 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_16, &VAR_29);
 VAR_28 = ((VAR_29 & 4) == 4);
 FUNC_0(VAR_19, "PMA_REG_STATUS=0x%x\n", VAR_29);

 if (VAR_28 &&
      ((VAR_24->req_line_speed != VAR_22))) {
  if (FUNC_3(VAR_27, VAR_24) != 0)
   return 0;
 }
 FUNC_4(VAR_27, VAR_24,
   VAR_4, VAR_5, &VAR_32);
 FUNC_4(VAR_27, VAR_24,
   VAR_4, VAR_5, &VAR_32);


 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_16, &VAR_30);
 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_16, &VAR_29);
 FUNC_0(VAR_19, "KR PMA status 0x%x->0x%x,"
     "an_link_status=0x%x\n", VAR_30, VAR_29, VAR_32);

 VAR_28 = (((VAR_29 & 4) == 4) || (VAR_32 & (1<<1)));
 if (VAR_28 && FUNC_1(VAR_27, VAR_24)) {




  FUNC_5(VAR_27, VAR_24,
     VAR_9, VAR_15,
     0x26BC);


  FUNC_5(VAR_27, VAR_24,
     VAR_9, VAR_13,
     0x0333);
 }
 FUNC_4(VAR_27, VAR_24,
   VAR_9, VAR_12,
   &VAR_31);


 if ((VAR_31 & (1<<2)) && (!(VAR_31 & (1<<15)))) {
  VAR_28 = 1;
  VAR_26->line_speed = VAR_22;
  FUNC_0(VAR_19, "port %x: External link up in 10G\n",
      VAR_25->port);
 } else if ((VAR_31 & (1<<1)) && (!(VAR_31 & (1<<14)))) {
  VAR_28 = 1;
  VAR_26->line_speed = VAR_23;
  FUNC_0(VAR_19, "port %x: External link up in 2.5G\n",
      VAR_25->port);
 } else if ((VAR_31 & (1<<0)) && (!(VAR_31 & (1<<13)))) {
  VAR_28 = 1;
  VAR_26->line_speed = VAR_21;
  FUNC_0(VAR_19, "port %x: External link up in 1G\n",
      VAR_25->port);
 } else {
  VAR_28 = 0;
  FUNC_0(VAR_19, "port %x: External link is down\n",
      VAR_25->port);
 }

 if (VAR_28) {

  if (VAR_25->lane_config &
      VAR_20) {

   FUNC_4(VAR_27, VAR_24,
     VAR_17,
     VAR_18, &VAR_29);



   if (VAR_26->line_speed == VAR_21) {
    FUNC_0(VAR_19, "Swapping 1G polarity for"
           "the 8073\n");
    VAR_29 |= (1<<3);
   } else
    VAR_29 &= ~(1<<3);

   FUNC_5(VAR_27, VAR_24,
      VAR_17,
      VAR_18,
      VAR_29);
  }
  FUNC_6(VAR_27, VAR_24, VAR_26);
  FUNC_2(VAR_24, VAR_25, VAR_26);
  VAR_26->duplex = VAR_0;
 }

 if (VAR_26->link_status & VAR_1) {
  FUNC_4(VAR_27, VAR_24, VAR_4,
    VAR_6, &VAR_29);

  if (VAR_29 & (1<<5))
   VAR_26->link_status |=
    VAR_2;
  if (VAR_29 & (1<<7))
   VAR_26->link_status |=
    VAR_3;
 }

 return VAR_28;
}
