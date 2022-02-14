
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {int port; int* mac_addr; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_4 (struct bnx2x*,struct link_params*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct link_params *VAR_10,
       struct link_vars *VAR_11)
{

 struct bnx2x *VAR_12 = VAR_10->bp;
 u8 VAR_13 = VAR_10->port;
 u32 VAR_14 = VAR_13 ? VAR_4 : VAR_3;
 u32 VAR_15;
 u16 VAR_16;

 FUNC_3(VAR_12, VAR_5 + VAR_6,
        (VAR_7 << VAR_13));
 FUNC_5(5);
 FUNC_3(VAR_12, VAR_5 + VAR_8,
        (VAR_7 << VAR_13));



 VAR_15 = FUNC_2(VAR_12, VAR_14 + VAR_2);
 FUNC_1(VAR_12, VAR_2, (VAR_15 | VAR_0));

 VAR_16 = 200;
 do {
  VAR_15 = FUNC_2(VAR_12, VAR_14 + VAR_2);
  FUNC_0(VAR_9, "EMAC reset reg is %u\n", VAR_15);
  if (!VAR_16) {
   FUNC_0(VAR_9, "EMAC timeout!\n");
   return;
  }
  VAR_16--;
 } while (VAR_15 & VAR_0);

 FUNC_4(VAR_12, VAR_10);

 VAR_15 = ((VAR_10->mac_addr[0] << 8) |
  VAR_10->mac_addr[1]);
 FUNC_1(VAR_12, VAR_1, VAR_15);

 VAR_15 = ((VAR_10->mac_addr[2] << 24) |
        (VAR_10->mac_addr[3] << 16) |
        (VAR_10->mac_addr[4] << 8) |
  VAR_10->mac_addr[5]);
 FUNC_1(VAR_12, VAR_1 + 4, VAR_15);
}
