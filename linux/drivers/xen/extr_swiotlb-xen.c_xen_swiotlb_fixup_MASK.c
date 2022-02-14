
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__,int,int,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4, size_t VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 dma_addr_t VAR_10;
 phys_addr_t VAR_11 = FUNC_2(VAR_4);

 VAR_9 = FUNC_0(VAR_0 << VAR_1) + VAR_3;

 VAR_7 = 0;
 do {
  int VAR_12 = FUNC_1(VAR_6 - VAR_7, (unsigned long)VAR_0);

  do {
   VAR_8 = FUNC_3(
    VAR_11 + (VAR_7 << VAR_1),
    FUNC_0(VAR_12 << VAR_1),
    VAR_9, &VAR_10);
  } while (VAR_8 && VAR_9++ < VAR_2);
  if (VAR_8)
   return VAR_8;

  VAR_7 += VAR_12;
 } while (VAR_7 < VAR_6);
 return 0;
}
