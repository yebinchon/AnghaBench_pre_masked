
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 unsigned long FUNC_0 (int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(phys_addr_t VAR_0, size_t VAR_1)
{
 unsigned long VAR_2, VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4, VAR_5 = FUNC_1(FUNC_3(VAR_0) + VAR_1);

 VAR_2 = FUNC_2(VAR_3);

 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++)
  if (FUNC_2(++VAR_3) != ++VAR_2)
   return 1;

 return 0;
}
