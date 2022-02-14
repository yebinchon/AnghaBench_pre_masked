
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aspeed_smc_chip {scalar_t__ cs; TYPE_2__* controller; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {scalar_t__ we0; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct aspeed_smc_chip *VAR_0)
{
 return FUNC_0(VAR_0->controller->info->we0 + VAR_0->cs);
}
