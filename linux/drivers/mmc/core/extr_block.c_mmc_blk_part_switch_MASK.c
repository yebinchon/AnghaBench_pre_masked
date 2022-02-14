
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_2__ {unsigned int part_config; int part_time; } ;
struct mmc_card {TYPE_1__ ext_csd; int dev; } ;
struct mmc_blk_data {unsigned int part_curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct mmc_blk_data* FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_card*,unsigned int) ;
 int FUNC_2 (struct mmc_card*,unsigned int) ;
 scalar_t__ FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct mmc_card*,int ,int ,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct mmc_card *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5 = 0;
 struct mmc_blk_data *VAR_6 = FUNC_0(&VAR_3->dev);

 if (VAR_6->part_curr == VAR_4)
  return 0;

 if (FUNC_3(VAR_3)) {
  u8 VAR_7 = VAR_3->ext_csd.part_config;

  VAR_5 = FUNC_2(VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;

  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_4;

  VAR_5 = FUNC_4(VAR_3, VAR_0,
     VAR_1, VAR_7,
     VAR_3->ext_csd.part_time);
  if (VAR_5) {
   FUNC_1(VAR_3, VAR_4);
   return VAR_5;
  }

  VAR_3->ext_csd.part_config = VAR_7;

  VAR_5 = FUNC_1(VAR_3, VAR_6->part_curr);
 }

 VAR_6->part_curr = VAR_4;
 return VAR_5;
}
