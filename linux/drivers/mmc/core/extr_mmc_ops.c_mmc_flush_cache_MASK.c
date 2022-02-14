
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cache_size; int cache_ctrl; } ;
struct mmc_card {int host; TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*,int ,int ,int,int ) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(struct mmc_card *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(VAR_2) &&
   (VAR_2->ext_csd.cache_size > 0) &&
   (VAR_2->ext_csd.cache_ctrl & 1)) {
  VAR_3 = FUNC_2(VAR_2, VAR_0,
    VAR_1, 1, 0);
  if (VAR_3)
   FUNC_3("%s: cache flush error %d\n",
     FUNC_1(VAR_2->host), VAR_3);
 }

 return VAR_3;
}
