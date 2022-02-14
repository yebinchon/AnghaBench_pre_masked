
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int line_speed; scalar_t__ duplex; int link_status; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
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
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int,int*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 scalar_t__ FUNC_3 (struct link_params*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static u8 FUNC_5(struct bnx2x_phy *VAR_18,
        struct link_params *VAR_19,
        struct link_vars *VAR_20)
{
 struct bnx2x *VAR_21 = VAR_19->bp;
 u16 VAR_22;
 u8 VAR_23 = 0;
 u16 VAR_24, VAR_25;


 FUNC_1(VAR_21, VAR_18,
   VAR_12,
   &VAR_24);
 FUNC_0(VAR_14, "54618SE read_status: 0x%x\n", VAR_24);


 FUNC_1(VAR_21, VAR_18,
   VAR_13,
   &VAR_22);

 VAR_23 = ((VAR_24 & (1<<2)) == (1<<2));

 if (VAR_23) {
  VAR_25 = (VAR_24 & (7<<8));
  if (VAR_25 == (7<<8)) {
   VAR_20->line_speed = VAR_17;
   VAR_20->duplex = VAR_0;
  } else if (VAR_25 == (6<<8)) {
   VAR_20->line_speed = VAR_17;
   VAR_20->duplex = VAR_1;
  } else if (VAR_25 == (5<<8)) {
   VAR_20->line_speed = VAR_16;
   VAR_20->duplex = VAR_0;
  }

  else if (VAR_25 == (3<<8)) {
   VAR_20->line_speed = VAR_16;
   VAR_20->duplex = VAR_1;
  } else if (VAR_25 == (2<<8)) {
   VAR_20->line_speed = VAR_15;
   VAR_20->duplex = VAR_0;
  } else if (VAR_25 == (1<<8)) {
   VAR_20->line_speed = VAR_15;
   VAR_20->duplex = VAR_1;
  } else
   VAR_20->line_speed = 0;

  FUNC_0(VAR_14,
     "Link is up in %dMbps, is_duplex_full= %d\n",
     VAR_20->line_speed,
     (VAR_20->duplex == VAR_0));


  FUNC_1(VAR_21, VAR_18,
    0x01,
    &VAR_22);
  if (VAR_22 & (1<<5))
   VAR_20->link_status |=
    VAR_3;
  FUNC_1(VAR_21, VAR_18,
    0x06,
    &VAR_22);
  if ((VAR_22 & (1<<0)) == 0)
   VAR_20->link_status |=
    VAR_11;

  FUNC_0(VAR_14, "BCM54618SE: link speed is %d\n",
      VAR_20->line_speed);

  FUNC_4(VAR_18, VAR_19, VAR_20);

  if (VAR_20->link_status & VAR_3) {

   FUNC_1(VAR_21, VAR_18, 0x5, &VAR_22);

   if (VAR_22 & (1<<5))
    VAR_20->link_status |=
      VAR_10;
   if (VAR_22 & (1<<6))
    VAR_20->link_status |=
      VAR_9;
   if (VAR_22 & (1<<7))
    VAR_20->link_status |=
      VAR_8;
   if (VAR_22 & (1<<8))
    VAR_20->link_status |=
      VAR_7;
   if (VAR_22 & (1<<9))
    VAR_20->link_status |=
      VAR_6;

   FUNC_1(VAR_21, VAR_18, 0xa, &VAR_22);
   if (VAR_22 & (1<<10))
    VAR_20->link_status |=
      VAR_5;
   if (VAR_22 & (1<<11))
    VAR_20->link_status |=
      VAR_4;

   if ((VAR_18->flags & VAR_2) &&
       FUNC_3(VAR_19))
    FUNC_2(VAR_18, VAR_19, VAR_20);
  }
 }
 return VAR_23;
}
