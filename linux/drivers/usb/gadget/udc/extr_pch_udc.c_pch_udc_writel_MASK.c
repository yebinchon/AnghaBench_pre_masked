
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_udc_dev {scalar_t__ base_addr; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct pch_udc_dev *VAR_0,
        unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_1, VAR_0->base_addr + VAR_2);
}
