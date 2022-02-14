
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {int flow_ctrl; int mac_type; } ;
struct link_params {int port; int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_2 (struct link_params*,struct link_vars*,int) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct link_params *VAR_17,
        struct link_vars *VAR_18,
        u8 VAR_19, u8 VAR_20)
{
 int VAR_21 = 0;
 u8 VAR_22 = VAR_17->port;
 struct bnx2x *VAR_23 = VAR_17->bp;
 u32 VAR_24;

 if (VAR_20) {
  FUNC_1(VAR_23, VAR_2 + VAR_4,
         (VAR_5 << VAR_22));
  FUNC_4(1000, 2000);
 }

 FUNC_1(VAR_23, VAR_2 + VAR_6,
        (VAR_5 << VAR_22));


 FUNC_1(VAR_23, VAR_10 + VAR_22*4, 0x1);


 if (FUNC_0(VAR_23))
  VAR_21 = FUNC_3(VAR_17, VAR_18, VAR_19);
 else
  VAR_21 = FUNC_2(VAR_17, VAR_18, VAR_19);
 FUNC_1(VAR_23, VAR_16 + VAR_22*4, 0x1);
 FUNC_1(VAR_23, VAR_15 + VAR_22*4, 0x0);
 FUNC_1(VAR_23, VAR_12 + VAR_22*4, 0x0);
 VAR_24 = 0;
 if ((VAR_17->feature_config_flags &
       VAR_1) ||
     (VAR_18->flow_ctrl & VAR_0))
  VAR_24 = 1;
 FUNC_1(VAR_23, VAR_9 + VAR_22*4, VAR_24);
 FUNC_1(VAR_23, VAR_11 + VAR_22*4, 0x0);
 FUNC_1(VAR_23, VAR_13 + VAR_22*4, 0x0);
 FUNC_1(VAR_23, VAR_14 + VAR_22*4, 0x0);
 FUNC_1(VAR_23, VAR_7 + VAR_22*4, 0x1);
 FUNC_1(VAR_23, VAR_8 + VAR_22*4, 0x1);

 VAR_18->mac_type = VAR_3;
 return VAR_21;
}
