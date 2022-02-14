
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct intel_spi {int atomic_preopcode; scalar_t__ sregs; } ;


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
 int FUNC_0 (struct intel_spi*,int,int) ;
 int FUNC_1 (struct intel_spi*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct intel_spi *VAR_15, u8 VAR_16, int VAR_17,
         int VAR_18)
{
 u32 VAR_19 = 0, VAR_20;
 u8 VAR_21;
 int VAR_22;

 VAR_22 = FUNC_0(VAR_15, VAR_16, VAR_18);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_17 > VAR_3)
  return -VAR_1;





 VAR_21 = VAR_15->atomic_preopcode;
 VAR_15->atomic_preopcode = 0;


 if (VAR_17 > 0)
  VAR_19 = ((VAR_17 - 1) << VAR_9) | VAR_10;
 VAR_19 |= VAR_22 << VAR_8;
 VAR_19 |= VAR_11 | VAR_12;
 VAR_19 |= VAR_13;
 if (VAR_21) {
  u16 VAR_23;

  switch (VAR_18) {
  case 129:
  case 128:

   VAR_23 = FUNC_3(VAR_15->sregs + VAR_4);
   if ((VAR_23 & 0xff) == VAR_21)
    ;
   else if ((VAR_23 >> 8) == VAR_21)
    VAR_19 |= VAR_14;
   else
    return -VAR_1;


   VAR_19 |= VAR_6;
   break;

  default:
   return -VAR_1;
  }

 }
 FUNC_4(VAR_19, VAR_15->sregs + VAR_5);

 VAR_22 = FUNC_1(VAR_15);
 if (VAR_22)
  return VAR_22;

 VAR_20 = FUNC_2(VAR_15->sregs + VAR_5);
 if (VAR_20 & VAR_11)
  return -VAR_2;
 else if (VAR_20 & VAR_7)
  return -VAR_0;

 return 0;
}
