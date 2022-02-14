
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;




 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2, int VAR_3, int VAR_4,
     u8 VAR_5, const u8 *VAR_6, int VAR_7)
{
 if (!(VAR_1 & 1))
  return;

 FUNC_2("%s %d) %c: ", VAR_2, VAR_3, "RC"[VAR_4]);

 switch (VAR_5 & ~VAR_0) {
 case 131:
  FUNC_0("SABM");
  break;
 case 130:
  FUNC_0("UA");
  break;
 case 136:
  FUNC_0("DISC");
  break;
 case 135:
  FUNC_0("DM");
  break;
 case 129:
  FUNC_0("UI");
  break;
 case 128:
  FUNC_0("UIH");
  break;
 default:
  if (!(VAR_5 & 0x01)) {
   FUNC_0("I N(S)%d N(R)%d",
    (VAR_5 & 0x0E) >> 1, (VAR_5 & 0xE0) >> 5);
  } else switch (VAR_5 & 0x0F) {
   case 132:
    FUNC_0("RR(%d)", (VAR_5 & 0xE0) >> 5);
    break;
   case 133:
    FUNC_0("RNR(%d)", (VAR_5 & 0xE0) >> 5);
    break;
   case 134:
    FUNC_0("REJ(%d)", (VAR_5 & 0xE0) >> 5);
    break;
   default:
    FUNC_0("[%02X]", VAR_5);
  }
 }

 if (VAR_5 & VAR_0)
  FUNC_0("(P)");
 else
  FUNC_0("(F)");

 if (VAR_7) {
  int VAR_8 = 0;
  while (VAR_7--) {
   if (VAR_8 % 8 == 0) {
    FUNC_0("\n");
    FUNC_1("    ");
   }
   FUNC_0("%02X ", *VAR_6++);
   VAR_8++;
  }
 }
 FUNC_0("\n");
}
