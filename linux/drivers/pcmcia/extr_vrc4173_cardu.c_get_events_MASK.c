
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4173_socket_t ;
typedef int uint8_t ;
typedef int uint16_t ;


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
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static uint16_t FUNC_1(vrc4173_socket_t *VAR_20)
{
 uint16_t VAR_21 = 0;
 uint8_t VAR_22, VAR_23;

 VAR_23 = FUNC_0(VAR_20, VAR_10);
 VAR_22 = FUNC_0(VAR_20, VAR_8);
 if ((VAR_22 & VAR_7) &&
     ((VAR_23 & (VAR_5|VAR_6)) == (VAR_5|VAR_6)))
  VAR_21 |= VAR_16;

 if ((VAR_22 & VAR_12) && (VAR_23 & VAR_13))
  VAR_21 |= VAR_17;

 if (FUNC_0(VAR_20, VAR_11) & VAR_9) {
  if ((VAR_22 & VAR_0) && (VAR_23 & VAR_19))
   VAR_21 |= VAR_18;
 } else {
  if (VAR_22 & (VAR_1|VAR_0)) {
   if ((VAR_23 & VAR_3) != VAR_2) {
    if (VAR_23 == VAR_4) VAR_21 |= VAR_15;
    else VAR_21 |= VAR_14;
   }
  }
 }

 return VAR_21;
}
