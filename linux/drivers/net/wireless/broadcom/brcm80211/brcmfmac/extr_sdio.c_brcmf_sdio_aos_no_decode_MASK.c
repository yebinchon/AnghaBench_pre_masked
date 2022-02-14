
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_sdio {TYPE_1__* ci; } ;
struct TYPE_2__ {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct brcmf_sdio *VAR_1)
{
 if (VAR_1->ci->chip == VAR_0)
  return 1;
 else
  return 0;
}
