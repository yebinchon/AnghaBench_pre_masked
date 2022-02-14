
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_4)
{
 if (!VAR_0) {
  if (VAR_1) {
   VAR_1 = 0;
   FUNC_2("c");
  } else {
   FUNC_2(VAR_4);
  }
  return;
 }
 switch (VAR_3) {
 case 0:
  FUNC_3("Emulate single step\n");

  FUNC_2("g");
  break;
 case 1:

  FUNC_0("Z0", ((void*)0), VAR_2);
  break;
 case 2:

  FUNC_2("c");
  break;
 case 3:

  FUNC_0("z0", ((void*)0), VAR_2);
  break;
 default:
  FUNC_1("kgdbts: ERROR failed sstep get emulation\n");
 }
 VAR_3++;
}
