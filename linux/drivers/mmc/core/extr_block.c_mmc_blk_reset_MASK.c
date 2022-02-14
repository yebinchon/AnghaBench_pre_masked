
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; } ;
struct mmc_blk_data {int reset_done; int part_type; int part_curr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mmc_blk_data* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_blk_data *VAR_3, struct mmc_host *VAR_4,
    int VAR_5)
{
 int VAR_6;

 if (VAR_3->reset_done & VAR_5)
  return -VAR_0;

 VAR_3->reset_done |= VAR_5;
 VAR_6 = FUNC_2(VAR_4);

 if (VAR_6 != -VAR_2) {
  struct mmc_blk_data *VAR_7 =
   FUNC_0(&VAR_4->card->dev);
  int VAR_8;

  VAR_7->part_curr = VAR_7->part_type;
  VAR_8 = FUNC_1(VAR_4->card, VAR_3->part_type);
  if (VAR_8) {




   return -VAR_1;
  }
 }
 return VAR_6;
}
