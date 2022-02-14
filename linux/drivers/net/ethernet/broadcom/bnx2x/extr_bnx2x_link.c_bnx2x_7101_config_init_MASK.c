
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int ver_addr; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
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
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct link_params*,struct bnx2x_phy*,struct link_vars*) ;
 int FUNC_5 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_6 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static int FUNC_8(struct bnx2x_phy *VAR_10,
      struct link_params *VAR_11,
      struct link_vars *VAR_12)
{
 u16 VAR_13, VAR_14, VAR_15;
 struct bnx2x *VAR_16 = VAR_11->bp;
 FUNC_0(VAR_9, "Setting the SFX7101 LASI indication\n");


 FUNC_6(VAR_16, VAR_7,
         VAR_8, VAR_11->port);

 FUNC_3(VAR_16, VAR_11->port);
 FUNC_7(VAR_16, VAR_10, VAR_11);

 FUNC_2(VAR_16, VAR_10,
    VAR_2, VAR_3, 0x1);
 FUNC_0(VAR_9, "Setting the SFX7101 LED to blink on traffic\n");
 FUNC_2(VAR_16, VAR_10,
    VAR_2, VAR_6, (1<<3));

 FUNC_4(VAR_11, VAR_10, VAR_12);

 FUNC_1(VAR_16, VAR_10,
   VAR_0, VAR_1, &VAR_15);
 VAR_15 |= 0x200;
 FUNC_2(VAR_16, VAR_10,
    VAR_0, VAR_1, VAR_15);


 FUNC_1(VAR_16, VAR_10,
   VAR_2, VAR_4, &VAR_13);

 FUNC_1(VAR_16, VAR_10,
   VAR_2, VAR_5, &VAR_14);
 FUNC_5(VAR_16, VAR_11->port,
      (u32)(VAR_13<<16 | VAR_14), VAR_10->ver_addr);
 return 0;
}
