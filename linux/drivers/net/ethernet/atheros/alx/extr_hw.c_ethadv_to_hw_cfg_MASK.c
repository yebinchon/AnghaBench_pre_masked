
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;


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

__attribute__((used)) static u32 FUNC_0(struct alx_hw *VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;

 if (VAR_13 & VAR_3) {
  VAR_14 |= VAR_10;
  if (VAR_13 & 128)
   VAR_14 |= VAR_7;
  if (VAR_13 & 129)
   VAR_14 |= VAR_7 | VAR_11;
  if (VAR_13 & 130)
   VAR_14 |= VAR_8;
  if (VAR_13 & 131)
   VAR_14 |= VAR_8 | VAR_11;
  if (VAR_13 & VAR_1)
   VAR_14 |= VAR_9;
  if (VAR_13 & VAR_0)
   VAR_14 |= VAR_8 | VAR_11;
  if (VAR_13 & VAR_4)
   VAR_14 |= VAR_6;
  if (VAR_13 & VAR_2)
   VAR_14 |= VAR_5;
 } else {
  switch (VAR_13) {
  case 128:
   VAR_14 |= VAR_7;
   break;
  case 130:
   VAR_14 |= VAR_8;
   break;
  case 129:
   VAR_14 |= VAR_7 | VAR_11;
   break;
  case 131:
   VAR_14 |= VAR_8 | VAR_11;
   break;
  }
 }

 return VAR_14;
}
