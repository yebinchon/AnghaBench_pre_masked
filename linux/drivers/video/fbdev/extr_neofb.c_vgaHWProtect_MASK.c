
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned char FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(int VAR_0)
{
 unsigned char VAR_1;

 VAR_1 = FUNC_2(((void*)0), 0x01);
 if (VAR_0) {



  FUNC_3(((void*)0), 0x00, 0x01);
  FUNC_3(((void*)0), 0x01, VAR_1 | 0x20);

  FUNC_1();
 } else {



  FUNC_3(((void*)0), 0x01, VAR_1 & ~0x20);
  FUNC_3(((void*)0), 0x00, 0x03);

  FUNC_0();
 }
}
