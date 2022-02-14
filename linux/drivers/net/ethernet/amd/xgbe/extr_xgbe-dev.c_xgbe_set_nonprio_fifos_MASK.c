
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3,
        unsigned int VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_1);

 if (VAR_4 <= VAR_0)
  return VAR_3;





 for (VAR_6 = VAR_0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5[VAR_6] = (VAR_1 / VAR_2) - 1;
  VAR_3 -= VAR_1;
 }

 return VAR_3;
}
