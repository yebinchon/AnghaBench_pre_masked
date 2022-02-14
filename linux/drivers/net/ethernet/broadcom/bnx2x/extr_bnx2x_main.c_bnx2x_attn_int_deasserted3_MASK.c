
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int periodic_flags; } ;
struct TYPE_5__ {scalar_t__ pmf; } ;
struct bnx2x {scalar_t__ dcbx_enabled; TYPE_2__ link_vars; TYPE_1__ port; int * mf_config; } ;
struct TYPE_8__ {int drv_status; } ;
struct TYPE_7__ {int config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 size_t FUNC_3 (struct bnx2x*) ;
 size_t FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*,int ) ;
 int FUNC_14 (struct bnx2x*) ;
 int FUNC_15 (struct bnx2x*,int) ;
 int FUNC_16 (struct bnx2x*) ;
 int FUNC_17 (struct bnx2x*) ;
 int FUNC_18 (struct bnx2x*) ;
 int FUNC_19 (struct bnx2x*) ;
 int FUNC_20 (struct bnx2x*) ;
 int FUNC_21 (struct bnx2x*,int) ;
 int FUNC_22 () ;
 int FUNC_23 (struct bnx2x*) ;
 int FUNC_24 (struct bnx2x*) ;
 int FUNC_25 (struct bnx2x*) ;
 int FUNC_26 (struct bnx2x*,int ) ;
 int FUNC_27 (struct bnx2x*,int ,int ) ;
 int FUNC_28 (struct bnx2x*) ;
 TYPE_4__* VAR_30 ;
 TYPE_3__* VAR_31 ;

__attribute__((used)) static void FUNC_29(struct bnx2x *VAR_32, u32 VAR_33)
{
 u32 VAR_34;

 if (VAR_33 & VAR_18) {

  if (VAR_33 & VAR_6) {
   int VAR_35 = FUNC_2(VAR_32);

   FUNC_9(VAR_32, VAR_23 + VAR_35*4, 0);
   FUNC_24(VAR_32);
   VAR_32->mf_config[FUNC_4(VAR_32)] = FUNC_7(VAR_32,
     VAR_31[FUNC_1(VAR_32)].config);
   VAR_34 = FUNC_10(VAR_32,
           VAR_30[FUNC_3(VAR_32)].drv_status);

   if (VAR_34 & (VAR_10 |
       VAR_13))
    FUNC_21(VAR_32,
     (VAR_34 & (VAR_10 |
      VAR_13)));

   if (VAR_34 & VAR_16)
    FUNC_28(VAR_32);

   if (VAR_34 & VAR_11)
    FUNC_16(VAR_32);

   if (VAR_34 & VAR_17)
    FUNC_26(VAR_32,
       VAR_3);

   if ((VAR_32->port.pmf == 0) && (VAR_34 & VAR_15))
    FUNC_23(VAR_32);

   if (VAR_32->port.pmf &&
       (VAR_34 & VAR_9) &&
    VAR_32->dcbx_enabled > 0)

    FUNC_13(VAR_32,
     VAR_0);
   if (VAR_34 & VAR_8)
    FUNC_15(VAR_32,
     VAR_34 & VAR_8);
   if (VAR_34 & VAR_12)
    FUNC_17(VAR_32);

   if (VAR_34 & VAR_14)
    FUNC_27(VAR_32,
     VAR_7, 0);

   if (VAR_32->link_vars.periodic_flags &
       VAR_29) {

    FUNC_12(VAR_32);
    VAR_32->link_vars.periodic_flags &=
     ~VAR_29;
    FUNC_25(VAR_32);
    if (FUNC_6(VAR_32))
     FUNC_19(VAR_32);
    FUNC_18(VAR_32);
   }



   FUNC_11(VAR_32);
  } else if (VAR_33 & VAR_5) {

   FUNC_0("MC assert!\n");
   FUNC_20(VAR_32);
   FUNC_9(VAR_32, VAR_21, 0);
   FUNC_9(VAR_32, VAR_26, 0);
   FUNC_9(VAR_32, VAR_25, 0);
   FUNC_9(VAR_32, VAR_24, 0);
   FUNC_22();

  } else if (VAR_33 & VAR_4) {

   FUNC_0("MCP assert!\n");
   FUNC_9(VAR_32, VAR_22, 0);
   FUNC_14(VAR_32);

  } else
   FUNC_0("Unknown HW assert! (attn 0x%x)\n", VAR_33);
 }

 if (VAR_33 & VAR_19) {
  FUNC_0("LATCHED attention 0x%08x (masked)\n", VAR_33);
  if (VAR_33 & VAR_2) {
   VAR_34 = FUNC_5(VAR_32) ? 0 :
     FUNC_8(VAR_32, VAR_28);
   FUNC_0("GRC time-out 0x%08x\n", VAR_34);
  }
  if (VAR_33 & VAR_1) {
   VAR_34 = FUNC_5(VAR_32) ? 0 :
     FUNC_8(VAR_32, VAR_27);
   FUNC_0("GRC reserved 0x%08x\n", VAR_34);
  }
  FUNC_9(VAR_32, VAR_20, 0x7ff);
 }
}
