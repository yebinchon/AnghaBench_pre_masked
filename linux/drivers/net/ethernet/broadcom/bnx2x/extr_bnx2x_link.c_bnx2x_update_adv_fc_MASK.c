
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (int ,char*,int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_12,
    struct link_params *VAR_13,
    struct link_vars *VAR_14,
    u32 VAR_15)
{
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 struct bnx2x *VAR_19 = VAR_13->bp;
 if ((VAR_15 &
      (VAR_7 |
       VAR_8)) ==
     (VAR_7 |
      VAR_8)) {

  FUNC_0(VAR_19, VAR_12,
      VAR_9,
      VAR_0,
      &VAR_16);
  FUNC_0(VAR_19, VAR_12,
      VAR_9,
      VAR_2,
      &VAR_17);
  VAR_18 = (VAR_16 &
    VAR_1) >> 8;
  VAR_18 |= (VAR_17 &
     VAR_3) >> 10;
  FUNC_1(VAR_11, "pause_result CL73 0x%x\n", VAR_18);
 } else {
  FUNC_0(VAR_19, VAR_12,
      VAR_10,
      VAR_4,
      &VAR_16);
  FUNC_0(VAR_19, VAR_12,
   VAR_10,
   VAR_6,
   &VAR_17);
  VAR_18 = (VAR_16 &
    VAR_5)>>5;
  VAR_18 |= (VAR_17 &
     VAR_5)>>7;
  FUNC_1(VAR_11, "pause_result CL37 0x%x\n", VAR_18);
 }
 FUNC_2(VAR_12, VAR_13, VAR_14, VAR_18);

}
