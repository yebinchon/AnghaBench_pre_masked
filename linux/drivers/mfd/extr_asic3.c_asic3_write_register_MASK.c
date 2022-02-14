
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asic3 {unsigned int bus_shift; scalar_t__ mapping; } ;


 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct asic3 *VAR_0, unsigned int VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->mapping +
    (VAR_1 >> VAR_0->bus_shift));
}
