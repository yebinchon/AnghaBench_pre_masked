
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {int usage; scalar_t__ read_only; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct block_device*) ;
 struct mmc_blk_data* FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_blk_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_4, fmode_t VAR_5)
{
 struct mmc_blk_data *VAR_6 = FUNC_1(VAR_4->bd_disk);
 int VAR_7 = -VAR_0;

 FUNC_3(&VAR_3);
 if (VAR_6) {
  if (VAR_6->usage == 2)
   FUNC_0(VAR_4);
  VAR_7 = 0;

  if ((VAR_5 & VAR_2) && VAR_6->read_only) {
   FUNC_2(VAR_6);
   VAR_7 = -VAR_1;
  }
 }
 FUNC_4(&VAR_3);

 return VAR_7;
}
