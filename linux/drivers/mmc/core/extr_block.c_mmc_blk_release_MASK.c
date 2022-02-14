
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {int dummy; } ;
struct gendisk {struct mmc_blk_data* private_data; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_blk_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct mmc_blk_data *VAR_3 = VAR_1->private_data;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_0);
}
