
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sd*,int,int*,int) ;
 int FUNC_1 (struct sd*,int,int*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_1)
{
 int VAR_2;
 u8 VAR_3, VAR_4;
 FUNC_0(VAR_1, VAR_0, &VAR_4, 1);

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_1(VAR_1, VAR_0, &VAR_3, 1);
  FUNC_2("Dumping the s5k83a register state for page 0x%x\n",
   VAR_3);
  for (VAR_2 = 0; VAR_2 <= 0xff; VAR_2++) {
   u8 VAR_5 = 0;
   FUNC_0(VAR_1, VAR_2, &VAR_5, 1);
   FUNC_2("register 0x%x contains 0x%x\n", VAR_2, VAR_5);
  }
 }
 FUNC_2("s5k83a register state dump complete\n");

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_1(VAR_1, VAR_0, &VAR_3, 1);
  FUNC_2("Probing for which registers that are read/write for page 0x%x\n",
   VAR_3);
  for (VAR_2 = 0; VAR_2 <= 0xff; VAR_2++) {
   u8 VAR_6, VAR_7, VAR_8 = 0xff;

   FUNC_0(VAR_1, VAR_2, &VAR_6, 1);
   FUNC_1(VAR_1, VAR_2, &VAR_8, 1);
   FUNC_0(VAR_1, VAR_2, &VAR_7, 1);

   if (VAR_7 == VAR_8)
    FUNC_2("register 0x%x is writeable\n",
     VAR_2);
   else
    FUNC_2("register 0x%x is read only\n",
     VAR_2);


   FUNC_1(VAR_1, VAR_2, &VAR_6, 1);
  }
 }
 FUNC_2("Read/write register probing complete\n");
 FUNC_1(VAR_1, VAR_0, &VAR_4, 1);
}
