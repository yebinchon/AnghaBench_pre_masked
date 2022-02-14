
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(dma_addr_t VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4 = FUNC_3(VAR_3);
 phys_addr_t VAR_5 = FUNC_2(VAR_4);





 if (FUNC_4(FUNC_0(VAR_5))) {
  return VAR_5 >= FUNC_5(VAR_1) &&
         VAR_5 < FUNC_5(VAR_0);
 }
 return 0;
}
