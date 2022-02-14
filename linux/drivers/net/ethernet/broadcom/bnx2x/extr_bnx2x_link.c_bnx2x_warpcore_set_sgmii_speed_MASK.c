
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int req_line_speed; scalar_t__ req_duplex; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_6(struct bnx2x_phy *VAR_8,
        struct link_params *VAR_9,
        u8 VAR_10,
        u8 VAR_11)
{
 struct bnx2x *VAR_12 = VAR_9->bp;
 u16 VAR_13, VAR_14, VAR_15;


 FUNC_2(VAR_12, VAR_8, VAR_1,
      VAR_3, ~(3<<13));

 FUNC_5(VAR_8, VAR_9);

 if (VAR_11 || VAR_8->req_line_speed == VAR_7) {

  FUNC_3(VAR_12, VAR_8, VAR_1,
      VAR_2,
      0x1000);
  FUNC_0(VAR_6, "set SGMII AUTONEG\n");
 } else {
  FUNC_1(VAR_12, VAR_8, VAR_1,
    VAR_2, &VAR_13);
  VAR_13 &= 0xcebf;
  switch (VAR_8->req_line_speed) {
  case 130:
   break;
  case 129:
   VAR_13 |= 0x2000;
   break;
  case 128:
   VAR_13 |= 0x0040;
   break;
  default:
   FUNC_0(VAR_6,
      "Speed not supported: 0x%x\n", VAR_8->req_line_speed);
   return;
  }

  if (VAR_8->req_duplex == VAR_0)
   VAR_13 |= 0x0100;

  FUNC_4(VAR_12, VAR_8, VAR_1,
    VAR_2, VAR_13);

  FUNC_0(VAR_6, "set SGMII force speed %d\n",
          VAR_8->req_line_speed);
  FUNC_1(VAR_12, VAR_8, VAR_1,
    VAR_2, &VAR_13);
  FUNC_0(VAR_6, "  (readback) %x\n", VAR_13);
 }


 FUNC_1(VAR_12, VAR_8, VAR_1,
   VAR_4, &VAR_14);
 if (VAR_10)
  VAR_14 = 1;
 else
  VAR_14 &= 0xff4a;

 FUNC_4(VAR_12, VAR_8, VAR_1,
   VAR_4,
   VAR_14);


 FUNC_1(VAR_12, VAR_8, VAR_1,
   VAR_5, &VAR_15);
 FUNC_4(VAR_12, VAR_8, VAR_1,
   VAR_5,
   (VAR_15 & ~(1<<2)));


 FUNC_4(VAR_12, VAR_8, VAR_1,
   VAR_5,
   (VAR_15 | (1<<2)));


 FUNC_4(VAR_12, VAR_8, VAR_1,
   VAR_4,
   (VAR_14 | 0x10));
}
