
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int dma_addr_t ;
typedef int TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 unsigned long VAR_1 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(TW_Device_Extension *VAR_2, int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 dma_addr_t VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10 = 1;
 int VAR_11 = 0;

 VAR_5 = VAR_1;

 while (!VAR_11) {
  if (sizeof(dma_addr_t) > 4) {
   VAR_7 = FUNC_4(FUNC_0(VAR_2));
   VAR_8 = FUNC_4(FUNC_1(VAR_2));
   VAR_6 = ((u64)VAR_7 << 32) | VAR_8;
  } else
   VAR_6 = FUNC_4(FUNC_1(VAR_2));

  VAR_9 = (u32)VAR_6;

  if (FUNC_2(VAR_9) == VAR_3)
   VAR_11 = 1;

  if (FUNC_5(VAR_1, VAR_5 + VAR_0 * VAR_4))
   goto out;

  FUNC_3(50);
 }
 VAR_10 = 0;
out:
 return VAR_10;
}
