
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct cmac_statistics {int dummy; } ;
struct cmac {struct cmac_statistics const stats; } ;


 int FUNC_0 (struct cmac*,int ,int ) ;
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
 int FUNC_1 (struct cmac*,int ,scalar_t__*) ;
 int FUNC_2 (struct cmac*,int ,int ) ;

__attribute__((used)) static const struct cmac_statistics *FUNC_3(struct cmac *VAR_51,
             int VAR_52)
{
 u64 VAR_53;
 u32 VAR_54, VAR_55, VAR_56, VAR_57;


 FUNC_2(VAR_51, VAR_28,
  VAR_27);


 FUNC_1(VAR_51, VAR_29, &VAR_54);
 FUNC_1(VAR_51, VAR_30, &VAR_55);
 FUNC_1(VAR_51, VAR_31, &VAR_56);
 FUNC_1(VAR_51, VAR_32, &VAR_57);
 VAR_53 = ((u64)VAR_54 & 0xffff) | (((u64)VAR_55 & 0xffff) << 16) |
  (((u64)VAR_56 & 0xffff) << 32) | (((u64)VAR_57 & 0xffff) << 48);


 FUNC_0(VAR_51, VAR_19, VAR_18);
 FUNC_0(VAR_51, VAR_26, VAR_25);
 FUNC_0(VAR_51, VAR_17, VAR_16);
 FUNC_0(VAR_51, VAR_1, VAR_0);
 FUNC_0(VAR_51, VAR_20, VAR_21);
 FUNC_0(VAR_51, VAR_4, VAR_2);
 FUNC_0(VAR_51, VAR_6,
    VAR_9);
 FUNC_0(VAR_51, VAR_23, VAR_23);
 FUNC_0(VAR_51, VAR_8, VAR_8);
 FUNC_0(VAR_51, VAR_7 , VAR_5);
 FUNC_0(VAR_51, VAR_11, VAR_10);
 FUNC_0(VAR_51, VAR_3, VAR_22);
 FUNC_0(VAR_51, VAR_24, VAR_22);
 FUNC_0(VAR_51, VAR_13, VAR_12);
 FUNC_0(VAR_51, VAR_15, VAR_14);


 FUNC_0(VAR_51, VAR_45, VAR_44);
 FUNC_0(VAR_51, VAR_36,
    VAR_37);
 FUNC_0(VAR_51, VAR_48, VAR_35);
 FUNC_0(VAR_51, VAR_50, VAR_49);
 FUNC_0(VAR_51, VAR_43, VAR_42);
 FUNC_0(VAR_51, VAR_34, VAR_33);
 FUNC_0(VAR_51, VAR_46, VAR_47);
 FUNC_0(VAR_51, VAR_39, VAR_38);
 FUNC_0(VAR_51, VAR_41, VAR_40);

 return &VAR_51->stats;
}
