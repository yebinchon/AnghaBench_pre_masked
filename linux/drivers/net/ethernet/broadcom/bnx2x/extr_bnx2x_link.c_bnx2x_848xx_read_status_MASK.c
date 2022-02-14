
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int line_speed; scalar_t__ duplex; int link_status; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,struct link_vars*) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 scalar_t__ FUNC_6 (struct bnx2x_phy*) ;

__attribute__((used)) static u8 FUNC_7(struct bnx2x_phy *VAR_27,
      struct link_params *VAR_28,
      struct link_vars *VAR_29)
{
 struct bnx2x *VAR_30 = VAR_28->bp;
 u16 VAR_31, VAR_32, VAR_33;
 u8 VAR_34 = 0;




 FUNC_1(VAR_30, VAR_27,
   VAR_12, 0xFFFA, &VAR_32);
 FUNC_1(VAR_30, VAR_27,
   VAR_20, VAR_21,
   &VAR_33);
 FUNC_0(VAR_22, "BCM848xx: PMD_SIGNAL 1.a811 = 0x%x\n", VAR_33);


 if (VAR_33 & (1<<11)) {
  VAR_29->line_speed = VAR_26;
  VAR_29->duplex = VAR_0;
  VAR_34 = 1;
  FUNC_4(VAR_30, VAR_27, VAR_29);
 } else {
  u16 VAR_35, VAR_36;


  FUNC_2(VAR_30, VAR_27,
     VAR_12,
     VAR_14, 0xf42);


  FUNC_1(VAR_30, VAR_27,
    VAR_12,
    VAR_15,
    &VAR_35);

  FUNC_0(VAR_22, "Legacy speed status = 0x%x\n",
     VAR_35);
  VAR_34 = ((VAR_35 & (1<<11)) == (1<<11));
  VAR_36 = (VAR_35 & (3<<9));
  if (VAR_36 == (0<<9))
   VAR_29->line_speed = VAR_23;
  else if (VAR_36 == (1<<9))
   VAR_29->line_speed = VAR_24;
  else if (VAR_36 == (2<<9))
   VAR_29->line_speed = VAR_25;
  else {
   VAR_29->line_speed = 0;
   VAR_34 = 0;
  }

  if (VAR_34) {
   if (VAR_35 & (1<<8))
    VAR_29->duplex = VAR_0;
   else
    VAR_29->duplex = VAR_1;

   FUNC_0(VAR_22,
      "Link is up in %dMbps, is_duplex_full= %d\n",
      VAR_29->line_speed,
      (VAR_29->duplex == VAR_0));

   FUNC_1(VAR_30, VAR_27,
     VAR_12,
     VAR_17,
     &VAR_31);
   if (VAR_31 & (1<<5))
    VAR_29->link_status |=
     VAR_2;
   FUNC_1(VAR_30, VAR_27,
     VAR_12,
     VAR_16,
     &VAR_31);
   if ((VAR_31 & (1<<0)) == 0)
    VAR_29->link_status |=
     VAR_11;
  }
 }
 if (VAR_34) {
  FUNC_0(VAR_22, "BCM848x3: link speed is %d\n",
      VAR_29->line_speed);
  FUNC_5(VAR_27, VAR_28, VAR_29);


  FUNC_1(VAR_30, VAR_27, VAR_12,
    VAR_18, &VAR_31);
  if (VAR_31 & (1<<5))
   VAR_29->link_status |=
    VAR_10;
  if (VAR_31 & (1<<6))
   VAR_29->link_status |=
    VAR_9;
  if (VAR_31 & (1<<7))
   VAR_29->link_status |=
    VAR_7;
  if (VAR_31 & (1<<8))
   VAR_29->link_status |=
    VAR_6;
  if (VAR_31 & (1<<9))
   VAR_29->link_status |=
    VAR_5;

  FUNC_1(VAR_30, VAR_27, VAR_12,
    VAR_13, &VAR_31);

  if (VAR_31 & (1<<10))
   VAR_29->link_status |=
    VAR_4;
  if (VAR_31 & (1<<11))
   VAR_29->link_status |=
    VAR_3;

  FUNC_1(VAR_30, VAR_27, VAR_12,
    VAR_19, &VAR_31);

  if (VAR_31 & (1<<11))
   VAR_29->link_status |=
    VAR_8;


  if (FUNC_6(VAR_27))
   FUNC_3(VAR_27, VAR_28, VAR_29);
 }

 return VAR_34;
}
