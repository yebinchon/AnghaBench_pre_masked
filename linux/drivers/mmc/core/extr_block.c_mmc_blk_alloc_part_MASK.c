
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mmc_card {int dummy; } ;
struct mmc_blk_data {unsigned int part_type; TYPE_1__* disk; int part; } ;
typedef int sector_t ;
typedef int cap_str ;
struct TYPE_3__ {int disk_name; } ;


 scalar_t__ FUNC_0 (struct mmc_blk_data*) ;
 int FUNC_1 (struct mmc_blk_data*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 struct mmc_blk_data* FUNC_5 (struct mmc_card*,int ,int ,int,char const*,int) ;
 int FUNC_6 (struct mmc_card*) ;
 int FUNC_7 (struct mmc_card*) ;
 int FUNC_8 (char*,int ,int ,int ,unsigned int,char*) ;
 int FUNC_9 (int ,int,int ,char*,int) ;

__attribute__((used)) static int FUNC_10(struct mmc_card *VAR_1,
         struct mmc_blk_data *VAR_2,
         unsigned int VAR_3,
         sector_t VAR_4,
         bool VAR_5,
         const char *VAR_6,
         int VAR_7)
{
 char VAR_8[10];
 struct mmc_blk_data *VAR_9;

 VAR_9 = FUNC_5(VAR_1, FUNC_2(VAR_2->disk), VAR_4, VAR_5,
        VAR_6, VAR_7);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 VAR_9->part_type = VAR_3;
 FUNC_4(&VAR_9->part, &VAR_2->part);

 FUNC_9((u64)FUNC_3(VAR_9->disk), 512, VAR_0,
   VAR_8, sizeof(VAR_8));
 FUNC_8("%s: %s %s partition %u %s\n",
        VAR_9->disk->disk_name, FUNC_6(VAR_1),
        FUNC_7(VAR_1), VAR_9->part_type, VAR_8);
 return 0;
}
