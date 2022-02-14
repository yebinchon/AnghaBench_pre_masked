
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static long FUNC_4(unsigned char VAR_0)
{
 unsigned char VAR_1 = VAR_0;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {

  FUNC_1(0);


  if ((VAR_1 & 0x80) != 0)
   FUNC_2(1);
  else
   FUNC_2(0);

  FUNC_3();


  FUNC_1(1);
  FUNC_3();


  VAR_1 = VAR_1 << 1;
 }


 FUNC_1(0);
 FUNC_2(1);


 FUNC_3();
 FUNC_1(1);
 FUNC_3();


 for (VAR_2 = 0; VAR_2 < 0xff; VAR_2++) {
  if (!FUNC_0())
   break;

  FUNC_1(0);
  FUNC_3();
  FUNC_1(1);
  FUNC_3();
 }


 FUNC_1(0);
 FUNC_2(1);

 if (VAR_2 < 0xff)
  return 0;
 else
  return -1;
}
