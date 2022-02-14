
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 unsigned char FUNC_1 (unsigned int) ;
 unsigned char FUNC_2 (unsigned int) ;
 unsigned char FUNC_3 (unsigned int) ;
 unsigned char FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_0)
{
 unsigned char VAR_1 = FUNC_4(VAR_0);
 unsigned char VAR_2 = FUNC_2(VAR_0);
 unsigned char VAR_3 = FUNC_1(VAR_0);
 unsigned char VAR_4 = FUNC_3(VAR_0);

 FUNC_0("dev(%d) ep(%d) [%s] ", VAR_3, VAR_2, VAR_4 ? "IN" : "OUT");

 switch (VAR_1) {
 case 128:
  FUNC_0("ISO\n");
  break;
 case 129:
  FUNC_0("INT\n");
  break;
 case 130:
  FUNC_0("CTRL\n");
  break;
 case 131:
  FUNC_0("BULK\n");
  break;
 default:
  FUNC_0("ERR\n");
  break;
 }
}
