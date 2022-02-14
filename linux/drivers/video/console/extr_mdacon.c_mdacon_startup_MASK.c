
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static const char *FUNC_5(void)
{
 VAR_4 = 80;
 VAR_5 = 25;

 VAR_11 = 0x01000;
 VAR_10 = (u16 *)FUNC_0(0xb0000, VAR_11);

 VAR_2 = 0x3b4;
 VAR_9 = 0x3b5;
 VAR_3 = 0x3b8;
 VAR_6 = 0x3ba;
 VAR_1 = 0x3bf;

 VAR_7 = VAR_0;
 VAR_8 = "MDA";

 if (! FUNC_1()) {
  FUNC_4("mdacon: MDA card not detected.\n");
  return ((void*)0);
 }

 if (VAR_7 != VAR_0) {
  FUNC_2();
 }


 FUNC_3(VAR_11 - 1);

 FUNC_4("mdacon: %s with %ldK of memory detected.\n",
  VAR_8, VAR_11/1024);

 return "MDA-2";
}
