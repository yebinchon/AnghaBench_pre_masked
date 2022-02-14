
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ raw_bkops_status; int man_bkops_en; } ;
struct mmc_card {int host; TYPE_1__ ext_csd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_card*,int ,int ,int,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ,int) ;

void FUNC_7(struct mmc_card *VAR_4)
{
 int VAR_5;

 if (!VAR_4->ext_csd.man_bkops_en)
  return;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_5("%s: Failed to read bkops status: %d\n",
         FUNC_0(VAR_4->host), VAR_5);
  return;
 }

 if (!VAR_4->ext_csd.raw_bkops_status ||
     VAR_4->ext_csd.raw_bkops_status < VAR_0)
  return;

 FUNC_2(VAR_4->host);






 VAR_5 = FUNC_4(VAR_4, VAR_2,
   VAR_1, 1, VAR_3);
 if (VAR_5)
  FUNC_6("%s: Error %d starting bkops\n",
   FUNC_0(VAR_4->host), VAR_5);

 FUNC_3(VAR_4->host);
}
