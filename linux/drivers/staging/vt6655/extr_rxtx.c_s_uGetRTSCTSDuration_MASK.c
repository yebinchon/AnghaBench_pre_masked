
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_private {int uSIFS; int byTopOFDMBasicRate; int byPreambleType; int byTopCCKBasicRate; } ;
typedef int __le16 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int FUNC_0 (int ,unsigned char,int,int ) ;



 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;







 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct vnt_private*,unsigned char,unsigned int,unsigned short,int) ;
 unsigned short** VAR_6 ;
 unsigned short** VAR_7 ;

__attribute__((used)) static
__le16
FUNC_3(
 struct vnt_private *VAR_8,
 unsigned char VAR_9,
 unsigned int VAR_10,
 unsigned char VAR_11,
 unsigned short VAR_12,
 bool VAR_13,
 unsigned char VAR_14
)
{
 unsigned int VAR_15 = 0, VAR_16 = 0;

 switch (VAR_9) {
 case 128:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopCCKBasicRate);
  VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_12, VAR_13);
  break;

 case 131:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopCCKBasicRate);
  VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_12, VAR_13);
  break;

 case 134:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopOFDMBasicRate);
  VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_12, VAR_13);
  break;

 case 137:
  VAR_16 = VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_12, VAR_13);
  break;

 case 130:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopCCKBasicRate);
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_2][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_2][VAR_12-VAR_4], VAR_13);

  break;

 case 133:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopOFDMBasicRate);
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_2][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_2][VAR_12-VAR_4], VAR_13);

  break;

 case 129:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopCCKBasicRate);
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2*VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_3][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_3][VAR_12-VAR_4], VAR_13);

  break;

 case 132:
  VAR_15 = FUNC_0(VAR_8->byPreambleType, VAR_11, 14, VAR_8->byTopOFDMBasicRate);
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_3][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_15 + 2 * VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_3][VAR_12-VAR_4], VAR_13);

  break;

 case 136:
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_2][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_2][VAR_12-VAR_4], VAR_13);

  break;

 case 135:
  if ((VAR_14 == VAR_0) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6[VAR_3][VAR_12-VAR_4], VAR_13);
  else if ((VAR_14 == VAR_1) && (VAR_12 >= VAR_4) && (VAR_12 <= VAR_5))
   VAR_16 = VAR_8->uSIFS + FUNC_2(VAR_8, VAR_11, VAR_10, VAR_7[VAR_3][VAR_12-VAR_4], VAR_13);

  break;

 default:
  break;
 }

 return FUNC_1((u16)VAR_16);
}
