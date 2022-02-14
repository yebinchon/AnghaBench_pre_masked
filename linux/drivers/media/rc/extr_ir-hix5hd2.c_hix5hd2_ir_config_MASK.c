
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_ir_priv {scalar_t__ base; int rate; int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct hix5hd2_ir_priv *VAR_18)
{
 int VAR_19 = 10000;
 u32 VAR_20, VAR_21;

 FUNC_4(0x01, VAR_18->base + VAR_15);
 while (FUNC_2(VAR_18->base + VAR_1)) {
  if (VAR_19--) {
   FUNC_3(1);
  } else {
   FUNC_1(VAR_18->dev, "IR_BUSY timeout\n");
   return -VAR_0;
  }
 }


 VAR_21 = FUNC_0(VAR_18->rate, 1000000);
 VAR_20 = VAR_11 & VAR_12 << VAR_13;
 VAR_20 |= VAR_10 & VAR_2 << VAR_3;
 VAR_20 |= (VAR_8 - 1) & VAR_6
        << VAR_7;
 VAR_20 |= VAR_9;
 VAR_20 |= (VAR_21 - 1) & VAR_4 << VAR_5;
 FUNC_4(VAR_20, VAR_18->base + VAR_14);

 FUNC_4(0x00, VAR_18->base + VAR_16);

 FUNC_4(0x01, VAR_18->base + VAR_17);
 return 0;
}
