
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct mmc_blk_data {scalar_t__ usage; int disk; TYPE_1__ queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mmc_blk_data*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mmc_blk_data *VAR_2)
{
 FUNC_4(&VAR_1);
 VAR_2->usage--;
 if (VAR_2->usage == 0) {
  int VAR_3 = FUNC_3(VAR_2->disk);
  FUNC_0(VAR_2->queue.queue);
  FUNC_1(&VAR_0, VAR_3);
  FUNC_6(VAR_2->disk);
  FUNC_2(VAR_2);
 }
 FUNC_5(&VAR_1);
}
