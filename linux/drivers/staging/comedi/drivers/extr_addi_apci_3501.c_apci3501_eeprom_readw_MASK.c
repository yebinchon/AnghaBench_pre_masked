
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned long) ;
 unsigned char FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned short,unsigned long) ;

__attribute__((used)) static unsigned short FUNC_3(unsigned long VAR_6,
         unsigned short VAR_7)
{
 unsigned short VAR_8 = 0;
 unsigned char VAR_9;
 unsigned char VAR_10;


 VAR_7 += VAR_5;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {

  FUNC_2(VAR_4, VAR_6 + VAR_0);
  FUNC_0(VAR_6);
  FUNC_2((VAR_7 + VAR_10) & 0xff, VAR_6 + VAR_1);
  FUNC_0(VAR_6);


  FUNC_2(VAR_3, VAR_6 + VAR_0);
  FUNC_0(VAR_6);
  FUNC_2(((VAR_7 + VAR_10) >> 8) & 0xff,
       VAR_6 + VAR_1);
  FUNC_0(VAR_6);


  FUNC_2(VAR_2, VAR_6 + VAR_0);
  FUNC_0(VAR_6);
  VAR_9 = FUNC_1(VAR_6 + VAR_1);
  FUNC_0(VAR_6);

  if (VAR_10 == 0)
   VAR_8 |= VAR_9;
  else
   VAR_8 |= (VAR_9 << 8);
 }

 return VAR_8;
}
