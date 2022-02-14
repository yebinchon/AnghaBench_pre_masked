
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_area {unsigned long blocks; int sg_len; int max_seg_sz; int max_segs; int sg; int mem; } ;
struct mmc_test_card {TYPE_1__* card; struct mmc_test_area area; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int ,int,int ,int ,int *,int) ;
 int FUNC_2 (int ,unsigned long,int ,int ,int ,int *) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_test_card *VAR_0, unsigned long VAR_1,
        int VAR_2, int VAR_3)
{
 struct mmc_test_area *VAR_4 = &VAR_0->area;
 int VAR_5;

 VAR_4->blocks = VAR_1 >> 9;

 if (VAR_2) {
  VAR_5 = FUNC_2(VAR_4->mem, VAR_1, VAR_4->sg,
        VAR_4->max_segs, VAR_4->max_seg_sz,
           &VAR_4->sg_len);
 } else {
  VAR_5 = FUNC_1(VAR_4->mem, VAR_1, VAR_4->sg, 1, VAR_4->max_segs,
          VAR_4->max_seg_sz, &VAR_4->sg_len, VAR_3);
 }
 if (VAR_5)
  FUNC_3("%s: Failed to map sg list\n",
         FUNC_0(VAR_0->card->host));
 return VAR_5;
}
