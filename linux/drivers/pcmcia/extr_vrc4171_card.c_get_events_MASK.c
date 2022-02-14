
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


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
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(int VAR_19)
{
 unsigned int VAR_20 = 0;
 uint8_t VAR_21, VAR_22;

 VAR_21 = FUNC_0(VAR_19, VAR_13);
 VAR_22 = FUNC_0(VAR_19, VAR_0);

 if (FUNC_0(VAR_19, VAR_11) & VAR_12) {
  if ((VAR_22 & VAR_5) && (VAR_21 & VAR_10))
   VAR_20 |= VAR_18;
 } else {
  if (VAR_22 & (VAR_1 | VAR_2)) {
   if (!(VAR_21 & VAR_6))
    VAR_20 |= VAR_14;
   else if ((VAR_21 & (VAR_6 | VAR_7)) == VAR_6)
    VAR_20 |= VAR_15;
  }
 }
 if ((VAR_22 & VAR_4) && (VAR_21 & VAR_9))
  VAR_20 |= VAR_17;
 if ((VAR_22 & VAR_3) && ((VAR_21 & VAR_8) == VAR_8))
  VAR_20 |= VAR_16;

 return VAR_20;
}
