
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct device*,size_t,int *,int ,unsigned long) ;
 scalar_t__ FUNC_2 (struct device*,unsigned long) ;
 void* FUNC_3 (struct device*,size_t,int *,int ,unsigned long) ;

void *FUNC_4(struct device *VAR_1, size_t VAR_2,
  dma_addr_t *VAR_3, gfp_t VAR_4, unsigned long VAR_5)
{
 if (!FUNC_0(VAR_0) &&
     FUNC_2(VAR_1, VAR_5))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
