
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;


 VAR_2 = (12 + 15 * VAR_0) / VAR_1;


 if (!VAR_2)
  return 1;


 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = VAR_3 - VAR_0;
 if (VAR_4 < -1)
  VAR_2++;
 else if (VAR_4 > 1)
  VAR_2--;


 if (VAR_2 >= 15)
  return 0;

 return VAR_2;
}
