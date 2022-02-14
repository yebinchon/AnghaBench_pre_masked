
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; int fault_detected; int duplex; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ) ;

__attribute__((used)) static u8 FUNC_4(struct bnx2x_phy *VAR_14,
          struct link_params *VAR_15,
          struct link_vars *VAR_16)
{
 u8 VAR_17 = 0;
 u16 VAR_18, VAR_19, VAR_20, VAR_21;
 struct bnx2x *VAR_22 = VAR_15->bp;
 FUNC_0(VAR_11, "XGXS 8706/8726\n");

 FUNC_1(VAR_22, VAR_14,
   VAR_5, VAR_6, &VAR_19);

 FUNC_3(VAR_22, VAR_14, VAR_9,
        VAR_8);


 FUNC_1(VAR_22, VAR_14,
   VAR_5, VAR_7, &VAR_18);
 FUNC_1(VAR_22, VAR_14,
   VAR_5, VAR_7, &VAR_19);
 FUNC_0(VAR_11, "8706/8726 LASI status 0x%x--> 0x%x\n", VAR_18, VAR_19);

 FUNC_1(VAR_22, VAR_14,
   VAR_5, VAR_10, &VAR_20);
 FUNC_1(VAR_22, VAR_14,
   VAR_3, VAR_4, &VAR_21);
 FUNC_1(VAR_22, VAR_14,
   VAR_1, VAR_2, &VAR_19);
 FUNC_1(VAR_22, VAR_14,
   VAR_1, VAR_2, &VAR_19);

 FUNC_0(VAR_11, "8706/8726 rx_sd 0x%x pcs_status 0x%x 1Gbps"
   " link_status 0x%x\n", VAR_20, VAR_21, VAR_19);



 VAR_17 = ((VAR_20 & VAR_21 & 0x1) || (VAR_19 & (1<<1)));
 if (VAR_17) {
  if (VAR_19 & (1<<1))
   VAR_16->line_speed = VAR_12;
  else
   VAR_16->line_speed = VAR_13;
  FUNC_2(VAR_14, VAR_15, VAR_16);
  VAR_16->duplex = VAR_0;
 }


 if (VAR_16->line_speed == VAR_13) {
  FUNC_1(VAR_22, VAR_14, VAR_5,
       VAR_9, &VAR_18);
  FUNC_1(VAR_22, VAR_14, VAR_5,
       VAR_9, &VAR_18);
  if (VAR_18 & (1<<0))
   VAR_16->fault_detected = 1;
 }

 return VAR_17;
}
