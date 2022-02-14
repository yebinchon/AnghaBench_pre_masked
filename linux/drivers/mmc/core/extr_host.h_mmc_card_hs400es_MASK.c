
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_card {TYPE_2__* host; } ;
struct TYPE_3__ {int enhanced_strobe; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;



__attribute__((used)) static inline bool FUNC_0(struct mmc_card *VAR_0)
{
 return VAR_0->host->ios.enhanced_strobe;
}
