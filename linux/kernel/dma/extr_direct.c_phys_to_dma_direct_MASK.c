
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_3(struct device *VAR_0,
  phys_addr_t VAR_1)
{
 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0, VAR_1);
 return FUNC_2(VAR_0, VAR_1);
}
