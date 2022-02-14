
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int swreg ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static u16 FUNC_7(swreg VAR_9, bool VAR_10)
{
 bool VAR_11, VAR_12 = 0;
 u16 VAR_13 = FUNC_6(VAR_9);

 switch (FUNC_5(VAR_9)) {
 case 135:
 case 134:
 case 133:
  return VAR_13;
 case 130:
  return VAR_6 | VAR_13;
 case 128:
  return VAR_8 | VAR_13;
 case 131:
  VAR_11 = FUNC_3(VAR_9);

  switch (FUNC_4(VAR_9)) {
  case 136:
   if (VAR_13 & ~VAR_3) {
    FUNC_2("LM offset too large\n");
    return 0;
   }
   return VAR_1 | FUNC_0(VAR_2, VAR_11) |
    VAR_13;
  case 138:
   VAR_12 = 1;

  case 137:
   if (VAR_13) {
    FUNC_2("LM offset in inc/dev mode\n");
    return 0;
   }
   return VAR_1 | VAR_4 |
    FUNC_0(VAR_2, VAR_11) |
    FUNC_0(VAR_5, VAR_12);
  default:
   FUNC_2("bad LM mode for unrestricted operands %d\n",
          FUNC_4(VAR_9));
   return 0;
  }
 case 132:
  if (VAR_13 & ~0xff) {
   FUNC_2("immediate too large\n");
   return 0;
  }
  return FUNC_1(VAR_13);
 case 129:
  return VAR_10 ? VAR_7 : VAR_0;
 }

 FUNC_2("unrecognized reg encoding %08x\n", VAR_9);
 return 0;
}
