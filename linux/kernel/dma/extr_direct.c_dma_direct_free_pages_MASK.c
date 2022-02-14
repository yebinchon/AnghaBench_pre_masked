
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,size_t,void*) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct device*,unsigned long) ;
 scalar_t__ FUNC_4 (struct device*) ;
 unsigned int FUNC_5 (size_t) ;
 int FUNC_6 (unsigned long,int) ;
 void* FUNC_7 (void*) ;

void FUNC_8(struct device *VAR_2, size_t VAR_3, void *VAR_4,
  dma_addr_t VAR_5, unsigned long VAR_6)
{
 unsigned int VAR_7 = FUNC_5(VAR_3);

 if ((VAR_6 & VAR_1) &&
     !FUNC_4(VAR_2)) {

  FUNC_1(VAR_2, VAR_3, VAR_4);
  return;
 }

 if (FUNC_4(VAR_2))
  FUNC_6((unsigned long)VAR_4, 1 << VAR_7);

 if (FUNC_0(VAR_0) &&
     FUNC_3(VAR_2, VAR_6))
  VAR_4 = FUNC_2(VAR_4);
 FUNC_1(VAR_2, VAR_3, FUNC_7(VAR_4));
}
