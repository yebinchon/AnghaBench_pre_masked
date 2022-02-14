
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct device*,size_t,int *,int ) ;

__attribute__((used)) static void *FUNC_1(struct device *VAR_0, size_t VAR_1,
        u64 *VAR_2, gfp_t VAR_3)
{
 dma_addr_t VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_5)
  *VAR_2 = VAR_4;
 return VAR_5;
}
