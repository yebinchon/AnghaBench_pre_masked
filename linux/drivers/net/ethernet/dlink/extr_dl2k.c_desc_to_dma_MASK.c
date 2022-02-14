
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_desc {int fraginfo; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_2(struct netdev_desc *VAR_0)
{
 return FUNC_1(VAR_0->fraginfo) & FUNC_0(48);
}
