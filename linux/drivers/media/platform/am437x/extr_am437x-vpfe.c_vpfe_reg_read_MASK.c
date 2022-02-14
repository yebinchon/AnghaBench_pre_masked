
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base_addr; } ;
struct vpfe_ccdc {TYPE_1__ ccdc_cfg; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct vpfe_ccdc *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->ccdc_cfg.base_addr + VAR_1);
}
