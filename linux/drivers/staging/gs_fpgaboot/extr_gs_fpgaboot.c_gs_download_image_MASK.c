
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fpgaimage {int lendata; scalar_t__ fpgadata; } ;
typedef enum wbus { ____Placeholder_wbus } wbus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct fpgaimage *VAR_4, enum wbus VAR_5)
{
 u8 *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_6 = (u8 *)VAR_4->fpgadata;
 VAR_7 = VAR_4->lendata;





 if (!FUNC_11(VAR_5)) {
  FUNC_1("unsupported program bus width %d\n",
         VAR_5);
  return -VAR_1;
 }


 FUNC_7(1);
 FUNC_8(0);
 FUNC_4(0);


 FUNC_7(0);
 FUNC_0(20);
 FUNC_7(1);


 while (FUNC_6() == 0)
  ;

 FUNC_2("device init done\n");

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += VAR_5)
  FUNC_9(VAR_5, VAR_6 + VAR_8);

 FUNC_2("program done\n");


 if (FUNC_6() == 0) {
  FUNC_1("init_b 0\n");
  return -VAR_2;
 }

 while (FUNC_5() == 0) {
  if (VAR_9++ > VAR_3) {
   FUNC_1("init_B %d\n", FUNC_6());
   break;
  }
 }

 if (VAR_9 > VAR_3) {
  FUNC_1("fpga download fail\n");
  return -VAR_2;
 }

 FUNC_2("download fpgaimage\n");


 FUNC_10(8);

 return 0;
}
