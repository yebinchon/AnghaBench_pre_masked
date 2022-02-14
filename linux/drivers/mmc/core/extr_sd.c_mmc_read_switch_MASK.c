
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int sd3_bus_mode; int sd3_drv_type; int sd3_curr_limit; int hs_max_dtr; } ;
struct TYPE_5__ {scalar_t__ sda_vsn; scalar_t__ sda_spec3; } ;
struct TYPE_4__ {int cmdclass; } ;
struct mmc_card {TYPE_3__ sw_caps; TYPE_2__ scr; int host; TYPE_1__ csd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_card*,int ,int ,int ,int*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_9)
{
 int VAR_10;
 u8 *VAR_11;

 if (VAR_9->scr.sda_vsn < VAR_7)
  return 0;

 if (!(VAR_9->csd.cmdclass & VAR_0)) {
  FUNC_4("%s: card lacks mandatory switch function, performance might suffer\n",
   FUNC_2(VAR_9->host));
  return 0;
 }

 VAR_11 = FUNC_1(64, VAR_5);
 if (!VAR_11)
  return -VAR_3;






 VAR_10 = FUNC_3(VAR_9, 0, 0, 0, VAR_11);
 if (VAR_10) {




  if (VAR_10 != -VAR_2 && VAR_10 != -VAR_4 && VAR_10 != -VAR_1)
   goto out;

  FUNC_4("%s: problem reading Bus Speed modes\n",
   FUNC_2(VAR_9->host));
  VAR_10 = 0;

  goto out;
 }

 if (VAR_11[13] & VAR_8)
  VAR_9->sw_caps.hs_max_dtr = VAR_6;

 if (VAR_9->scr.sda_spec3) {
  VAR_9->sw_caps.sd3_bus_mode = VAR_11[13];

  VAR_9->sw_caps.sd3_drv_type = VAR_11[9];
  VAR_9->sw_caps.sd3_curr_limit = VAR_11[7] | VAR_11[6] << 8;
 }

out:
 FUNC_0(VAR_11);

 return VAR_10;
}
