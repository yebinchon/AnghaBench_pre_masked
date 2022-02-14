
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(unsigned int *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
  if (VAR_6 == 1)
   continue;
  VAR_7 = VAR_2 * FUNC_2(VAR_6);
  switch (VAR_5 & VAR_0) {
  case 129:
  default:
   VAR_8 = FUNC_0(*VAR_4, VAR_7);
   break;
  case 130:
   VAR_8 = (*VAR_4) / VAR_7;
   break;
  case 128:
   VAR_8 = FUNC_1(*VAR_4, VAR_7);
   break;
  }
  if (VAR_8 <= VAR_1)
   break;
 }
 if (VAR_8 > VAR_1) {
  VAR_6 = VAR_3;
  VAR_8 = VAR_1;
  VAR_7 = VAR_2 * FUNC_2(VAR_6);
 }
 *VAR_4 = VAR_8 * VAR_7;
 return FUNC_4(VAR_6) |
        FUNC_3(VAR_8);
}
