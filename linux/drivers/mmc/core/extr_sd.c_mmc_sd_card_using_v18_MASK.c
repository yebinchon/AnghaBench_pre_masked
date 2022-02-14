
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sd3_bus_mode; } ;
struct mmc_card {TYPE_1__ sw_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct mmc_card *VAR_3)
{






 return VAR_3->sw_caps.sd3_bus_mode &
        (VAR_2 | VAR_1 | VAR_0);
}
