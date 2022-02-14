
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ hs_max_dtr; } ;
struct TYPE_7__ {int cmdclass; } ;
struct TYPE_6__ {scalar_t__ sda_vsn; } ;
struct mmc_card {TYPE_4__* host; TYPE_1__ sw_caps; TYPE_3__ csd; TYPE_2__ scr; } ;
struct TYPE_8__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct mmc_card*,int,int ,int,int*) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct mmc_card *VAR_5)
{
 int VAR_6;
 u8 *VAR_7;

 if (VAR_5->scr.sda_vsn < VAR_4)
  return 0;

 if (!(VAR_5->csd.cmdclass & VAR_0))
  return 0;

 if (!(VAR_5->host->caps & VAR_3))
  return 0;

 if (VAR_5->sw_caps.hs_max_dtr == 0)
  return 0;

 VAR_7 = FUNC_1(64, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5, 1, 0, 1, VAR_7);
 if (VAR_6)
  goto out;

 if ((VAR_7[16] & 0xF) != 1) {
  FUNC_4("%s: Problem switching card into high-speed mode!\n",
   FUNC_2(VAR_5->host));
  VAR_6 = 0;
 } else {
  VAR_6 = 1;
 }

out:
 FUNC_0(VAR_7);

 return VAR_6;
}
