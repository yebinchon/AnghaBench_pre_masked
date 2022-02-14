
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; ) {
  for (VAR_3 = 0; VAR_2 < VAR_0 && VAR_3 < 32; ++VAR_2, ++VAR_3)
   FUNC_0("%02x", *VAR_1++);
  FUNC_0("\n");
 }
}
