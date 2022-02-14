
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct q6v5 {scalar_t__ version; int dev; scalar_t__ reg_base; scalar_t__ rmb_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct q6v5*) ;
 int FUNC_3 (struct q6v5*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct q6v5 *VAR_37)
{
 u32 VAR_38;
 int VAR_39;
 int VAR_40;

 if (VAR_37->version == VAR_5) {
  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_25);
  VAR_38 |= 0x1;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_25);

  VAR_39 = FUNC_5(VAR_37->reg_base + VAR_25,
      VAR_38, !(VAR_38 & FUNC_0(31)), 1,
      VAR_36);
  if (VAR_39) {
   FUNC_1(VAR_37->dev, "QDSP6SS Sleep clock timed out\n");
   return -VAR_2;
  }


  FUNC_7(1, VAR_37->reg_base + VAR_20);

  FUNC_7(1, VAR_37->reg_base + VAR_19);

  VAR_39 = FUNC_5(VAR_37->rmb_base + VAR_34,
    VAR_38, (VAR_38 & FUNC_0(0)) != 0, 10, VAR_0);
  if (VAR_39) {
   FUNC_1(VAR_37->dev, "Boot FSM failed to complete.\n");

   FUNC_2(VAR_37);
   return VAR_39;
  }

  goto pbl_wait;
 } else if (VAR_37->version == VAR_4) {

  FUNC_7(VAR_18,
         VAR_37->reg_base + VAR_26);


  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_24);
  VAR_38 |= VAR_9 | VAR_6 | VAR_17;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_24);


  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_27);
  VAR_38 |= 0x1;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_27);


  VAR_39 = FUNC_5(VAR_37->reg_base + VAR_27,
      VAR_38, !(VAR_38 & FUNC_0(31)), 1,
      VAR_3);
  if (VAR_39) {
   FUNC_1(VAR_37->dev,
    "xo cbcr enabling timed out (rc:%d)\n", VAR_39);
   return VAR_39;
  }

  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_28;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
  VAR_38 |= FUNC_4(VAR_37->reg_base + VAR_23);
  FUNC_6(1);


  VAR_38 |= VAR_31;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);


  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_23);
  VAR_38 &= ~VAR_29;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);


  VAR_38 |= VAR_14 | VAR_16;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);


  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_22);
  for (VAR_40 = 19; VAR_40 >= 0; VAR_40--) {
   VAR_38 |= FUNC_0(VAR_40);
   FUNC_7(VAR_38, VAR_37->reg_base +
      VAR_22);





   VAR_38 |= FUNC_4(VAR_37->reg_base + VAR_22);
   FUNC_6(1);
  }

  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_23);
  VAR_38 &= ~VAR_30;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
 } else {

  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_24);
  VAR_38 |= VAR_9 | VAR_6 | VAR_17;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_24);


  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_32 | VAR_33;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
  VAR_38 |= FUNC_4(VAR_37->reg_base + VAR_23);
  FUNC_6(1);




  VAR_38 = FUNC_4(VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_16 | VAR_15 |
   VAR_10 | VAR_14;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_13;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_12;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
  VAR_38 |= VAR_11;
  FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);
 }

 VAR_38 &= ~VAR_7;
 FUNC_7(VAR_38, VAR_37->reg_base + VAR_23);


 VAR_38 = FUNC_4(VAR_37->reg_base + VAR_24);
 VAR_38 &= ~VAR_9;
 FUNC_7(VAR_38, VAR_37->reg_base + VAR_24);


 VAR_38 = FUNC_4(VAR_37->reg_base + VAR_21);
 VAR_38 |= VAR_8;
 FUNC_7(VAR_38, VAR_37->reg_base + VAR_21);


 VAR_38 = FUNC_4(VAR_37->reg_base + VAR_24);
 VAR_38 &= ~VAR_17;
 FUNC_7(VAR_38, VAR_37->reg_base + VAR_24);

pbl_wait:

 VAR_39 = FUNC_3(VAR_37, 1000);
 if (VAR_39 == -VAR_2) {
  FUNC_1(VAR_37->dev, "PBL boot timed out\n");
 } else if (VAR_39 != VAR_35) {
  FUNC_1(VAR_37->dev, "PBL returned unexpected status %d\n", VAR_39);
  VAR_39 = -VAR_1;
 } else {
  VAR_39 = 0;
 }

 return VAR_39;
}
