
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ vbase; } ;
struct savagefb_par {TYPE_1__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(u32 VAR_0, struct savagefb_par *VAR_1)
{
 return FUNC_0(VAR_1->mmio.vbase + VAR_0);
}
