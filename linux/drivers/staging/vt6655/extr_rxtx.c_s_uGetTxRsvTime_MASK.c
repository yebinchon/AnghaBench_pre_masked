
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {unsigned int uSIFS; scalar_t__ byTopOFDMBasicRate; int byPreambleType; scalar_t__ byTopCCKBasicRate; } ;


 unsigned int FUNC_0 (int ,unsigned char,int,unsigned short) ;
 unsigned char VAR_0 ;

__attribute__((used)) static
unsigned int
FUNC_1(
 struct vnt_private *VAR_1,
 unsigned char VAR_2,
 unsigned int VAR_3,
 unsigned short VAR_4,
 bool VAR_5
)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_1->byPreambleType, VAR_2, VAR_3, VAR_4);
 if (VAR_2 == VAR_0)
  VAR_7 = FUNC_0(VAR_1->byPreambleType, VAR_2, 14, (unsigned short)VAR_1->byTopCCKBasicRate);
 else
  VAR_7 = FUNC_0(VAR_1->byPreambleType, VAR_2, 14, (unsigned short)VAR_1->byTopOFDMBasicRate);

 if (VAR_5)
  return VAR_6 + VAR_1->uSIFS + VAR_7;
 else
  return VAR_6;
}
