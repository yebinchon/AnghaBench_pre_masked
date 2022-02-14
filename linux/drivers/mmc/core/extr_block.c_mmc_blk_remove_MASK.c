
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {scalar_t__ type; int complete_wq; int dev; int host; } ;
struct mmc_blk_data {scalar_t__ part_curr; scalar_t__ part_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct mmc_blk_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mmc_card*,scalar_t__) ;
 int FUNC_4 (struct mmc_card*,struct mmc_blk_data*) ;
 int FUNC_5 (struct mmc_card*,struct mmc_blk_data*) ;
 int FUNC_6 (struct mmc_blk_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct mmc_card *VAR_1)
{
 struct mmc_blk_data *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_4(VAR_1, VAR_2);
 FUNC_5(VAR_1, VAR_2);
 FUNC_10(&VAR_1->dev);
 if (VAR_2->part_curr != VAR_2->part_type) {
  FUNC_7(VAR_1->host);
  FUNC_3(VAR_1, VAR_2->part_type);
  FUNC_8(VAR_1->host);
 }
 if (VAR_1->type != VAR_0)
  FUNC_9(&VAR_1->dev);
 FUNC_11(&VAR_1->dev);
 FUNC_6(VAR_2);
 FUNC_2(&VAR_1->dev, ((void*)0));
 FUNC_0(VAR_1->complete_wq);
}
