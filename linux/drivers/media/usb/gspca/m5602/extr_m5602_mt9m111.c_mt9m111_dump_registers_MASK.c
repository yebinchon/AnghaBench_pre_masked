
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sd*,int,int*,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_4)
{
 u8 VAR_5, VAR_6[2] = {0x00, 0x00};

 FUNC_2("Dumping the mt9m111 register state\n");

 FUNC_2("Dumping the mt9m111 sensor core registers\n");
 VAR_6[1] = VAR_3;
 FUNC_1(VAR_4, VAR_2, VAR_6, 2);
 for (VAR_5 = 0; VAR_5 < 0xff; VAR_5++) {
  FUNC_0(VAR_4, VAR_5, VAR_6, 2);
  FUNC_2("register 0x%x contains 0x%x%x\n",
   VAR_5, VAR_6[0], VAR_6[1]);
 }

 FUNC_2("Dumping the mt9m111 color pipeline registers\n");
 VAR_6[1] = VAR_1;
 FUNC_1(VAR_4, VAR_2, VAR_6, 2);
 for (VAR_5 = 0; VAR_5 < 0xff; VAR_5++) {
  FUNC_0(VAR_4, VAR_5, VAR_6, 2);
  FUNC_2("register 0x%x contains 0x%x%x\n",
   VAR_5, VAR_6[0], VAR_6[1]);
 }

 FUNC_2("Dumping the mt9m111 camera control registers\n");
 VAR_6[1] = VAR_0;
 FUNC_1(VAR_4, VAR_2, VAR_6, 2);
 for (VAR_5 = 0; VAR_5 < 0xff; VAR_5++) {
  FUNC_0(VAR_4, VAR_5, VAR_6, 2);
  FUNC_2("register 0x%x contains 0x%x%x\n",
   VAR_5, VAR_6[0], VAR_6[1]);
 }

 FUNC_2("mt9m111 register state dump complete\n");
}
