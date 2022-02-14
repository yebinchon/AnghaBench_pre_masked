
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned long*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (FUNC_2(VAR_6 >= VAR_2) && (VAR_3 > VAR_4))
  VAR_6 = FUNC_0(VAR_1, VAR_2, 0, VAR_3 - 1,
            VAR_5);
 if (FUNC_2(VAR_6 >= VAR_2))
  return -VAR_0;

 FUNC_1(VAR_1, VAR_6, VAR_4);
 return (int)VAR_6;
}
