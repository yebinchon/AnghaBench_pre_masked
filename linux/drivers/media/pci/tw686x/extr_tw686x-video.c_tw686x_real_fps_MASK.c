
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long*) ;
 unsigned long FUNC_1 (unsigned int,int ) ;
 unsigned long* VAR_0 ;
 unsigned int FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_1 || VAR_1 >= FUNC_0(VAR_0))
  return VAR_2;

 VAR_3 = FUNC_1(VAR_2 - 1, 0);
 return FUNC_2(VAR_0[VAR_1] & VAR_3);
}
