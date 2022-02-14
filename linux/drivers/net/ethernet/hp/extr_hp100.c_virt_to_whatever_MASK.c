
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hp100_private {scalar_t__ whatever_offset; } ;
typedef scalar_t__ dma_addr_t ;


 struct hp100_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct net_device *VAR_0, u32 * VAR_1)
{
 struct hp100_private *VAR_2 = FUNC_0(VAR_0);
 return ((u_long) VAR_1) + VAR_2->whatever_offset;
}
