
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned long) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 >= VAR_2)
   return -VAR_0;
 } while (FUNC_1(VAR_3, VAR_1));

 return VAR_3;
}
