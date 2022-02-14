
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int swreg ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static u16 FUNC_7(swreg VAR_7, bool VAR_8, bool VAR_9, bool *VAR_10)
{
 u16 VAR_11 = FUNC_6(VAR_7);
 bool VAR_12;

 switch (FUNC_5(VAR_7)) {
 case 135:
 case 134:
 case 133:
  return VAR_11;
 case 128:
  return VAR_6 | VAR_11;
 case 131:
  VAR_12 = FUNC_3(VAR_7);

  if (FUNC_4(VAR_7) != VAR_0) {
   FUNC_2("bad LM mode for restricted operands %d\n",
          FUNC_4(VAR_7));
   return 0;
  }

  if (VAR_11 & ~VAR_4) {
   FUNC_2("LM offset too large\n");
   return 0;
  }

  return VAR_2 | FUNC_0(VAR_3, VAR_12) | VAR_11;
 case 132:
  if (VAR_11 & ~(0x7f | VAR_9 << 7)) {
   FUNC_2("immediate too large\n");
   return 0;
  }
  *VAR_10 = VAR_11 & 0x80;
  return FUNC_1(VAR_11 & 0x7f);
 case 129:
  return VAR_8 ? VAR_5 : VAR_1;
 case 130:
  FUNC_2("NNRs used with restricted encoding\n");
  return 0;
 }

 FUNC_2("unrecognized reg encoding\n");
 return 0;
}
