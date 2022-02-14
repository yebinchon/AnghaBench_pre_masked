
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned short volatile*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0)
{
 unsigned long VAR_1;
 int VAR_2, VAR_3;

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  volatile unsigned short *VAR_4 = (unsigned short *)(VAR_0 + (VAR_2 * 0x1000));



  if (FUNC_0(VAR_4) == 0)
   break;


  *VAR_4 = 0xA5A0 | VAR_2;

  if (*VAR_4 != (0xA5A0 | VAR_2))
   break;


  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   volatile unsigned short *VAR_5 = (unsigned short *)(VAR_0 + (VAR_3 * 0x1000));
   if (*VAR_5 != (0xA5A0 | VAR_3))
    break;
  }
 }
 FUNC_1(VAR_1);




 return VAR_2 * 0x1000;
}
