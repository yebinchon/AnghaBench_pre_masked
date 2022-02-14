
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_3(void)
{
 unsigned int VAR_1, VAR_2;
 unsigned long VAR_3;

 VAR_3 = (unsigned long) FUNC_0(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_1 = 0;
 VAR_2 = 1ULL << (sizeof(unsigned int)*8 - 1);
 while (VAR_2 > 0) {
  if (FUNC_2(VAR_3, VAR_1 | VAR_2) == 0)
   VAR_1 |= VAR_2;
  VAR_2 >>= 1;
 }

 FUNC_1 (VAR_3);

 return VAR_1;
}
