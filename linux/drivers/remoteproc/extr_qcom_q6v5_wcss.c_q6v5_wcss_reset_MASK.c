
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct q6v5_wcss {scalar_t__ reg_base; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct q6v5_wcss *VAR_18)
{
 int VAR_19;
 u32 VAR_20;
 int VAR_21;


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_14);
 VAR_20 |= VAR_8 | VAR_3 | VAR_16;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_14);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_17);
 VAR_20 |= 0x1;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_17);


 VAR_19 = FUNC_3(VAR_18->reg_base + VAR_17,
     VAR_20, !(VAR_20 & FUNC_0(31)), 1,
     VAR_0);
 if (VAR_19) {
  FUNC_1(VAR_18->dev,
   "xo cbcr enabling timed out (rc:%d)\n", VAR_19);
  return VAR_19;
 }

 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_13);
 VAR_20 |= VAR_2;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);
 FUNC_4(1);


 VAR_20 |= VAR_11;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_13);
 VAR_20 &= ~VAR_5;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);


 VAR_20 |= VAR_10 | VAR_15;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_12);
 for (VAR_21 = VAR_1; VAR_21 >= 0; VAR_21--) {
  VAR_20 |= FUNC_0(VAR_21);
  FUNC_5(VAR_20, VAR_18->reg_base + VAR_12);





  VAR_20 |= FUNC_2(VAR_18->reg_base + VAR_12);
  FUNC_4(1);
 }

 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_13);
 VAR_20 &= ~VAR_6;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);


 VAR_20 &= ~VAR_4;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_13);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_14);
 VAR_20 &= ~VAR_8;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_14);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_9);
 VAR_20 |= VAR_7;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_9);


 VAR_20 = FUNC_2(VAR_18->reg_base + VAR_14);
 VAR_20 &= ~VAR_16;
 FUNC_5(VAR_20, VAR_18->reg_base + VAR_14);

 return 0;
}
