
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdq_en; } ;
struct mmc_card {int dev; int host; TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_card*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_1) && !FUNC_2(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->ext_csd.cmdq_en) {
  FUNC_3(VAR_1->host);
  VAR_2 = FUNC_4(VAR_1);
  FUNC_5(VAR_1->host);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_0(&VAR_1->dev, "Card claimed for testing.\n");

 return 0;
}
