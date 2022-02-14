
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1)
{
 int VAR_2;
 const int VAR_3 = FUNC_0(VAR_0) - 1;

 FUNC_1(VAR_3 >= (1 << 16));



 VAR_2 = ((VAR_1 >> 16) * VAR_3) >> 16;


 while (VAR_0[VAR_2] < VAR_1 && VAR_2 < VAR_3)
  VAR_2++;


 while (VAR_0[VAR_2] > VAR_1 && VAR_2 > 0)
  VAR_2--;

 return VAR_0[VAR_2] == VAR_1;
}
