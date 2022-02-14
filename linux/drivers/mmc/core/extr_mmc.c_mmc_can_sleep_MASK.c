
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;



__attribute__((used)) static int FUNC_0(struct mmc_card *VAR_0)
{
 return (VAR_0 && VAR_0->ext_csd.rev >= 3);
}
