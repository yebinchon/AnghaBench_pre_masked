
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hip04_priv {int group; int port; int chan; scalar_t__ base; int map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hip04_priv *VAR_39)
{
 u32 VAR_40;

 VAR_40 = FUNC_1(VAR_39->base + VAR_35);
 VAR_40 |= VAR_36;
 FUNC_3(VAR_40, VAR_39->base + VAR_35);

 VAR_40 = FUNC_0(VAR_39->group);
 FUNC_2(VAR_39->map, VAR_39->port * 4 + VAR_22, VAR_40);

 VAR_40 = VAR_39->group << VAR_24;
 VAR_40 |= VAR_25;
 FUNC_3(VAR_40, VAR_39->base + VAR_23);

 VAR_40 = VAR_37 >> VAR_17;
 FUNC_2(VAR_39->map, VAR_39->port * 4 + VAR_26, VAR_40);

 VAR_40 = VAR_38 << VAR_29;
 VAR_40 |= VAR_30;
 VAR_40 |= VAR_39->chan << VAR_34;
 FUNC_2(VAR_39->map, VAR_39->port * 4 + VAR_31, VAR_40);

 VAR_40 = VAR_16 << VAR_27;
 FUNC_3(VAR_40, VAR_39->base + VAR_28);

 VAR_40 = VAR_32;
 FUNC_3(VAR_40, VAR_39->base + VAR_33);

 VAR_40 = VAR_20 | VAR_18;
 FUNC_3(VAR_40, VAR_39->base + VAR_19);

 VAR_40 = VAR_15;
 FUNC_3(VAR_40, VAR_39->base + VAR_21);

 VAR_40 = VAR_13;
 FUNC_3(VAR_40, VAR_39->base + VAR_2);

 VAR_40 = VAR_14;
 FUNC_3(VAR_40, VAR_39->base + VAR_7);

 VAR_40 = FUNC_1(VAR_39->base + VAR_8);
 VAR_40 |= VAR_10 | VAR_9 | VAR_12;
 FUNC_3(VAR_40, VAR_39->base + VAR_8);

 VAR_40 = VAR_5;
 FUNC_3(VAR_40, VAR_39->base + VAR_1);

 VAR_40 = FUNC_1(VAR_39->base + VAR_3);
 VAR_40 |= VAR_6 | VAR_4;
 FUNC_3(VAR_40, VAR_39->base + VAR_3);


 VAR_40 = VAR_0;
 FUNC_3(VAR_40, VAR_39->base + VAR_11);

}
