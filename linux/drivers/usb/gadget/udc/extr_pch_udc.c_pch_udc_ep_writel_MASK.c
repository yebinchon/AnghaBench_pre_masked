
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_udc_ep {scalar_t__ offset_addr; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct pch_udc_ep *VAR_0,
        unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_1, VAR_0->dev->base_addr + VAR_0->offset_addr + VAR_2);
}
