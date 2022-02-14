
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1, unsigned int *VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;




 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5 = VAR_1 * (VAR_6 + 1);
  switch (VAR_3 & VAR_0) {
  case 129:
  default:
   VAR_4 = FUNC_0(*VAR_2, VAR_5);
   break;
  case 130:
   VAR_4 = (*VAR_2) / VAR_5;
   break;
  case 128:
   VAR_4 = FUNC_1(*VAR_2, VAR_5);
   break;
  }
  if (VAR_4 < 65536) {
   *VAR_2 = VAR_4 * VAR_5;
   return (VAR_6 << 16) | (VAR_4);
  }
 }

 VAR_6 = 15;
 VAR_5 = VAR_1 * (VAR_6 + 1);
 VAR_4 = 65535;
 *VAR_2 = VAR_4 * VAR_5;
 return (VAR_6 << 16) | (VAR_4);
}
