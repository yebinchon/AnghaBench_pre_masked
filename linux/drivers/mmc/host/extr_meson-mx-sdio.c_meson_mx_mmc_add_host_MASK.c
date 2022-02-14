
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int max_blk_size; int caps; int * ops; void* f_max; void* f_min; void* max_blk_count; int max_req_size; int max_seg_size; } ;
struct meson_mx_mmc_host {int parent_clk; int cfg_div_clk; int slot_id; struct mmc_host* mmc; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int VAR_9 ;
 int FUNC_4 (struct mmc_host*) ;
 struct device* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct meson_mx_mmc_host *VAR_10)
{
 struct mmc_host *VAR_11 = VAR_10->mmc;
 struct device *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;

 if (FUNC_8(VAR_12->of_node, "reg", &VAR_10->slot_id)) {
  FUNC_3(VAR_12, "missing 'reg' property\n");
  return -VAR_1;
 }

 if (VAR_10->slot_id >= VAR_4) {
  FUNC_3(VAR_12, "invalid 'reg' property value %d\n",
   VAR_10->slot_id);
  return -VAR_1;
 }


 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_11->max_req_size = VAR_2;
 VAR_11->max_seg_size = VAR_11->max_req_size;
 VAR_11->max_blk_count =
  FUNC_0(VAR_6,
     0xffffffff);
 VAR_11->max_blk_size = FUNC_0(VAR_3,
          0xffffffff);
 VAR_11->max_blk_size -= (4 * VAR_5);
 VAR_11->max_blk_size /= VAR_0;


 VAR_11->f_min = FUNC_2(VAR_10->cfg_div_clk, 1);
 VAR_11->f_max = FUNC_2(VAR_10->cfg_div_clk,
        FUNC_1(VAR_10->parent_clk));

 VAR_11->caps |= VAR_8 | VAR_7;
 VAR_11->ops = &VAR_9;

 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return VAR_13;

 return 0;
}
