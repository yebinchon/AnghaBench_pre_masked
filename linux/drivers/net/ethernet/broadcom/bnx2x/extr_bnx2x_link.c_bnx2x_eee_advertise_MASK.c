
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int eee_status; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x_phy *VAR_8,
      struct link_params *VAR_9,
      struct link_vars *VAR_10, u8 VAR_11)
{
 struct bnx2x *VAR_12 = VAR_9->bp;
 u16 VAR_13 = 0;


 FUNC_1(VAR_12, VAR_2 + (VAR_9->port << 2), 0xfc20);

 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_3, "Advertise 10GBase-T EEE\n");
  VAR_13 |= 0x8;
 }
 if (VAR_11 & VAR_5) {
  FUNC_0(VAR_3, "Advertise 1GBase-T EEE\n");
  VAR_13 |= 0x4;
 }

 FUNC_2(VAR_12, VAR_8, VAR_0, VAR_1, VAR_13);

 VAR_10->eee_status &= ~VAR_6;
 VAR_10->eee_status |= (VAR_11 << VAR_7);

 return 0;
}
