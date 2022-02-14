
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raw_driver_strength; int hs200_max_dtr; } ;
struct mmc_card {int drive_strength; TYPE_2__* host; TYPE_1__ ext_csd; } ;
struct TYPE_4__ {int fixed_drv_type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_card*,int ,int,int*) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(struct mmc_card *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;
 int VAR_4 = VAR_0->host->fixed_drv_type;

 VAR_1 = VAR_0->ext_csd.raw_driver_strength |
   FUNC_0(0);

 if (VAR_4 >= 0)
  VAR_2 = VAR_1 & FUNC_0(VAR_4)
     ? VAR_4 : 0;
 else
  VAR_2 = FUNC_1(VAR_0,
          VAR_0->ext_csd.hs200_max_dtr,
          VAR_1, &VAR_3);

 VAR_0->drive_strength = VAR_2;

 if (VAR_3)
  FUNC_2(VAR_0->host, VAR_3);
}
