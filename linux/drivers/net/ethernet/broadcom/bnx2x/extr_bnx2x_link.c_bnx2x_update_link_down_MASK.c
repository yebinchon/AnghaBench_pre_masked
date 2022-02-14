
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_vars {int eee_status; int link_status; scalar_t__ line_speed; int mac_type; int phy_flags; } ;
struct link_params {int port; int chip_id; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct bnx2x*,int ,int,int ) ;
 int FUNC_6 (struct link_params*,struct link_vars*,int ,int ) ;
 int FUNC_7 (struct link_params*,int ) ;
 int FUNC_8 (struct link_params*,int ) ;
 int FUNC_9 (struct link_params*,int ) ;
 int FUNC_10 (struct link_params*,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct link_params *VAR_11,
      struct link_vars *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_11->bp;
 u8 VAR_14 = VAR_11->port;

 FUNC_3(VAR_5, "Port %x: Link is down\n", VAR_14);
 FUNC_6(VAR_11, VAR_12, VAR_0, 0);
 VAR_12->phy_flags &= ~VAR_8;

 VAR_12->mac_type = VAR_2;


 VAR_12->link_status &= ~VAR_1;
 VAR_12->line_speed = 0;
 FUNC_9(VAR_11, VAR_12->link_status);


 FUNC_4(VAR_13, VAR_6 + VAR_14*4, 1);


 if (!FUNC_2(VAR_13))
  FUNC_4(VAR_13, VAR_7 + VAR_14*4, 0);

 FUNC_11(10000, 20000);

 if (FUNC_0(VAR_13) ||
     FUNC_1(VAR_13))
  FUNC_5(VAR_13, VAR_11->chip_id, VAR_11->port, 0);

 if (FUNC_2(VAR_13)) {

  FUNC_4(VAR_13, VAR_3 + (VAR_11->port << 2),
         0);
  FUNC_4(VAR_13, VAR_4 + (VAR_11->port << 2),
         0);
  VAR_12->eee_status &= ~(VAR_10 |
          VAR_9);

  FUNC_10(VAR_11, VAR_12->eee_status);
  FUNC_8(VAR_11, 0);
  FUNC_7(VAR_11, 0);
 }

 return 0;
}
