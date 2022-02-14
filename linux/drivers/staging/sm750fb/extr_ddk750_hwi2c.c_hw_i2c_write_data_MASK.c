
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned char VAR_7,
          unsigned int VAR_8,
          unsigned char *VAR_9)
{
 unsigned char VAR_10, VAR_11;
 unsigned int VAR_12 = 0;


 FUNC_2(VAR_5, VAR_7 & ~0x01);






 do {




  FUNC_2(VAR_4, 0);


  if (VAR_8 < VAR_6)
   VAR_10 = VAR_8 - 1;
  else
   VAR_10 = VAR_6 - 1;
  FUNC_2(VAR_0, VAR_10);


  for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++)
   FUNC_2(VAR_3 + VAR_11, *VAR_9++);


  FUNC_2(VAR_1, FUNC_1(VAR_1) | VAR_2);


  if (FUNC_0() != 0)
   break;


  VAR_8 -= (VAR_10 + 1);


  VAR_12 += (VAR_10 + 1);

 } while (VAR_8 > 0);

 return VAR_12;
}
