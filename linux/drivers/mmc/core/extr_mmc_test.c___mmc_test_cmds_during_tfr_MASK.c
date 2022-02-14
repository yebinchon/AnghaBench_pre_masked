
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_test_area {int dev_addr; } ;
struct mmc_test_card {TYPE_2__* card; struct mmc_test_area area; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_test_card*,unsigned long,int ,int ) ;
 int FUNC_1 (struct mmc_test_card*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_2,
          unsigned long VAR_3, int VAR_4, int VAR_5,
          int VAR_6)
{
 struct mmc_test_area *VAR_7 = &VAR_2->area;
 int VAR_8;

 if (!(VAR_2->card->host->caps & VAR_0))
  return VAR_1;

 VAR_8 = FUNC_0(VAR_2, VAR_3, 0, 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_7->dev_addr, VAR_4, 0, VAR_5,
     VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_2, VAR_7->dev_addr, VAR_4, 1, VAR_5,
      VAR_6);
}
