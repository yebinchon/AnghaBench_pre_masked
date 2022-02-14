
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_private {scalar_t__ dwDiagRefCount; unsigned char* abyCCKPwrTbl; unsigned char* abyOFDMPwrTbl; unsigned char byMaxPwrLevel; unsigned char byCurPwr; int byRFType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnt_private*,unsigned char,unsigned int) ;

bool FUNC_1(struct vnt_private *VAR_3, unsigned int VAR_4, u16 VAR_5)
{
 bool VAR_6 = 1;
 unsigned char VAR_7 = 0;
 unsigned char VAR_8 = 0;

 if (VAR_3->dwDiagRefCount != 0)
  return 1;

 if ((VAR_5 < 1) || (VAR_5 > VAR_0))
  return 0;

 switch (VAR_4) {
 case 136:
 case 134:
 case 130:
 case 139:
  if (VAR_5 > VAR_1)
   return 0;

  VAR_7 = VAR_3->abyCCKPwrTbl[VAR_5];
  break;
 case 129:
 case 128:
 case 138:
 case 137:
  VAR_7 = VAR_3->abyOFDMPwrTbl[VAR_5];
  if (VAR_3->byRFType == VAR_2)
   VAR_8 = VAR_7 + 14;
  else
   VAR_8 = VAR_7 + 10;

  if (VAR_8 >= VAR_3->byMaxPwrLevel)
   VAR_8 = VAR_3->byMaxPwrLevel - 1;

  VAR_7 = VAR_8;
  break;
 case 135:
 case 133:
 case 132:
 case 131:
  VAR_7 = VAR_3->abyOFDMPwrTbl[VAR_5];
  break;
 }

 if (VAR_3->byCurPwr == VAR_7)
  return 1;

 VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_4);
 if (VAR_6)
  VAR_3->byCurPwr = VAR_7;

 return VAR_6;
}
