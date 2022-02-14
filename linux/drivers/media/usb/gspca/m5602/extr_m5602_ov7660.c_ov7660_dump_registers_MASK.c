
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (struct sd*,int,int*,int) ;
 int FUNC_1 (struct sd*,int,int*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_0)
{
 int VAR_1;
 FUNC_2("Dumping the ov7660 register state\n");
 for (VAR_1 = 0; VAR_1 < 0xa9; VAR_1++) {
  u8 VAR_2;
  FUNC_0(VAR_0, VAR_1, &VAR_2, 1);
  FUNC_2("register 0x%x contains 0x%x\n", VAR_1, VAR_2);
 }

 FUNC_2("ov7660 register state dump complete\n");

 FUNC_2("Probing for which registers that are read/write\n");
 for (VAR_1 = 0; VAR_1 < 0xff; VAR_1++) {
  u8 VAR_3, VAR_4;
  u8 VAR_5[2] = {0xff, 0xff};

  FUNC_0(VAR_0, VAR_1, &VAR_3, 1);
  FUNC_1(VAR_0, VAR_1, VAR_5, 1);
  FUNC_0(VAR_0, VAR_1, &VAR_4, 1);

  if (VAR_4 == VAR_5[0])
   FUNC_2("register 0x%x is writeable\n", VAR_1);
  else
   FUNC_2("register 0x%x is read only\n", VAR_1);


  FUNC_1(VAR_0, VAR_1, &VAR_3, 1);
 }
}
