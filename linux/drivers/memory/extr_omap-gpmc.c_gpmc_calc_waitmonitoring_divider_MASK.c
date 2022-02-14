
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_1)
{

 int VAR_2 = FUNC_0(VAR_1);

 VAR_2 += VAR_0 - 1;
 VAR_2 /= VAR_0;

 if (VAR_2 > 4)
  return -1;
 if (VAR_2 <= 0)
  VAR_2 = 1;

 return VAR_2;

}
