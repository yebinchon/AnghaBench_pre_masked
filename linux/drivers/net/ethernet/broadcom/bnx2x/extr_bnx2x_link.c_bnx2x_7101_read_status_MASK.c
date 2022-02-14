
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int link_status; int duplex; int line_speed; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,struct link_vars*) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static u8 FUNC_4(struct bnx2x_phy *VAR_9,
     struct link_params *VAR_10,
     struct link_vars *VAR_11)
{
 struct bnx2x *VAR_12 = VAR_10->bp;
 u8 VAR_13;
 u16 VAR_14, VAR_15;
 FUNC_1(VAR_12, VAR_9,
   VAR_4, VAR_5, &VAR_15);
 FUNC_1(VAR_12, VAR_9,
   VAR_4, VAR_5, &VAR_14);
 FUNC_0(VAR_7, "10G-base-T LASI status 0x%x->0x%x\n",
     VAR_15, VAR_14);
 FUNC_1(VAR_12, VAR_9,
   VAR_4, VAR_6, &VAR_15);
 FUNC_1(VAR_12, VAR_9,
   VAR_4, VAR_6, &VAR_14);
 FUNC_0(VAR_7, "10G-base-T PMA status 0x%x->0x%x\n",
     VAR_15, VAR_14);
 VAR_13 = ((VAR_14 & 4) == 4);

 if (VAR_13) {
  FUNC_1(VAR_12, VAR_9,
    VAR_2, VAR_3,
    &VAR_15);
  VAR_11->line_speed = VAR_8;
  VAR_11->duplex = VAR_0;
  FUNC_0(VAR_7, "SFX7101 AN status 0x%x->Master=%x\n",
      VAR_15, (VAR_15 & (1<<14)));
  FUNC_2(VAR_12, VAR_9, VAR_11);
  FUNC_3(VAR_9, VAR_10, VAR_11);


  if (VAR_15 & (1<<11))
   VAR_11->link_status |=
    VAR_1;
 }
 return VAR_13;
}
