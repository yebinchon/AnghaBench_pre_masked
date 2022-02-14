
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmdclass; } ;
struct mmc_card {TYPE_1__ csd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;

__attribute__((used)) static inline int FUNC_1(struct mmc_card *VAR_1)
{
 return FUNC_0(VAR_1) ||
        !(VAR_1->csd.cmdclass & VAR_0);
}
