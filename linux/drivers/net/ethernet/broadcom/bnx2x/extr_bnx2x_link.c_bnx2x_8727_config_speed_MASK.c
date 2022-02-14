
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; scalar_t__ media_type; int speed_cap_mask; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct link_params*) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_13,
        struct link_params *VAR_14)
{
 struct bnx2x *VAR_15 = VAR_14->bp;
 u16 VAR_16, VAR_17;

 if ((VAR_13->req_line_speed == VAR_11) ||
     (VAR_13->media_type == VAR_0)) {
  FUNC_0(VAR_8, "Setting 1G force\n");
  FUNC_3(VAR_15, VAR_13,
     VAR_4, VAR_7, 0x40);
  FUNC_3(VAR_15, VAR_13,
     VAR_4, VAR_5, 0xD);
  FUNC_2(VAR_15, VAR_13,
    VAR_4, VAR_5, &VAR_16);
  FUNC_0(VAR_8, "1.7 = 0x%x\n", VAR_16);



  if (FUNC_1(VAR_14)) {
   FUNC_2(VAR_15, VAR_13,
     VAR_4,
     VAR_6, &VAR_17);
   VAR_17 |= (3<<10);
   FUNC_3(VAR_15, VAR_13,
      VAR_4,
      VAR_6, VAR_17);
  }
 } else if ((VAR_13->req_line_speed == VAR_12) &&
     ((VAR_13->speed_cap_mask &
       VAR_10)) &&
     ((VAR_13->speed_cap_mask &
        VAR_9) !=
     VAR_9)) {

  FUNC_0(VAR_8, "Setting 1G clause37\n");
  FUNC_3(VAR_15, VAR_13,
     VAR_1, VAR_2, 0);
  FUNC_3(VAR_15, VAR_13,
     VAR_1, VAR_3, 0x1300);
 } else {



  FUNC_3(VAR_15, VAR_13,
     VAR_1, VAR_2,
     0x0020);
  FUNC_3(VAR_15, VAR_13,
     VAR_1, VAR_3, 0x0100);
  FUNC_3(VAR_15, VAR_13,
     VAR_4, VAR_7, 0x2040);
  FUNC_3(VAR_15, VAR_13,
     VAR_4, VAR_5,
     0x0008);
 }
}
