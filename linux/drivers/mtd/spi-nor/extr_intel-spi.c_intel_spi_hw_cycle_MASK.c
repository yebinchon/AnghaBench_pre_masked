
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intel_spi {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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



 int FUNC_0 (struct intel_spi*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct intel_spi *VAR_15, u8 VAR_16, int VAR_17)
{
 u32 VAR_18, VAR_19;
 int VAR_20;

 VAR_18 = FUNC_1(VAR_15->base + VAR_3);
 VAR_18 &= ~(VAR_6 | VAR_10);

 switch (VAR_16) {
 case 130:
  VAR_18 |= VAR_7;
  break;
 case 128:
  VAR_18 |= VAR_9;
  break;
 case 129:
  VAR_18 |= VAR_8;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_17 > VAR_14)
  return -VAR_1;

 VAR_18 |= (VAR_17 - 1) << VAR_11;
 VAR_18 |= VAR_5 | VAR_12;
 VAR_18 |= VAR_13;
 FUNC_2(VAR_18, VAR_15->base + VAR_3);

 VAR_20 = FUNC_0(VAR_15);
 if (VAR_20)
  return VAR_20;

 VAR_19 = FUNC_1(VAR_15->base + VAR_3);
 if (VAR_19 & VAR_5)
  return -VAR_2;
 else if (VAR_19 & VAR_4)
  return -VAR_0;

 return 0;
}
