
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_udc_ep {scalar_t__ offset_addr; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct pch_udc_ep *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_0->dev->base_addr + VAR_0->offset_addr + VAR_1);
}
