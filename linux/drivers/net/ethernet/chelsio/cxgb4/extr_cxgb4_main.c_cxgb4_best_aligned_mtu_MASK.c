
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

unsigned int FUNC_0(const unsigned short *VAR_1,
        unsigned short VAR_2,
        unsigned short VAR_3,
        unsigned short VAR_4,
        unsigned int *VAR_5)
{
 unsigned short VAR_6 = VAR_2 + VAR_3;
 unsigned short VAR_7 = VAR_4 - 1;
 int VAR_8, VAR_9;






 for (VAR_8 = 0, VAR_9 = -1; VAR_8 < VAR_0; VAR_8++) {
  unsigned short VAR_10 = VAR_1[VAR_8] - VAR_2;




  if ((VAR_10 & VAR_7) == 0)
   VAR_9 = VAR_8;





  if (VAR_8+1 < VAR_0 && VAR_1[VAR_8+1] > VAR_6)
   break;
 }




 if (VAR_8 == VAR_0)
  VAR_8--;





 if (VAR_9 >= 0 &&
     VAR_8 - VAR_9 <= 1)
  VAR_8 = VAR_9;




 if (VAR_5)
  *VAR_5 = VAR_8;
 return VAR_1[VAR_8];
}
