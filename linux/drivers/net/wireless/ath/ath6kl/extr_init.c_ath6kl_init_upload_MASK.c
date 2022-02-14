
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct ath6kl {scalar_t__ target_type; TYPE_1__ hw; } ;


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
 int FUNC_0 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (struct ath6kl*,int,int*) ;
 int FUNC_2 (struct ath6kl*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ath6kl*) ;
 int FUNC_6 (struct ath6kl*) ;
 int FUNC_7 (struct ath6kl*) ;
 int FUNC_8 (struct ath6kl*) ;
 int FUNC_9 (struct ath6kl*) ;

__attribute__((used)) static int FUNC_10(struct ath6kl *VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27 = 0;

 if (VAR_22->target_type != VAR_20 &&
     VAR_22->target_type != VAR_21)
  return -VAR_6;


 VAR_26 = VAR_16 + VAR_13;
 VAR_27 = FUNC_1(VAR_22, VAR_26, &VAR_23);
 if (VAR_27)
  return VAR_27;

 VAR_24 = VAR_23;

 VAR_23 |= VAR_3;
 VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
 if (VAR_27)
  return VAR_27;

 VAR_26 = VAR_17 + VAR_18;
 VAR_27 = FUNC_1(VAR_22, VAR_26, &VAR_23);
 if (VAR_27)
  return VAR_27;

 VAR_25 = VAR_23;

 VAR_23 |= FUNC_0(VAR_19, 1);
 VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
 if (VAR_27)
  return VAR_27;

 FUNC_3(VAR_1, "old options: %d, old sleep: %d\n",
     VAR_24, VAR_25);



 if (VAR_22->target_type != VAR_21) {
  VAR_27 = FUNC_2(VAR_22, VAR_0,
           0xF9104001);

  if (VAR_27)
   return VAR_27;


  VAR_23 = FUNC_0(VAR_5, 1);

  VAR_26 = VAR_17 + VAR_4;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;
 }

 VAR_23 = 0;
 VAR_26 = VAR_17 + VAR_14;
 VAR_23 = FUNC_0(VAR_15, 1);
 VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
 if (VAR_27)
  return VAR_27;


 if (VAR_22->hw.flags & VAR_2) {
  FUNC_4("temporary war to avoid sdio crc error\n");

  VAR_23 = 0x28;
  VAR_26 = VAR_7 + VAR_12;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;

  VAR_23 = 0x20;

  VAR_26 = VAR_7 + VAR_8;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;

  VAR_26 = VAR_7 + VAR_9;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;

  VAR_26 = VAR_7 + VAR_10;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;

  VAR_26 = VAR_7 + VAR_11;
  VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
  if (VAR_27)
   return VAR_27;
 }


 VAR_27 = FUNC_5(VAR_22);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_7(VAR_22);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_6(VAR_22);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_8(VAR_22);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_9(VAR_22);
 if (VAR_27)
  return VAR_27;


 VAR_26 = VAR_17 + VAR_18;
 VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_25);
 if (VAR_27)
  return VAR_27;

 VAR_26 = VAR_16 + VAR_13;
 VAR_23 = VAR_24 | 0x20;
 VAR_27 = FUNC_2(VAR_22, VAR_26, VAR_23);
 if (VAR_27)
  return VAR_27;

 return VAR_27;
}
