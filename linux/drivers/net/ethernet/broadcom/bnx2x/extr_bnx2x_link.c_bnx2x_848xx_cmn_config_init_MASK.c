
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; int speed_cap_mask; scalar_t__ req_duplex; int supported; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_5 (struct link_params*,struct bnx2x_phy*,struct link_vars*) ;
 int FUNC_6 (struct bnx2x_phy*) ;

__attribute__((used)) static int FUNC_7(struct bnx2x_phy *VAR_27,
           struct link_params *VAR_28,
           struct link_vars *VAR_29)
{
 struct bnx2x *VAR_30 = VAR_28->bp;
 u16 VAR_31, VAR_32, VAR_33;

 FUNC_1(VAR_27, VAR_28, VAR_11);
 FUNC_4(VAR_30, VAR_27,
    VAR_8, VAR_9, 0x0000);


 FUNC_2(VAR_30, VAR_27,
   VAR_1, VAR_2,
   &VAR_32);

 FUNC_5(VAR_28, VAR_27, VAR_29);
 FUNC_2(VAR_30, VAR_27,
   VAR_1,
   VAR_5,
   &VAR_33);
 FUNC_2(VAR_30, VAR_27,
   VAR_1, VAR_6,
   &VAR_31);

 VAR_31 &= ~((1<<6) | (1<<8) | (1<<9) | (1<<12) | (1<<13));
 VAR_33 &= ~((1<<5) | (1<<6) | (1<<7) | (1<<8));

 if (((VAR_27->req_line_speed == VAR_22) &&
      (VAR_27->speed_cap_mask &
      VAR_17)) ||
     (VAR_27->req_line_speed == VAR_20)) {
  VAR_32 |= (1<<8);
  VAR_31 |= (1<<9 | 1<<12);
  if (VAR_27->req_duplex == VAR_0)
   VAR_32 |= (1<<9);
  FUNC_0(VAR_10, "Advertising 1G\n");
 } else
  VAR_32 &= ~((1<<8) | (1<<9));

 FUNC_4(VAR_30, VAR_27,
    VAR_1, VAR_2,
    VAR_32);


 if (VAR_27->req_line_speed == VAR_22) {
  if (VAR_27->speed_cap_mask &
      VAR_12) {


   VAR_31 |= (1<<9 | 1<<12);
   VAR_33 |= (1<<8);
   FUNC_0(VAR_10, "Advertising 100M-FD\n");
  }

  if (VAR_27->speed_cap_mask &
      VAR_13) {


   VAR_31 |= (1<<9 | 1<<12);
   VAR_33 |= (1<<7);
   FUNC_0(VAR_10, "Advertising 100M-HD\n");
  }

  if ((VAR_27->speed_cap_mask &
       VAR_15) &&
      (VAR_27->supported & VAR_25)) {
   VAR_33 |= (1<<6);
   VAR_31 |= (1<<9 | 1<<12);
   FUNC_0(VAR_10, "Advertising 10M-FD\n");
  }

  if ((VAR_27->speed_cap_mask &
       VAR_16) &&
      (VAR_27->supported & VAR_26)) {
   VAR_33 |= (1<<5);
   VAR_31 |= (1<<9 | 1<<12);
   FUNC_0(VAR_10, "Advertising 10M-HD\n");
  }
 }


 if ((VAR_27->req_line_speed == VAR_19) &&
     (VAR_27->supported &
      (VAR_24 |
       VAR_23))) {
  VAR_31 |= (1<<13);

  FUNC_4(VAR_30, VAR_27,
     VAR_1, VAR_4,
     (1<<15 | 1<<9 | 7<<0));

  VAR_33 |= (1<<8) | (1<<7);
  FUNC_0(VAR_10, "Setting 100M force\n");
 }
 if ((VAR_27->req_line_speed == VAR_18) &&
     (VAR_27->supported &
      (VAR_26 |
       VAR_25))) {

  FUNC_4(VAR_30, VAR_27,
     VAR_1, VAR_4,
     (1<<15 | 1<<9 | 7<<0));
  FUNC_0(VAR_10, "Setting 10M force\n");
 }

 FUNC_4(VAR_30, VAR_27,
    VAR_1, VAR_5,
    VAR_33);

 if (VAR_27->req_duplex == VAR_0)
  VAR_31 |= (1<<8);




 if (!FUNC_6(VAR_27) ||
     ((VAR_31 & (1<<12)) == 0))
  FUNC_4(VAR_30, VAR_27,
    VAR_1,
    VAR_6, VAR_31);

 if (((VAR_27->req_line_speed == VAR_22) &&
     (VAR_27->speed_cap_mask &
      VAR_14)) ||
  (VAR_27->req_line_speed == VAR_21)) {
   FUNC_0(VAR_10, "Advertising 10G\n");


   FUNC_3(
    VAR_30, VAR_27,
    VAR_1,
    VAR_3,
    0x1000);
   FUNC_4(VAR_30, VAR_27,
      VAR_1, VAR_7,
      0x3200);
 } else
  FUNC_4(VAR_30, VAR_27,
     VAR_1,
     VAR_3,
     1);

 return 0;
}
