
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_1, size_t VAR_2,
  dma_addr_t *VAR_3)
{
 void *VAR_4 = FUNC_1(VAR_2, VAR_0);

 if (VAR_4)
  *VAR_3 = FUNC_0(VAR_4);

 return VAR_4;
}
