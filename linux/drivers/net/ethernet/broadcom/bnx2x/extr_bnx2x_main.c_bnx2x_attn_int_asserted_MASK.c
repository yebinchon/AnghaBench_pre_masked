
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bnx2x {int attn_state; TYPE_1__ common; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct bnx2x*,scalar_t__) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,scalar_t__) ;
 int FUNC_10 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_31, u32 VAR_32)
{
 int VAR_33 = FUNC_1(VAR_31);
 u32 VAR_34 = VAR_33 ? VAR_27 :
         VAR_26;
 u32 VAR_35 = VAR_33 ? VAR_30 :
           VAR_29;
 u32 VAR_36;
 u32 VAR_37 = 0;
 u32 VAR_38;

 if (VAR_31->attn_state & VAR_32)
  FUNC_0("IGU ERROR\n");

 FUNC_6(VAR_31, VAR_15 + VAR_33);
 VAR_36 = FUNC_3(VAR_31, VAR_34);

 FUNC_2(VAR_28, "aeu_mask %x  newly asserted %x\n",
    VAR_36, VAR_32);
 VAR_36 &= ~(VAR_32 & 0x3ff);
 FUNC_2(VAR_28, "new mask %x\n", VAR_36);

 FUNC_4(VAR_31, VAR_34, VAR_36);
 FUNC_9(VAR_31, VAR_15 + VAR_33);

 FUNC_2(VAR_28, "attn_state %x\n", VAR_31->attn_state);
 VAR_31->attn_state |= VAR_32;
 FUNC_2(VAR_28, "new state %x\n", VAR_31->attn_state);

 if (VAR_32 & VAR_6) {
  if (VAR_32 & VAR_7) {

   FUNC_7(VAR_31);


   VAR_37 = FUNC_3(VAR_31, VAR_35);




   if (VAR_37) {
    FUNC_4(VAR_31, VAR_35, 0);

    FUNC_8(VAR_31);
   }


  }
  if (VAR_32 & VAR_8)
   FUNC_2(VAR_28, "ATTN_SW_TIMER_4_FUNC!\n");

  if (VAR_32 & VAR_11)
   FUNC_2(VAR_28, "GPIO_2_FUNC!\n");

  if (VAR_32 & VAR_12)
   FUNC_2(VAR_28, "GPIO_3_FUNC!\n");

  if (VAR_32 & VAR_13)
   FUNC_2(VAR_28, "GPIO_4_FUNC!\n");

  if (VAR_33 == 0) {
   if (VAR_32 & VAR_0) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_1!\n");
    FUNC_4(VAR_31, VAR_20, 0x0);
   }
   if (VAR_32 & VAR_1) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_2!\n");
    FUNC_4(VAR_31, VAR_21, 0x0);
   }
   if (VAR_32 & VAR_2) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_3!\n");
    FUNC_4(VAR_31, VAR_22, 0x0);
   }
  } else {
   if (VAR_32 & VAR_3) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_4!\n");
    FUNC_4(VAR_31, VAR_23, 0x0);
   }
   if (VAR_32 & VAR_4) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_5!\n");
    FUNC_4(VAR_31, VAR_24, 0x0);
   }
   if (VAR_32 & VAR_5) {
    FUNC_2(VAR_28, "ATTN_GENERAL_ATTN_6!\n");
    FUNC_4(VAR_31, VAR_25, 0x0);
   }
  }

 }

 if (VAR_31->common.int_block == VAR_18)
  VAR_38 = (VAR_14 + VAR_33*32 +
       VAR_10);
 else
  VAR_38 = (VAR_9 + VAR_16*8);

 FUNC_2(VAR_28, "about to mask 0x%08x at %s addr 0x%x\n", VAR_32,
    (VAR_31->common.int_block == VAR_18) ? "HC" : "IGU", VAR_38);
 FUNC_4(VAR_31, VAR_38, VAR_32);


 if (VAR_32 & VAR_7) {



  if (VAR_31->common.int_block != VAR_18) {
   u32 VAR_39 = 0, VAR_40;
   do {
    VAR_40 = FUNC_3(VAR_31,
         VAR_17);
   } while (((VAR_40 & VAR_7) == 0) &&
     (++VAR_39 < VAR_19));
   if (!VAR_40)
    FUNC_2(VAR_28,
       "Failed to verify IGU ack on time\n");
   FUNC_5();
  }
  FUNC_4(VAR_31, VAR_35, VAR_37);
  FUNC_10(VAR_31);
 }
}
