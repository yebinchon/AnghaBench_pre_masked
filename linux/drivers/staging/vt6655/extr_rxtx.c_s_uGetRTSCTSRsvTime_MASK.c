
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_private {unsigned short byTopCCKBasicRate; unsigned short byTopOFDMBasicRate; int uSIFS; int byPreambleType; } ;
typedef int __le16 ;


 unsigned int FUNC_0 (int ,unsigned char,int,unsigned short) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
__le16
FUNC_2(
 struct vnt_private *VAR_0,
 unsigned char VAR_1,
 unsigned char VAR_2,
 unsigned int VAR_3,
 unsigned short VAR_4
)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_0->byPreambleType, VAR_2, VAR_3, VAR_4);
 if (VAR_1 == 0) {
  VAR_6 = FUNC_0(VAR_0->byPreambleType, VAR_2, 20, VAR_0->byTopCCKBasicRate);
  VAR_7 = VAR_8 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopCCKBasicRate);
 } else if (VAR_1 == 1) {
  VAR_6 = FUNC_0(VAR_0->byPreambleType, VAR_2, 20, VAR_0->byTopCCKBasicRate);
  VAR_7 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopCCKBasicRate);
  VAR_8 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopOFDMBasicRate);
 } else if (VAR_1 == 2) {
  VAR_6 = FUNC_0(VAR_0->byPreambleType, VAR_2, 20, VAR_0->byTopOFDMBasicRate);
  VAR_7 = VAR_8 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopOFDMBasicRate);
 } else if (VAR_1 == 3) {
  VAR_7 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopCCKBasicRate);
  VAR_8 = FUNC_0(VAR_0->byPreambleType, VAR_2, 14, VAR_0->byTopOFDMBasicRate);
  VAR_5 = VAR_7 + VAR_8 + VAR_9 + 2 * VAR_0->uSIFS;
  return FUNC_1((u16)VAR_5);
 }


 VAR_5 = VAR_6 + VAR_7 + VAR_8 + VAR_9 + 3 * VAR_0->uSIFS;
 return FUNC_1((u16)VAR_5);
}
