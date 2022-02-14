
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {scalar_t__ version; } ;


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
 int FUNC_0 (int*,int ,int ) ;
 struct nicvf* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nicvf*,int,int) ;
 int FUNC_3 (struct nicvf*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_50,
      struct ethtool_regs *VAR_51, void *VAR_52)
{
 struct nicvf *VAR_53 = FUNC_1(VAR_50);
 u64 *VAR_54 = (u64 *)VAR_52;
 u64 VAR_55;
 int VAR_56, VAR_57, VAR_58, VAR_59;
 int VAR_60 = 0;

 VAR_51->version = 0;
 FUNC_0(VAR_54, 0, VAR_41);

 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_42);

 for (VAR_56 = 0; VAR_56 < VAR_4; VAR_56++)
  VAR_54[VAR_60++] = FUNC_3(VAR_53,
     VAR_40 | (VAR_56 << 3));

 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_38);
 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_39);
 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_36);
 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_37);
 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_43);

 for (VAR_57 = 0; VAR_57 < VAR_47; VAR_57++)
  VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_44 | (VAR_57 << 3));


 for (VAR_58 = 0; VAR_58 < VAR_49; VAR_58++)
  VAR_54[VAR_60++] = FUNC_3(VAR_53,
     VAR_46 | (VAR_58 << 3));

 for (VAR_60 = 0; VAR_60 < VAR_48; VAR_60++)
  VAR_54[VAR_60++] = FUNC_3(VAR_53,
     VAR_45 | (VAR_58 << 3));

 VAR_54[VAR_60++] = FUNC_3(VAR_53, VAR_26);


 for (VAR_59 = 0; VAR_59 < VAR_0; VAR_59++) {
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_6, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_7, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_14, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_5, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_10, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_13, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_9, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_11, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_12, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_8, VAR_59);
 }


 for (VAR_59 = 0; VAR_59 < VAR_2; VAR_59++) {
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_24, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53,
        VAR_25, VAR_59);
  VAR_55 = VAR_25 | (1 << 3);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_55, VAR_59);
 }

 for (VAR_59 = 0; VAR_59 < VAR_3; VAR_59++) {
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_28, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_35, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_27, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_31, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_34, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_30, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_32, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_29, VAR_59);



  VAR_54[VAR_60++] = 0;
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_33, VAR_59);
  VAR_55 = VAR_33 | (1 << 3);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_55, VAR_59);
 }

 for (VAR_59 = 0; VAR_59 < VAR_1; VAR_59++) {
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_16, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_23, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_15, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_18, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_22, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_17, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53,
           VAR_20, VAR_59);
  VAR_54[VAR_60++] = FUNC_2(VAR_53,
           VAR_21, VAR_59);
  VAR_55 = VAR_19;
  VAR_54[VAR_60++] = FUNC_2(VAR_53, VAR_55, VAR_59);
 }
}
