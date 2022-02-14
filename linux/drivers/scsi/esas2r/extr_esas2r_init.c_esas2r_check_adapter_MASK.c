
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int phys_addr; } ;
struct TYPE_3__ {int phys_addr; } ;
struct esas2r_adapter {int max_vdareq_size; int uncached_phys; int* outbound_copy; int last_write; int last_read; int list_size; int flags2; int flags; int * uncached; TYPE_2__ outbound_list_md; TYPE_1__ inbound_list_md; int build_sgl; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_2 (struct esas2r_adapter*,int ) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct esas2r_adapter*,int ) ;
 int FUNC_6 (struct esas2r_adapter*,char*) ;
 int FUNC_7 (struct esas2r_adapter*,int ,int) ;
 int VAR_59 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;

bool FUNC_15(struct esas2r_adapter *VAR_60)
{
 u32 VAR_61;
 u32 VAR_62;
 u64 VAR_63;
 u32 VAR_64;





 if (FUNC_13(VAR_1, &VAR_60->flags))
  goto skip_chip_reset;





 FUNC_7(VAR_60, VAR_29, VAR_12);
 FUNC_2(VAR_60, VAR_29);





 VAR_61 = FUNC_8(VAR_59);

 while (1) {
  FUNC_3(VAR_60);
  VAR_62 = FUNC_5(VAR_60, VAR_15);
  if (VAR_62 == 0xFFFFFFFF) {




   if ((FUNC_8(VAR_59) - VAR_61) > 2000)
    return FUNC_6(VAR_60,
        "unable to access registers");
  } else if (VAR_62 & VAR_5) {
   u32 VAR_65 = (VAR_62 & VAR_8);





   FUNC_7(VAR_60, VAR_15,
          VAR_62);

   if (VAR_65 == VAR_6) {
    FUNC_12(VAR_3, &VAR_60->flags);

    VAR_60->max_vdareq_size = 128;
    VAR_60->build_sgl = VAR_58;
   } else if (VAR_65 == VAR_7) {
    FUNC_0(VAR_3, &VAR_60->flags);

    VAR_60->max_vdareq_size = 1024;
    VAR_60->build_sgl = VAR_57;
   } else {
    return FUNC_6(VAR_60,
        "unknown firmware version");
   }
   break;
  }

  FUNC_11(FUNC_10(100));

  if ((FUNC_8(VAR_59) - VAR_61) > 180000) {
   FUNC_4("FW ready TMO");
   FUNC_1();

   return FUNC_6(VAR_60,
       "firmware start has timed out");
  }
 }


 FUNC_7(VAR_60, VAR_13, VAR_9);
 VAR_61 = FUNC_8(VAR_59);

 while (1) {
  VAR_62 = FUNC_5(VAR_60, VAR_15);
  if (VAR_62 & VAR_9) {
   FUNC_7(VAR_60, VAR_15,
          VAR_62);
   break;
  }

  FUNC_11(FUNC_10(50));

  if ((FUNC_8(VAR_59) - VAR_61) > 3000) {
   FUNC_4("timeout waiting for interface down");
   break;
  }
 }
skip_chip_reset:




 VAR_64 = FUNC_5(VAR_60, VAR_32);
 VAR_64 &= ~VAR_18;
 FUNC_7(VAR_60, VAR_32, VAR_64);
 VAR_64 = FUNC_5(VAR_60, VAR_50);
 VAR_64 &= ~VAR_36;
 FUNC_7(VAR_60, VAR_50, VAR_64);


 VAR_63 = VAR_60->inbound_list_md.phys_addr;
 FUNC_7(VAR_60, VAR_31,
        FUNC_9(VAR_63));
 FUNC_7(VAR_60, VAR_30,
        FUNC_14(VAR_63));
 VAR_63 = VAR_60->outbound_list_md.phys_addr;
 FUNC_7(VAR_60, VAR_49,
        FUNC_9(VAR_63));
 FUNC_7(VAR_60, VAR_48,
        FUNC_14(VAR_63));
 VAR_63 = VAR_60->uncached_phys +
   ((u8 *)VAR_60->outbound_copy - VAR_60->uncached);
 FUNC_7(VAR_60, VAR_53,
        FUNC_9(VAR_63));
 FUNC_7(VAR_60, VAR_52,
        FUNC_14(VAR_63));


 *VAR_60->outbound_copy =
  VAR_60->last_write =
   VAR_60->last_read = VAR_60->list_size - 1;
 FUNC_12(VAR_2, &VAR_60->flags);
 FUNC_7(VAR_60, VAR_35, VAR_28 |
        VAR_60->last_write);
 FUNC_7(VAR_60, VAR_51, VAR_41 |
        VAR_60->last_write);
 FUNC_7(VAR_60, VAR_34, VAR_27 |
        VAR_60->last_write);
 FUNC_7(VAR_60, VAR_56,
        VAR_47 | VAR_60->last_write);


 VAR_64 = FUNC_5(VAR_60, VAR_33);
 VAR_64 &= ~(VAR_25 | VAR_23);
 FUNC_7(VAR_60, VAR_33,
        (VAR_64 | VAR_26 | VAR_24));
 VAR_64 = FUNC_5(VAR_60, VAR_54);
 VAR_64 &= ~(VAR_42 | VAR_44);
 FUNC_7(VAR_60, VAR_54,
        (VAR_64 | VAR_43 |
         VAR_45));


 VAR_64 = FUNC_5(VAR_60, VAR_32);
 VAR_64 &= ~(VAR_20 | VAR_21);
 VAR_64 |= VAR_19 | VAR_17
       | (VAR_60->list_size << VAR_22);
 FUNC_7(VAR_60, VAR_32, VAR_64);
 VAR_64 = FUNC_5(VAR_60, VAR_50);
 VAR_64 &= ~(VAR_38 | VAR_39);
 VAR_64 |= VAR_37 | (VAR_60->list_size << VAR_40);
 FUNC_7(VAR_60, VAR_50, VAR_64);






 FUNC_7(VAR_60, VAR_13, VAR_10);
 VAR_61 = FUNC_8(VAR_59);

 while (1) {
  VAR_62 = FUNC_5(VAR_60, VAR_15);
  if (VAR_62 & VAR_10) {
   FUNC_7(VAR_60, VAR_15,
          VAR_62);
   break;
  }

  FUNC_11(FUNC_10(100));

  if ((FUNC_8(VAR_59) - VAR_61) > 3000) {
   FUNC_4(
    "timeout waiting for communication list init");
   FUNC_1();
   return FUNC_6(VAR_60,
       "timeout waiting for communication list init");
  }
 }





 VAR_62 = FUNC_5(VAR_60, VAR_14);
 if (VAR_62 & VAR_11)
  FUNC_12(VAR_0, &VAR_60->flags2);
 else
  FUNC_0(VAR_0, &VAR_60->flags2);





 FUNC_7(VAR_60, VAR_55, VAR_46);
 FUNC_7(VAR_60, VAR_16, VAR_4);
 return 1;
}
