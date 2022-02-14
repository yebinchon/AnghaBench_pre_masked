
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_card {TYPE_2__* host; } ;
struct TYPE_3__ {scalar_t__ timing; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct mmc_card *VAR_1)
{
 return VAR_1->host->ios.timing == VAR_0;
}
