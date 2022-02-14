
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device {scalar_t__ bus_dma_mask; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct device*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static gfp_t FUNC_4(struct device *VAR_3, u64 VAR_4,
  u64 *VAR_5)
{
 if (VAR_3->bus_dma_mask && VAR_3->bus_dma_mask < VAR_4)
  VAR_4 = VAR_3->bus_dma_mask;

 if (FUNC_3(VAR_3))
  *VAR_5 = FUNC_1(VAR_3, VAR_4);
 else
  *VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (*VAR_5 <= FUNC_0(VAR_0))
  return VAR_1;
 if (*VAR_5 <= FUNC_0(32))
  return VAR_2;
 return 0;
}
