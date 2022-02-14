
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {scalar_t__ max_busy_timeout; } ;
struct TYPE_2__ {int erase_group_def; } ;
struct mmc_card {unsigned int pref_erase; unsigned int erase_size; TYPE_1__ ext_csd; struct mmc_host* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 unsigned int FUNC_2 (struct mmc_card*,int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ,unsigned int,scalar_t__) ;

unsigned int FUNC_5(struct mmc_card *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->host;
 unsigned int VAR_5, VAR_6;






 if (FUNC_1(VAR_3) && !(VAR_3->ext_csd.erase_group_def & 1))
  return VAR_3->pref_erase;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_2(VAR_3, VAR_2);
  if (VAR_6 < VAR_5 || VAR_5 == 0)
   VAR_5 = VAR_6;
 } else if (VAR_5 < VAR_3->erase_size) {
  VAR_5 = 0;
 }
 FUNC_4("%s: calculated max. discard sectors %u for timeout %u ms\n",
  FUNC_3(VAR_4), VAR_5, VAR_4->max_busy_timeout ?
  VAR_4->max_busy_timeout : VAR_1);
 return VAR_5;
}
