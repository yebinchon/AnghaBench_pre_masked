
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int uSIFS; int byTopOFDMBasicRate; int byPreambleType; int byTopCCKBasicRate; } ;


 unsigned char VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned char,int,int ) ;




 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned int FUNC_1 (struct vnt_private*,unsigned char,unsigned int,unsigned short,int) ;
 unsigned short** VAR_5 ;
 unsigned short** VAR_6 ;

__attribute__((used)) static
unsigned int
FUNC_2(
 struct vnt_private *VAR_7,
 unsigned char VAR_8,
 unsigned int VAR_9,
 unsigned char VAR_10,
 unsigned short VAR_11,
 bool VAR_12,
 unsigned int VAR_13,
 unsigned int VAR_14,
 unsigned int VAR_15,
 unsigned char VAR_16
)
{
 bool VAR_17 = 0;
 unsigned int VAR_18 = 0, VAR_19 = 0;

 if (VAR_13 == (VAR_15 - 1))
  VAR_17 = 1;

 switch (VAR_8) {
 case 128:
  if (((VAR_15 == 1)) || VAR_17) {
   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopCCKBasicRate);
    return VAR_7->uSIFS + VAR_18;
   } else {
    return 0;
   }
  } else {
   if (VAR_13 == (VAR_15 - 2))
    VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_11, VAR_12);
   else
    VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_11, VAR_12);

   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopCCKBasicRate);
    return VAR_7->uSIFS + VAR_18 + VAR_19;
   } else {
    return VAR_7->uSIFS + VAR_19;
   }
  }
  break;

 case 131:
  if (((VAR_15 == 1)) || VAR_17) {
   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18;
   } else {
    return 0;
   }
  } else {
   if (VAR_13 == (VAR_15 - 2))
    VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_11, VAR_12);
   else
    VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_11, VAR_12);

   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18 + VAR_19;
   } else {
    return VAR_7->uSIFS + VAR_19;
   }
  }
  break;

 case 130:
  if (((VAR_15 == 1)) || VAR_17) {
   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18;
   } else {
    return 0;
   }
  } else {
   if (VAR_16 == VAR_0) {
    if (VAR_11 < VAR_3)
     VAR_11 = VAR_3;
    else if (VAR_11 > VAR_4)
     VAR_11 = VAR_4;

    if (VAR_13 == (VAR_15 - 2))
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_5[VAR_1][VAR_11-VAR_3], VAR_12);
    else
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_5[VAR_1][VAR_11-VAR_3], VAR_12);

   } else {
    if (VAR_11 < VAR_3)
     VAR_11 = VAR_3;
    else if (VAR_11 > VAR_4)
     VAR_11 = VAR_4;

    if (VAR_13 == (VAR_15 - 2))
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_6[VAR_1][VAR_11-VAR_3], VAR_12);
    else
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_6[VAR_1][VAR_11-VAR_3], VAR_12);
   }

   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18 + VAR_19;
   } else {
    return VAR_7->uSIFS + VAR_19;
   }
  }
  break;

 case 129:
  if (((VAR_15 == 1)) || VAR_17) {
   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18;
   } else {
    return 0;
   }
  } else {
   if (VAR_16 == VAR_0) {
    if (VAR_11 < VAR_3)
     VAR_11 = VAR_3;
    else if (VAR_11 > VAR_4)
     VAR_11 = VAR_4;

    if (VAR_13 == (VAR_15 - 2))
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_5[VAR_2][VAR_11-VAR_3], VAR_12);
    else
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_5[VAR_2][VAR_11-VAR_3], VAR_12);

   } else {
    if (VAR_11 < VAR_3)
     VAR_11 = VAR_3;
    else if (VAR_11 > VAR_4)
     VAR_11 = VAR_4;

    if (VAR_13 == (VAR_15 - 2))
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_14, VAR_6[VAR_2][VAR_11-VAR_3], VAR_12);
    else
     VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_6[VAR_2][VAR_11-VAR_3], VAR_12);
   }
   if (VAR_12) {
    VAR_18 = FUNC_0(VAR_7->byPreambleType, VAR_10, 14, VAR_7->byTopOFDMBasicRate);
    return VAR_7->uSIFS + VAR_18 + VAR_19;
   } else {
    return VAR_7->uSIFS + VAR_19;
   }
  }
  break;

 default:
  break;
 }

 return 0;
}
