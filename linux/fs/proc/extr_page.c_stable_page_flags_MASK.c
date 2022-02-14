
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int flags; } ;


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
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 struct page* FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int,int,int ) ;
 scalar_t__ FUNC_17 (struct page*) ;
 scalar_t__ FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;

u64 FUNC_21(struct page *VAR_56)
{
 u64 VAR_57;
 u64 VAR_58;





 if (!VAR_56)
  return 1 << VAR_17;

 VAR_57 = VAR_56->flags;
 VAR_58 = 0;







 if (!FUNC_7(VAR_56) && FUNC_19(VAR_56))
  VAR_58 |= 1 << VAR_16;
 if (FUNC_0(VAR_56))
  VAR_58 |= 1 << VAR_1;
 if (FUNC_4(VAR_56))
  VAR_58 |= 1 << VAR_11;





 if (FUNC_2(VAR_56))
  VAR_58 |= 1 << VAR_4;
 if (FUNC_10(VAR_56))
  VAR_58 |= 1 << VAR_5;
 if (FUNC_3(VAR_56))
  VAR_58 |= 1 << VAR_8;






 else if (FUNC_11(VAR_56)) {
  struct page *VAR_59 = FUNC_12(VAR_56);

  if (FUNC_5(VAR_59) || FUNC_0(VAR_59))
   VAR_58 |= 1 << VAR_29;
  else if (FUNC_14(VAR_59)) {
   VAR_58 |= 1 << VAR_34;
   VAR_58 |= 1 << VAR_29;
  }
 } else if (FUNC_15(FUNC_20(VAR_56)))
  VAR_58 |= 1 << VAR_34;







 if (FUNC_1(VAR_56))
  VAR_58 |= 1 << VAR_3;
 else if (FUNC_17(VAR_56) == 0 && FUNC_13(VAR_56))
  VAR_58 |= 1 << VAR_3;

 if (FUNC_6(VAR_56))
  VAR_58 |= 1 << VAR_18;
 if (FUNC_9(VAR_56))
  VAR_58 |= 1 << VAR_20;

 if (FUNC_18(VAR_56))
  VAR_58 |= 1 << VAR_10;

 VAR_58 |= FUNC_16(VAR_57, VAR_12, VAR_40);

 VAR_58 |= FUNC_16(VAR_57, VAR_26, VAR_50);
 if (FUNC_10(VAR_56) && FUNC_7(FUNC_12(VAR_56)))
  VAR_58 |= 1 << VAR_26;

 VAR_58 |= FUNC_16(VAR_57, VAR_7, VAR_38);
 VAR_58 |= FUNC_16(VAR_57, VAR_6, VAR_37);
 VAR_58 |= FUNC_16(VAR_57, VAR_32, VAR_54);
 VAR_58 |= FUNC_16(VAR_57, VAR_33, VAR_55);

 VAR_58 |= FUNC_16(VAR_57, VAR_13, VAR_41);
 VAR_58 |= FUNC_16(VAR_57, VAR_24, VAR_48);
 VAR_58 |= FUNC_16(VAR_57, VAR_0, VAR_35);
 VAR_58 |= FUNC_16(VAR_57, VAR_23, VAR_47);

 if (FUNC_8(VAR_56))
  VAR_58 |= 1 << VAR_28;
 VAR_58 |= FUNC_16(VAR_57, VAR_27, VAR_51);

 VAR_58 |= FUNC_16(VAR_57, VAR_31, VAR_53);
 VAR_58 |= FUNC_16(VAR_57, VAR_15, VAR_43);
 VAR_58 |= FUNC_16(VAR_57, VAR_25, VAR_49);
 VAR_58 |= FUNC_16(VAR_57, VAR_14, VAR_42);
 VAR_58 |= FUNC_16(VAR_57, VAR_21, VAR_45);
 VAR_58 |= FUNC_16(VAR_57, VAR_22, VAR_46);
 VAR_58 |= FUNC_16(VAR_57, VAR_19, VAR_44);
 VAR_58 |= FUNC_16(VAR_57, VAR_2, VAR_36);

 return VAR_58;
}
